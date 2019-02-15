#include<iostream>
using namespace std;
class employee {
	int b;
	char c;
	char d;
public:
	employee(int a)
	{
		cout << "it is a default constructor";
	}
	employee(employee &e)
	{
		cout << "it is a copy constructor";
	}
	~employee()
	{
		cout << "destructor";
	}

};
int main()
{
	employee e(2);
	employee e1(e);
	cout << sizeof(e);
	getchar();
	return 0;
}