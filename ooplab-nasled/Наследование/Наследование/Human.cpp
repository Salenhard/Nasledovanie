#include "Human.h"
#include <iostream>

void Human::set_name(const std::string& new_name)						// ������������� ���
{
	if (new_name != "")
	this->name = new_name;
	else
	throw std::invalid_argument("Invalid argument");
}

void Human::set_secondname(const std::string& new_secondname)			// ������������� ��������
{
	if (new_secondname != "")
		this->secondname = new_secondname;
	else
		throw std::invalid_argument("Invalid argument");
}

void Human::set_lastname(const std::string& new_lastname)				// ������������� �������
{
	if (new_lastname != "")
		this->secondname = new_lastname;
	else
		throw std::invalid_argument("Invalid argument");
}

void Human::set_date_of_birth(Date new_date_of_birth)					// ������������� ���� ��������
{
		this->date_of_birth = new_date_of_birth;
}

std::string Human::get_name() const									// ��������� ���
{
	return this->name;
}

std::string Human::get_secondname() const							// ��������� ��������
{
	return this->secondname;
}

std::string Human::get_lastname() const								// ��������� �������
{
	return this->lastname;
}

Date Human::get_date_of_birth() const								// ��������� ���� ��������
{
	return this->date_of_birth;
}

Human::Human()														// ����������� �� ���������
{
	Date();
	this->name = "Holo";
	this->secondname = "Salen";
	this->lastname = "Shaft";
}

Human::Human(const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth)		// ����������� � �����������
{
	set_props(new_name,new_secondname,new_lastname,new_date_of_birth);
}

void Human::set_props(const std::string& new_name, const std::string& new_secondname, const std::string &new_lastname, Date new_date_of_birth)		// ������������ ��� ���� ������
{
	set_name(new_name);										
	set_secondname(new_secondname);			
	set_lastname(new_lastname);							
	set_date_of_birth(new_date_of_birth);
}

std::string Human::get_string()										// ��������� ��� ���� � ������
{
	std::string str;
	return str =
		"���: " + this->name + "\n" +
		"��������: " + this->secondname + "\n" +
		"�������: " + this->lastname + "\n" +
		"���� ��������: " + date_of_birth.get_string() +"\n";
}