#include <iostream>

using namespace std;

void f(int xval)
{
	int x;
	x = xval;
	cout << &x << endl; //in dia chi x tai day
}

void g(int yval)
{
	int y;
	cout << &y << endl; //in dia chi y tai day
}

int main()
{
	f(7);
	g(11);
	return 0;
}
//dia chi hai bien la nhu nhau , co the la do thong so truyen vao main nhu nhau
