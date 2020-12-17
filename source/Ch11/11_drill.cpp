#include "std_lib_facilities.h"

int main()
{
	int birth_year=2001;
	int age =19;

	cout<< "születési évem: " << birth_year << "\n\n";

	cout	<< showbase <<  dec
			<< birth_year << "\t decimálisan \n" 
			<< hex << birth_year <<"\t hexadecimálisan \n"
			<<oct<< birth_year<<"\t oktálisan \n"
			<<dec << endl;

	cout<<"az életkorom: " << age << endl;

	int a,b,c,d;		// 1234

	cin >> a >> oct >> b >> hex >> c >> dec >> d;

	cout <<'\n'<<a<<'\t'<< b  << '\t' << c <<'\t'<< d <<'\t'<<"\n"<< endl;  

	cout	<< 1234567.89 << "\t defaultfloat \n"
			<< fixed <<1234567.89<< "\t fixed \n"
			<< scientific <<1234567.89<< "\t scientific \n"
			<<endl;

	cout	<<defaultfloat
			<<setprecision(9)		
			<< 1234567.89 << "\t defaultfloat \n"
			<< fixed <<1234567.89<< "\t fixed \n"
			<< scientific <<1234567.89<< "\t scientific \n"
			<<endl;

	cout	<<" |"<< setw(8) << "János" <<" | "<< setw(8) << "Legyen" <<" | "<< setw(16) << "fent_a.János-hegyen@gmail.com"<<" | "<< setw(16) <<"06 20 220 9870"<<" |\n"
			<<" |"<< setw(8) << "Béla" <<" | "<< setw(9) << "Kovács" <<" | "<< setw(16) << "Kovács.Bélabávok@gmail.com   "<<" | "<< setw(16) <<"06 30 524 5710"<<" |\n"
			<<" |"<< setw(7) << "Ruben" <<" | "<< setw(8) << "Ajtai" <<" | "<< setw(12) << "Ajtai.Ruben@citromail.hu     "<<" | "<< setw(16) <<"06 70 852 4010"<<" |\n"
			<<" |"<< setw(8) << "Géger" <<" | "<< setw(8) << "  Ákos  " <<" | "<< setw(12) << "gége.rákos03@gmail.com       "<<" | "<< setw(16) <<"06 20 130 6302"<<" |\n"
			<<" |"<< setw(7) << "Vicc" <<" | "<< setw(8) << "Elek" <<" | "<< setw(14) << "Vicces.kedem22@gmail.com     "<<" | "<< setw(16) <<"06 30 432 7654"<<" |\n";


	return 0;
}