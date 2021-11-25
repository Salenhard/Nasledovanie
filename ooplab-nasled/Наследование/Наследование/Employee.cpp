#include "Employee.h"
#include <iostream>

void Employee::set_wage(int new_wage)											// ������������� ��������
{
	if (new_wage > 0)
		this->wage = new_wage;
	else
		throw std::invalid_argument("Param cant be less then 0");
}

void Employee::set_employee_id(int new_employee_id)							// ������������� ����������� ������
{
	if (new_employee_id > 0)
		this->employee_id = new_employee_id;
	else
		throw std::invalid_argument("Param cant be less then 0");
}

void Employee::set_experience(int new_experience)					// ������������� ���� ������
{
	if (new_experience > 0)
		this->experience = new_experience;
	else throw std::invalid_argument("Param cant less then 0");
}

int Employee::get_employee_id() const												// ��������� ���������� ������
{
	return this->employee_id;
}

int Employee::get_experience() const										// ��������� ���� ������
{
	return this->experience;
}

int Employee::get_wage() const														// ��������� ��������
{
	return this->wage;
}

Employee::Employee()																// ����������� �� ���������
{
	set_name("Holo");
	Date();
	set_secondname("Salen");
	set_lastname("Shaft");
	this->employee_id = 22521;
	this->wage = 60000;
	this->experience = 3;
}

Employee::Employee(int new_wage, int new_employee_id, const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth)					// ����������� � �����������
{
	set_props(new_wage, new_employee_id, new_name, new_secondname, new_lastname, new_date_of_birth);
}

void  Employee::set_props(int new_wage, int new_employee_id, const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth)			// ������������� ��� ���� ������
{
	set_employee_id(new_employee_id);
	set_wage(new_wage);
	set_name(new_name);
	set_secondname(new_secondname);
	set_lastname(new_lastname);
	set_date_of_birth(new_date_of_birth);
}

std::string Employee::get_string() const											// ��������� ��� ���� ������ � ���� ������
{
	std::string str;
	return str =
		"���: " + get_name() + "\n" +
		"��������: " + get_secondname() + "\n" +
		"�������: " + get_lastname() + "\n" +
		"���� ��������: " + date_of_birth.get_string() + "\n" + 
		"��������:" + std::to_string(this->wage) + "\n" +
		"���������� ������:" + std::to_string(this->employee_id) + "\n" +
		"���� ������:" + std::to_string(this->experience) + "\n";
}