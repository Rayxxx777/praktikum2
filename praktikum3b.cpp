#include <iostream>

using ramespace std;

int main()
{
	int a,b,c,d;

	cout << "masukan nilai pertama : ";
	cin >>a;
	cout << "masukan nilai ke-dua : ";
	cin >>b;
	cout << "masukin nilai ke-tiga : ";
	cin >>c;
	cout << "masukin nilai ke-empat : ";
	cin >>d;

	if (a>b)
	{
		if(a>c)
			cout << "bilangan terbesar adalah : " << a;
		else if (a>d)
			cout << "bilangan terbesar adalah : " << a;
		else
			cout << "bilangan terbesar adalah : " << d;
 	}

 	else if (b>c)
 	{
 		if(b>d)
 			cout << "bilangan terbesar adalah : " << b;
 		else if (b>d)
 			cout << "bilangan terbesar adalah : " << b;
 		else
 			cout << "bilangan terbesar adalah : " << d;
 	}

 	else if (c>d)
 		cout << "bilangan terbesar adalah : " << c;
 	else
 		cout << "bilangan terbesar adalah : " << d;

 	return 0;



}