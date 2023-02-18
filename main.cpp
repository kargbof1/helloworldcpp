#include <iostream>
using namespace std;
int main()
{
	//Strings
	cout << "Hello World \n";
	cout << "I'm a C++ program \n";
	//Integers
	int a = 5;
	int b = 2;
	a = a + 1;
	int result = a - b;
	cout << result<<endl;
	//String plus integer output
	cout << "The difference between a and b is " << result<<endl;
	//division with floating point outout
	int x = 10;
	double y = 3;
	cout <<"10 divide by 3 " << x / y << endl;
	//remainder
	int z = 3;
	cout << "The remainder of 10 and 3 " << x % z << endl;
	//double
	double sales = 9.99;
	cout << sales <<endl;
	//constant 
	const double cppConstantVariable = 3.14;
	//swapping value of two variables
	int c = 10;
	int d = c;
	cout << d <<endl;

	//post fix increment by 5
	int m = 10;
	m = m + 5;
	cout << "We are increment m at 10 by 5 = " << m << endl;

	//post fix increment by 1
	int n = 10;
	n = n++;
	cout << "We are increment n at 10 by 1 = " << n << endl;

	//post fix decrement by 1
	int e = 10;
	e = e--;
	cout << " We are decrease n at 10 by 1 = " << e << endl;

	//pre fix decrement by 1
	int  p = 10;
	int t = p++;
	int h = ++p;
	cout << t << p << endl;

	double v, q,w;
		v = 10;
		w = 5;
		q = (v + 10) / (3 * w);
		cout << q  << endl;

	return 0;
	//to update git

}