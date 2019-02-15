#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
class point {
public:
	int x, y;
	point(int a, int b)
	{
		x = a;
		y = b;
	}
	friend void distance(point &, point &);

};
int main()
{
	point p1(1, 3), p2(3, 1);
	distance(p1, p2);
	getchar();
	return 0;

}
void distance(point &p1, point &p2)
{
	float a;
	a = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
	cout << "result" << a;
}