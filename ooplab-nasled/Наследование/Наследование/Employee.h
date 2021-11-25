#pragma once

// Автор Гурбатов Владислав ИВТ-20

#include "Human.h"
#include "String"

// Класс Работник

class Employee : public Human
{
private:
	int employee_id;																//	паспортные данные
	int wage;																		//	зарплата
	int experience;																	// стаж работы

public:
	void set_wage(int new_wage);													// устанавливает зарплату
	void set_employee_id(int new_employee_id);										// устанавливает паспротрные данные
	void set_experience(int new_experience);										// устанавливает стаж работы
	int get_employee_id() const;													// возращает паспортные данные
	int get_wage() const;															// возращает зарплату
	int get_experience() const;														// возращает стаж работы
	Employee();																		// конструктор по умолчанию
	Employee(int new_wage, int new_employee_id, const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth);						// конструктор с параметрами
	void set_props(int new_wage, int new_employee_id, const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth);					// устанавливает все поля класса
	std::string get_string() const;													// возращает все поля класса в виде строки
};

