#include "Employee.h"
#include <iostream>

void Employee::set_wage(int new_wage)											// устанавливает зарплату
{
	if (new_wage > 0)
		this->wage = new_wage;
	else
		throw std::invalid_argument("Param cant be less then 0");
}

void Employee::set_employee_id(int new_employee_id)							// устанавливает паспротрные данные
{
	if (new_employee_id > 0)
		this->employee_id = new_employee_id;
	else
		throw std::invalid_argument("Param cant be less then 0");
}

void Employee::set_experience(int new_experience)					// устанавливает стаж работы
{
	if (new_experience > 0)
		this->experience = new_experience;
	else throw std::invalid_argument("Param cant less then 0");
}

int Employee::get_employee_id() const												// возращает паспортные данные
{
	return this->employee_id;
}

int Employee::get_experience() const										// возращает стаж работы
{
	return this->experience;
}

int Employee::get_wage() const														// возращает зарплату
{
	return this->wage;
}

Employee::Employee()																// конструктор по умолчанию
{
	set_name("Holo");
	Date();
	set_secondname("Salen");
	set_lastname("Shaft");
	this->employee_id = 22521;
	this->wage = 60000;
	this->experience = 3;
}

Employee::Employee(int new_wage, int new_employee_id, const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth)					// конструктор с параметрами
{
	set_props(new_wage, new_employee_id, new_name, new_secondname, new_lastname, new_date_of_birth);
}

void  Employee::set_props(int new_wage, int new_employee_id, const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth)			// устанавливает все поля класса
{
	set_employee_id(new_employee_id);
	set_wage(new_wage);
	set_name(new_name);
	set_secondname(new_secondname);
	set_lastname(new_lastname);
	set_date_of_birth(new_date_of_birth);
}

std::string Employee::get_string() const											// возращает все поля класса в виде строки
{
	std::string str;
	return str =
		"Имя: " + get_name() + "\n" +
		"Отчество: " + get_secondname() + "\n" +
		"Фамилия: " + get_lastname() + "\n" +
		"Дата рождения: " + date_of_birth.get_string() + "\n" + 
		"Зарплата:" + std::to_string(this->wage) + "\n" +
		"Паспортные данные:" + std::to_string(this->employee_id) + "\n" +
		"Стаж работы:" + std::to_string(this->experience) + "\n";
}