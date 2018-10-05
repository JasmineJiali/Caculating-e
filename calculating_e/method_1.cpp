#include<iostream>
#include<stdio.h>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
	//Taylor
	double et=1;
	long long pro=1;
	long long fact(int i);
	
	for (int i = 1;i <=10; i++)
	{
		pro = fact(i);
		et =et + double(1) / pro;
	}
	cout <<"Taylorչ����"<< setiosflags(ios::fixed) << setprecision(6) << et << endl;

	//Euler
    double y1;
	double e = 1;
	double f(int n);
	y1 = f(1500);
	cout << "��΢�ַ��̣�"<<setiosflags(ios::fixed) << setprecision(6) << y1 << endl;

	//�����뷽�����
	double x=2;
	int count = 0;
	double Integar(double x);
	while (abs(x - 2.718282) > 0.000001)
	{
		x = 2 * x - x*Integar(x);
		count = count + 1;
	}//ţ����ɽ������
	cout <<"��ֵ�����뷽�������"<< setiosflags(ios::fixed) << setprecision(6) << x << endl;

	return 0;

}

long long fact(int i)//�׳�ʵ��
{
	long long pro=1;
	for (int j = 1; j <= i; j++)
		pro = pro*j;
	return pro;
}

double f(int n)//���ö���չ�����ʵ��
{
	double fact2(int i,int n);
	double mypow(double x, int m);
	double m=1;
	double s=1;
	double e = 1;
	double temp=1;
	for (int i = 1;i<11; i++)
	{
		s = s*(n+1-i)/i;
		temp = temp*(e / n + e / (2 * n*n));
		m += s* temp;
	}
	return m;
}


double Integar(double x)//���ֺ���ʵ��
{
	int n=20;
	double h;
	h = (x-1) / n;
	double xk[20] = { 0 };
	double xh[20] = { 0 };

	long double f1=0, f2=0, f;
	
	for (int i = 1; i < n; i++)
	{
		xk[i] = 1 + i*h;
		f1 += 1/xk[i];
	}

	for (int i = 0; i < n; i++)
	{
		xh[i] = 1 + i*h + h / 2;
		f2 += 1/xh[i];
	}

	f = h / 6 * (1 + 2 * f1 + 4 * f2 + 1 / x);//����ɭ��ʽ
	return f;
}