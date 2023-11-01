#pragma once

#include "VinylRecord.h"
#include "Customer.h"
#include "Employee.h"

#include <string>
#include <iostream>
using namespace std;

// ����� ��� ������� "�����"
class Order {
private:

    int orderNumber;    // ����� ������
    string orderDate;   // ���� ������
    Employee employee;  // ��������� ��������
    Customer customer;  // ������
    VinylRecord orderedRecord; // ���������� ��������� ���������
    int quantityOrdered;       // ���/�� ���������� ��������� ���������
    float totalCost;    // ����� ��������� ������

public:

    // ���������� ��� ����������
    Order();
    // ���������� � �����������
    Order(int number, string date, Employee emp, Customer cust, VinylRecord record, int quantity, float cost);
    // ����������
    ~Order();

    // ����� ��� ������ ���������� � ������
    void outputOrder();
    
    // ������� ��� ������
    void setOrderNumber(int orderNumber);
    void setOrderDate(string orderDate);
    void setQuantityOrdered(int quantityOrdered);
    void setTotalCost(float totalCost);

    // ������� ��� ������
    const int getOrderNumber();
    const string getOrderDate();
    const int getQuantityOrdered();
    const float getTotalCost();
};
