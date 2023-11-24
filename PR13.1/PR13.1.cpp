#include <iostream>
#include <math.h>
#include <iomanip>
#include "var.h"
#include "dod.h"
#include "sum.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{
	cout << "xp = "; cin >> x_p;
	cout << "xk = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "e = "; cin >> e;
	cout << endl;
	cout << "-------------------------------------------------" << endl;
		cout << "|" << setw(4) << "x" << "     | "
			<< setw(16) << "exp(x)" << " |"
			<< setw(6) << "s" << "     |"
			<< setw(4) << "n" << "   |"
			<< endl;
		cout << "-------------------------------------------------" << endl;
	x = x_p;
	while (x <= x_k) {
		sum(); // виклик процедури обчислення суми
		
		cout << "|" << setw(7) << setprecision(2) << x << "  |"
			<< setw(13) << setprecision(5) << log(x) << "     |"
			<< setw(9) << setprecision(5) << 2*s << "  |"
			<< setw(4) << n << "   |"
			<< endl;
		/*cout << x << " "
			<< s << " "
			<< exp(x) << " "
			<< n << endl;*/ // тут слід використовувати форматний вивід
		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	cin.get();
	return 0;
}