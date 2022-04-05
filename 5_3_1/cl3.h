#pragma once
#include "cl2.h"
class cl3 :
	public cl2
{
protected:
	int a3;
public:
	virtual int calc(int);
	cl3(int, int, int);
};

