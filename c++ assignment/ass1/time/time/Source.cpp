#include<iostream>
using namespace std;
class time
{
  public:
	  int h, min, sec;
  public:
	time()
	{
		h = 0; min = 0; sec = 0;
	}
	time(int ho, int m, int s)
	{
		h = ho;
		min = m;
		sec = s;
	}
	void display()
	{
		cout << h << ":" << min << ":" << sec;
	}
	void add_time(time a, time b)
	{
	
		sec = a.sec + b.sec;
		min = a.min + b.min + (sec/60);
		h = a.h + b.h + ( / 60);
		min = min % 60;
		sec = sec % 60;
	}
};
int main()
{
	time t1(2,05,30), t2(3,60,50),t3;
	t3.add_time(t1, t2);
	t3.display();
	getchar();
	return 0;
}