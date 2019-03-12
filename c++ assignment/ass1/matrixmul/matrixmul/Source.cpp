#include<iostream>
using namespace std;
class matrix {
public:
	int m, n,**a,**s,i,j,sum=0,k;
	matrix(int a, int b)
	{
		m = a;
		n = b;
	}
	void ele()
	{
		a = new int *[m];
		for (i = 0; i < n; i++)
		{
			a[i] = new int[n];
		}
		cout << "elements are";
		for (i = 0; i < m; i++)
			for (j = 0; j < n; j++)
				cin >> a[i][j];
		for (i = 0; i < m; i++)
			for (j = 0; j < n; j++)
				cout << a[i][j];
	}
	friend void mul(matrix &m1,matrix &n1);
};
void mul(matrix &m1, matrix &n1)
{
	cout << "hey";
    m1.s = new int *[m1.m];
	for (m1.i = 0; m1.i <m1. m; m1.i++)
	{
		m1.s[m1.i] = new int[n1.n];
	}
	for (m1.i = 0; m1.i < m1.m; m1.i++)
	{
		for (m1.j = 0; m1.j < n1.n; m1.j++)
		{
			for (m1.k = 0; m1.k < n1.m; m1.k++)
			{
				m1.sum = m1.sum + (m1.s[m1.i][m1.k] * n1.s[m1.k][m1.j]);
			}
			m1.s[m1.i][m1.j] = m1.sum;
			m1.sum = 0;
		}
     }
	for (m1.i = 0; m1.i < m1.m; m1.i++)
		cout << endl;
		for (m1.j = 0; m1.j < m1.n; m1.j++)
			cout << m1.s[m1.i][m1.j] << " ";
}
int main()
{
	matrix a(2, 2), b(2, 1);
	a.ele();
	b.ele();
	mul(a, b);
	getchar();
	return 0;
}

	        

