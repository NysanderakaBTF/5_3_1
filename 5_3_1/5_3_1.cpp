#include <iostream>
#include "cl4.h"
using namespace std;
int main()
{
	cl1* p;
	int a1, a2, a3, a4, x;
	cin >> a1 >> a2 >> a3 >> a4;
	p = new cl4(a1, a2, a3, a4);
	cout << "a1 = " << a1 << "    a2 = " << a2 << "    a3 = " << a3 << "    a4 = " << a4 << endl;
	do {
		cin >> x;
		if (x != 0) {
			int n;
			cin >> n;
			cout << endl;
			if (n == 1) {
				cout << "Class " << n << "    F( " << x << " ) = " << p->cl1::calc(x);
			}
			if (n == 2) {
				cout << "Class " << n << "    F( " << x << " ) = " << ((cl2*)p)->cl2::calc(x);
			}
			if (n == 3) {
				cout << "Class " << n << "    F( " << x << " ) = " << ((cl3*)p)->cl3::calc(x);
			}
			if (n == 4) {
				cout << "Class " << n << "    F( " << x << " ) = " << ((cl4*)p)->cl4::calc(x);
			}
		}
	} while (x != 0);
	return 0;
}

