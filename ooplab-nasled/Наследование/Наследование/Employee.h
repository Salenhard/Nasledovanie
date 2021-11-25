#pragma once

// ����� �������� ��������� ���-20

#include "Human.h"
#include "String"

// ����� ��������

class Employee : public Human
{
private:
	int employee_id;																//	���������� ������
	int wage;																		//	��������
	int experience;																	// ���� ������

public:
	void set_wage(int new_wage);													// ������������� ��������
	void set_employee_id(int new_employee_id);										// ������������� ����������� ������
	void set_experience(int new_experience);										// ������������� ���� ������
	int get_employee_id() const;													// ��������� ���������� ������
	int get_wage() const;															// ��������� ��������
	int get_experience() const;														// ��������� ���� ������
	Employee();																		// ����������� �� ���������
	Employee(int new_wage, int new_employee_id, const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth);						// ����������� � �����������
	void set_props(int new_wage, int new_employee_id, const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth);					// ������������� ��� ���� ������
	std::string get_string() const;													// ��������� ��� ���� ������ � ���� ������
};

