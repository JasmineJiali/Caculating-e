#include<iostream>
#include<stdio.h>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
	long double y1;
	long double e=1;
	y1 = pow((1 + e / 100 + e / (2 * 100 * 100)), 100);
	cout << setiosflags(ios::fixed) << setprecision(6) << y1 << endl;
	return 0;

}