#include <iostream>

using ramespace std;


int main()
{
	intn a,b,c;

	cout << "masukan nilai pertama : ";
	cin >>a;
	cout << "masukan nilai kedua : ";
	cin >>b;
	cout << "masukan nilai ketiga : ";
	cin >>c;

	if (a>b)
	{
		if(a>c)
			cout << "bilangan terbesar adalah : " << a;
		else
			cout << "bilangan terbesar adalah : " << c;
	}

	else
	{
		if(b>c)
			cout << "bilangan terbesar adalah : " << b;
		else
			cout << "bilangan terbesar adalah : " << c;
	}
	return 0;
}