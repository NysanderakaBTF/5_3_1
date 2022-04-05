#ifndef CL2_H
#define CL2_H
#include "cl1.h"
class cl2 :
	public cl1
{
protected:
	int a2;
public:
	virtual int calc(int);
	cl2(int, int);
};
#endif