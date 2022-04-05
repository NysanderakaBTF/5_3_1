#include "cl4.h"

int cl4::calc(int x)
{
	return a1*x+a2*x*x+a3*x*x*x+a4*x*x*x*x;
}

cl4::cl4(int a, int b, int c, int d):cl3(a,b,c)
{
	a4 = d;
}
