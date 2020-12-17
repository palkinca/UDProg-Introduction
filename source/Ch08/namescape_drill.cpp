#include "std_lib_facilities.h"
 
namespace X
{
	int var=0;
	void print() { cout<< "X print:" << var << endl; }

}

namespace Y
{
	int var=0;
	void print(){ cout<< "Y print:" << var << endl; }
	
}

namespace Z
{
	int var=0;
	void print(){ cout<< "Z print:" << var << endl; }
	
}

int main()
{
	X::var=7;
	X::print();

	using namespace Y;
	var=9;
	print();
		{
			using Z::var;
			using Z::print;
			var=11;
			print();
		}

	print();
		
	X::print();	 

	return 0;
}