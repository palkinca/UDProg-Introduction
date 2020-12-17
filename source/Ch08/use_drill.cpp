#include "my.h"
#include "std_lib_facilities.h"

int foo;

int swap_v(int a ,int b)
{
	
	int temp = a;
	a = b;
	b = temp; 
	cout << "swap_v-ben: " << a << ' ' << b << '\n';
	return a , b;
}	
 void swap_r(int& a , int& b )
{
	int temp = a;
	a = b;
	b = temp; 
	cout << "swap_r-ben: " << a << " "<< b << endl;
}
 void swap_cr(int& a , int& b )
{
	int temp = a;
	a = b;
	b = temp; 
	cout << "swap_cr-ben: " << a << " "<< b << endl;
}
int main()
{
	foo = 7; 
	print_foo();
	print(99);

	
	int x=7;
	int y=9;

	cout << "mainben: " << x << ' '<< y << endl;
	swap_v(x,y);
	cout << "\n";

	cout << "mainben: " << x << " "<< y << endl;
	swap_r(x,y);
	cout << "\n";
	
	cout << "mainben: " << x << " "<< y << endl;
	swap_r(x,y);
	cout << "\n";
	

	const int cx=7;
	const int cy=9;
	double dx=7.7;
	double dy=9.9;

	cout << "\n";
	swap_v(7,9);
	cout << "swap_v mainben: " << '7' << ' ' << '9' << '\n';

	cout << "\n";
	cout << "mainben: " << cx << ' ' << cy << '\n';
	//swap_cr(cx,cy);    						// nem futhat le
	//cout << "swap_cr mainben: " << cx << ' ' << cy << '\n';

	cout << "\n"; 
	cout << "mainben: " << dx << ' ' << dy << '\n';
	//swap_r(dx,y);				//egészként kezeli double helyett
	//out << "swap_r mainben: " << dx << ' ' << dy << '\n';

	cout << "\n";
	swap_v(7.7,9.9);			//Hát ez nem fasza mivel nem double-ként kezeli itt sem hanem int-ként
	cout << "mainben: " << "7.7" << ' ' << "9.9" << '\n';


	//
	return 0;
}