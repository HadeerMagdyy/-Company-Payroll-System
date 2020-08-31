#pragma once
#include<string>
#include<iostream>
#include<fstream>
#include<list>
#include<vector>
using namespace std;
class worker
{	
protected:
	string id;
	string name;
	string age;
	double salary;
public:
	worker(void);
	worker(string id,string name,string age,double salary);
	virtual void Write_Data()=0;
	virtual void Read_Data()=0;
	~worker(void);
	
};
class Grades
{
public:
	string position;
	double taxrate;
	double payrate;
	Grades();
	Grades(string position,double taxrate,double payrate);
};
class Employee:public worker
{
protected:
	float hours;
	Grades grade;

public:
	Employee();
	Employee(float hours,Grades grade);
	friend istream & operator>>(istream & input, Employee & obj);
	void Write_Data();
	void Add_Employee();
	void Edit_Employee(int c);
	void Delete_Employee(int c);
	double calculate_salary();
	void Replace_Employee(int c);
	void Search_Employee(int c);
	void Counter(int c);
	void Read_Data();
	
};
class Trainee:public worker
{
protected:
	string faculty_name;
	float GPA;
	int acdemic_year;
public:
	Trainee();
	Trainee(string faculty_name,float GPA,int acdemic_year);
	friend istream & operator>>(istream & input, Trainee & obj);
	void Write_Data();
	void Add_Trainee();
	void Edit_Trainee(int c);
	void Delete_Trainee(int c);
	double calculate_salary();
	void Replace_Trainee(int c);
	void Search_Trainee(int c);
	void Counter(int c);
	void Read_Data();
};
