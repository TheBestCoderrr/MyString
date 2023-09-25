#include <iostream>
#include "String.h"
#include "Consts.h"

using namespace std;

int main() {
	{
		String A;
		A.EnterStr();
		A.Show();
		cout << "Count str = " << String::GetCountStr() << endl;
	}
	cout << "Count str = " << String::GetCountStr() << endl;

	String B(TEXTSIZE);
	B.EnterStr();
	B.Show();

	String C("Ivan");
	C.Show();
	
	String D(C);
	D.Show();

	String E = D;
	E.Show();

	cout << "Count str = " << String::GetCountStr() << endl;
}