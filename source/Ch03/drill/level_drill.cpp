#include "std_lib_facilities.h"

int main()
{
	cout << "Please enter your first name\n";
	
	string first_name;
	cin >> first_name;
	cout << "Hello, " << first_name << "!\n";

	cout << "Enter the informations separated by a space.\n";
	cout << "Enter the name of the person you want to write to!\n";
	cout << "Enter the name of another friend of yours.\n";
	cout << "Enter 'm', if your friend is male, or 'f', if your friend is female.\n";
	cout << "Enter the age of the recipient.\n";

	string name;
	cin >> name;
	cout << "Dear " << name << ",\n";
	cout << "How are you? I am fine. I miss you.\n";

	string friend_name;
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";

	char friend_sex = 0;
	cin >> friend_sex;
	
	if(friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	else if(friend_sex == 'f')
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	else(error("The unit, you entered, is not a gender."));

	int age = 0;
	cin >> age;
	
	if(age < 0 || age > 110) error("You are kidding!");
	cout << "I hear you just had a birthday and you are " << age << " years old.\n";

	if(age < 12)
		cout << "Next year your will be " << age + 1 <<".\n";

	if(age == 17)
		cout << "Next year you will be able to vote.\n";

	if(age > 70)
		cout << "I hope you are enjoying retirement.\n";

	cout << "Yours sincerely,\n";
	cout << "\n";
	cout << "\n";
	cout << "Pali\n";

	return 0;
}