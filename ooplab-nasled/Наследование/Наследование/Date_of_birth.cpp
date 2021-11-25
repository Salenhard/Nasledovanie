#include "Date_of_birth.h"
#include <string>
#include <iostream>

void Date::set_date_year(int new_year)				// ������������� ��� ����
{
	if (new_year > 0)
		this->year = new_year;
	else throw std::invalid_argument("Param cant be empty");
}

void Date::set_date_month(int new_month)			// ������������� ����� ����
{
	if (new_month > 0 and new_month <= 12)
		this->month = new_month;
	else throw std::invalid_argument("Param cant be empty");
}

void Date::set_date_day(int new_day)					// ������������� ���� ���� 
{
	if (new_day > 0 and new_day <= 31)
		this->day = new_day;
	else throw std::invalid_argument("Param cant be empty");

}

int Date::get_date_year() const						// ��������� ��� ����
{
	return this->year;
}

int Date::get_date_month() const						// ��������� ����� ����
{
	return this->month;
}

int Date::get_date_day() const						// ��������� ���� ����
{
	return this->day;
}

Date::Date()									// ����������� �� ���������
{
	this->year = 2002;
	this->month = 12;
	this->day = 11;
}

Date::Date(int new_year, int new_month, int new_day) // ����������� � �����������
{
	set_props(new_year, new_month, new_day);
}

void Date::set_props(int new_year, int new_month, int new_day) // ������������� ��� ����
{
	set_date_year(new_year);
	set_date_month(new_month);
	set_date_day(new_day);
}

std::string Date::get_string() const						// ��������� ��� ���� � ����� ������
{
	std::string str;
	return str = std::to_string(this->day) + "." + std::to_string(this->month) + "." + std::to_string(this->year);
}
