#include "cl2.h"

int cl2::calc(int x)
{
	return a1*x+a2*x*x;
}

cl2::cl2(int a, int b):cl1(a)
{
	a2 = b;
}
