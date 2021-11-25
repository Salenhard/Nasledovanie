#pragma once
#include "Date_of_birth.h"
#include<string>
//Автор Гурбатов Владислав ИВТ-20
//Класс Человек
class Human 
{
private:
	std::string name;
	std::string secondname;
	std::string lastname;
public:
	Date date_of_birth;
	void set_name(const std::string &new_name);						// устанавливает имя
	void set_secondname(const std::string &new_secondname);			// устанавливает отчество
	void set_lastname(const std::string& new_lastname);				// устанавливает фамилию
	void set_date_of_birth(Date new_date_of_birth);					// устанавливает дату рождения
	std::string get_name() const;									// возращает имя
	std::string get_secondname() const;								// возращает отчество
	std::string get_lastname() const;								// возращает фамилию
	Date get_date_of_birth() const;									// возращает дату рождения

	Human();														// конструктор по умолчанию
	Human(const std::string &new_name, const std::string &new_secondname, const std::string &new_lastname, Date new_date_of_birth);		// конструктор с параметрами
	void set_props(const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth);		// устанвливает все поля класса
	std::string get_string();										// возращает все поля в строке
};

