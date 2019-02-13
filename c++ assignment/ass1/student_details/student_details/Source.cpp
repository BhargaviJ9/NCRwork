#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Student
{
	char sname[20], grade[20];
	int marks1, marks2, marks3;
	float avg;
public:
	void set_data(char n[20], int m1, int m2, int m3)
	{
		strcpy_s(sname, 20, n);
		marks1 = m1;
		marks2 = m2;
		marks3 = m3;
	}
	void calculate_avg()
	{
		avg = (marks1 + marks2 + marks3) / 3.0f;
	}
	void compute_grade()
	{
		if (avg > 60)
			strcpy_s(grade, 20, "First Class");
		else if (avg > 50 && avg < 60)
			strcpy_s(grade, 20, "Second Class");
		else if (avg > 40 && avg < 50)
			strcpy_s(grade, 20, "Third Class");
		else
			strcpy_s(grade, 20, "Fail");
	}
	void display()
	{
		cout << "Name" << sname << endl << "marks:" << marks1 << "," << marks2 << "," << marks3 << endl << "avg:" << avg << endl << "Grade:" << grade;
	}
};
void main()
{
	Student s;
	s.set_data("Bhargavi", 24, 76, 93);
	s.calculate_avg();
	s.compute_grade();
	s.display();
	getchar();
}