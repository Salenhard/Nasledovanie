#pragma once

#include<string>

class Date
{
private:
	int year;		// год рождения
	int month;		// месяц рождения
	int day;		// день рождения

public:
	void set_date_year(int new_year);							// устанавливает год даты
	void set_date_month(int new_month);							// устанавливает месяц даты
	void set_date_day(int new_day);								// устанавливает день даты
	int get_date_year() const;									// возращает год датыдаты
	int get_date_month() const;									// возращает месяц даты
	int get_date_day() const;									// возращает день даты
	Date();														// конструктор по умолчанию
	Date(int new_year, int new_month, int new_day);				// конструктор с параметрами
	void set_props(int new_year, int new_month, int new_day);	// устанавливает все поля
	std::string get_string() const;								// возращает все поля в ввиде строки


};

