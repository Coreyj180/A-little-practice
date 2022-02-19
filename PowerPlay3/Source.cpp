/* 
Power Play for Goal 4
Corey Johnson
*/



#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a{};
	int b = { 0 };

	cout << "How many pieces of Snozzberries do you want?" << endl;
	cin >> a;
	b += a;

	cout << "How many pieces of Whangdoodles do you want?" << endl;
	cin >> a;
	b += a;

	cout << "How many pieces of Hornswogglers do you want?" << endl;
	cin >> a;
	b += a;

	cout << "How many pieces of Vermicious Knids do you want?" << endl;
	cin >> a;
	b += a;

	cout << "How many pieces of Everlasting Gobbstoppers do you want?" << endl;
	cin >> a;
	b += a;

	cout << "You have " << b << " pieces of candy in your pocket." << endl;
	
	if (b > 100)
		cout << "Congratulations you get it all Charlie!! \n";
	else
		cout << "You get nothing! You lose! Good day, sir! \n";

	system("PAUSE");
		
	return 0;
}