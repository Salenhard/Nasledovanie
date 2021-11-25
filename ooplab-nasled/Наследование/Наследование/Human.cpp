#include "Human.h"
#include <iostream>

void Human::set_name(const std::string& new_name)						// устанавливает им€
{
	if (new_name != "")
	this->name = new_name;
	else
	throw std::invalid_argument("Invalid argument");
}

void Human::set_secondname(const std::string& new_secondname)			// устанавливает отчество
{
	if (new_secondname != "")
		this->secondname = new_secondname;
	else
		throw std::invalid_argument("Invalid argument");
}

void Human::set_lastname(const std::string& new_lastname)				// устанавливает фамилию
{
	if (new_lastname != "")
		this->secondname = new_lastname;
	else
		throw std::invalid_argument("Invalid argument");
}

void Human::set_date_of_birth(Date new_date_of_birth)					// устанавливает дату рождени€
{
		this->date_of_birth = new_date_of_birth;
}

std::string Human::get_name() const									// возращает им€
{
	return this->name;
}

std::string Human::get_secondname() const							// возращает отчество
{
	return this->secondname;
}

std::string Human::get_lastname() const								// возращает фамилию
{
	return this->lastname;
}

Date Human::get_date_of_birth() const								// возращает дату рождени€
{
	return this->date_of_birth;
}

Human::Human()														// конструктор по умолчанию
{
	Date();
	this->name = "Holo";
	this->secondname = "Salen";
	this->lastname = "Shaft";
}

Human::Human(const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth)		// конструктор с параметрами
{
	set_props(new_name,new_secondname,new_lastname,new_date_of_birth);
}

void Human::set_props(const std::string& new_name, const std::string& new_secondname, const std::string &new_lastname, Date new_date_of_birth)		// устанвливает все пол€ класса
{
	set_name(new_name);										
	set_secondname(new_secondname);			
	set_lastname(new_lastname);							
	set_date_of_birth(new_date_of_birth);
}

std::string Human::get_string()										// возращает все пол€ в строке
{
	std::string str;
	return str =
		"»м€: " + this->name + "\n" +
		"ќтчество: " + this->secondname + "\n" +
		"‘амили€: " + this->lastname + "\n" +
		"ƒата рождени€: " + date_of_birth.get_string() +"\n";
}