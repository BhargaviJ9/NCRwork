#include<iostream>
using namespace std;
class distance2;
class distance1
{
public:
	int m, cm;
	distance1()
	{
	}
	distance1(int a, int b)
	{
		m = a;
		cm = b;
	}
	friend void sum(distance1 &, distance2 &);
	friend void sum1(distance1 &, distance2 &);

};
class distance2
{
public:
	int ft, in;
	distance2()
	{
	}
	distance2(int a, int b)
	{
		ft = a;
		in = b;
	}
	friend void sum(distance1 &, distance2 &);
	friend void sum1(distance1 &, distance2 &);
};
int main()
{
	distance1 d1(2, 10);
	distance2 d2(2, 12);
	sum(d1, d2);
	sum1(d1, d2);
	getchar();
	return 0;
}
void sum(distance1 &d1, distance2 &d2)
{
	distance1 temp;
	cout << "sum:" <<( d1.m + 0.3*(d2.ft)) << "m" << "." <<( d1.cm + d2.in*0.5) << "cm" << endl;

}
void sum1(distance1 &d1,distance2 &d2)
{
		distance2 temp;
		cout << "sum:" <<( 3.2*(d1.m) + d2.ft )<< "ft" << "." << (2.5*(d1.cm) + d2.in)<< "in" << endl;
}
