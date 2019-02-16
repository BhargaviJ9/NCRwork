#include<iostream>
using namespace std;
class swapX {
public:
	int g, h, temp;
	swapX()
	{
		cout << "hello";
	}
	swapX(int g, int h)
	{
		temp = g;
		g= h;
		h = temp;
		cout << "swapped"<<g << h;
	}
    swapX(int *g,int *h)
	{
		temp = *g;
		*g = *h;
		*h = temp;
		cout << "swapped" << *g << *h;
	}
};
int main()
{
//	swapX s1;
	int a, b;
	cout<<"enter two numbers";
	cin >> a >> b;
	int num;
	cout << "enter your choice: 1.call by ref " << endl << "2.call by value" << endl;
	cin >> num;
	switch (num)
	{
	case 1:
	{
		swapX s1(a, b);
		break;
	}
	case 2:   
	{
		swapX s1(&a, &b);
		break;
	}
	default:break;
	}
	system("pause");
	return 0;
}