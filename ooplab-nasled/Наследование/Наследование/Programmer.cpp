#include "Programmer.h"
#include <iostream>
#include <String>

enum Levels {												// уровни программиста
	Junior, Middle, Senior	
};

enum Languages												// языки программирования
{
	Python, C, Java, Ruby, Pascal, Rust, PHP
};

std::string LevelsNames[] = { "Junior", "Middle", "Senior" };
std::string LanguagesNames[] = {"Python", "C", "Java", "Ruby", "Pascal", "Rust", "PHP"};



void Programmer::set_level(const Levels new_level)						// устанавливает уровень программиста
{
	if (new_level != -1)
		this->level = new_level;
	else throw std::invalid_argument("Param cant be empty");
}

void Programmer::set_language(const Languages new_language)				// устанавливает язык программирования
{
	if (new_language != -1)
		this->language = new_language;
	else throw std::invalid_argument("Param cant be empty");
}

Levels Programmer::get_level() const								// возращает уровень программиста
{
	return this->level;
}

Languages Programmer::get_language() const							// возращает язык программирования
{
	return this->language;
}

Programmer::Programmer()												// конструктор по умолчанию
{
	set_name("Holo");
	set_secondname("Salen");
	Date();
	set_lastname("Shaft");
	set_wage(60000);
	set_employee_id(22521);
	set_experience(3);
	this->language = C;
	this->level = Junior;
}

Programmer::Programmer(const Levels new_level, const Languages new_language, int new_wage, int new_employee_id, int new_experience, const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth)		// конструктор с параметрами
{
	set_props(new_level, new_language, new_experience, new_wage, new_employee_id, new_name, new_secondname, new_lastname, new_date_of_birth);
}

void Programmer::set_props(const Levels new_level, const Languages new_language, int new_wage, int new_employee_id, int new_experience, const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth)	// устанавливает все параметры
{
	set_language(new_language);
	set_experience(new_experience);
	set_level(new_level);
	set_employee_id(new_employee_id);
	set_wage(new_wage);
	set_name(new_name);
	set_secondname(new_secondname);
	set_lastname(new_lastname);
	set_date_of_birth(new_date_of_birth);
}

std::string Programmer::get_string() const									// возращает все параметры в виде строки
{
	std::string str;
	return str =
		"Имя: " + get_name() + "\n" +
		"Отчество: " + get_secondname() + "\n" +
		"Фамилия: " + get_lastname() + "\n" +
		"Дата рождения: " + date_of_birth.get_string() + "\n"
		"Зарплата: " + std::to_string(get_wage()) + "\n" +
		"Паспортные данные: " + std::to_string(get_employee_id()) + "\n"
		"Стаж работы: " + std::to_string(get_experience()) + "\n" +
		"Уровень: " + LevelsNames[(int)this->level] + "\n" +
		"Язык программирования: " + LanguagesNames[(int)this->language]+ "\n";
}