#pragma once

#include<string>

class Date
{
private:
	int year;		// ��� ��������
	int month;		// ����� ��������
	int day;		// ���� ��������

public:
	void set_date_year(int new_year);							// ������������� ��� ����
	void set_date_month(int new_month);							// ������������� ����� ����
	void set_date_day(int new_day);								// ������������� ���� ����
	int get_date_year() const;									// ��������� ��� ��������
	int get_date_month() const;									// ��������� ����� ����
	int get_date_day() const;									// ��������� ���� ����
	Date();														// ����������� �� ���������
	Date(int new_year, int new_month, int new_day);				// ����������� � �����������
	void set_props(int new_year, int new_month, int new_day);	// ������������� ��� ����
	std::string get_string() const;								// ��������� ��� ���� � ����� ������


};

