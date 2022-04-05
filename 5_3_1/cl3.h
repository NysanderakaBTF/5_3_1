#pragma once
#include "cl2.h"
class cl3 :
	public cl2
{
private:
	int a1, a2, a3;
public:
	virtual int calc(int);
	cl3(int, int, int);
};

