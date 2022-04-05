#include "cl3.h"

int cl3::calc(int x)
{
	return a1*x+a2*x*x+a3*x*x*x;
}

cl3::cl3(int a, int b,  int c):cl2(a,b)
{
	a3 = c;
}
