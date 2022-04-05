#ifndef CL4_H
#define CL4_H
#include "cl3.h"
class cl4 :
	public cl3
{
protected:
	int a4;
public:
	virtual int calc(int) ;
	cl4(int, int, int,int);
};

#endif