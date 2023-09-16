// Giovanni Cortese
// Decimal to : Binary, Octal & Hex converter

#include <iostream>		 
#include <array>		
#include <iomanip>		
using namespace std;

////															**** Decimal to Binary Converter ****
int main() {

	int num, i = 0;
	char choice;
	array <int, 20> binArr{};

	cout << "\nEnter number to convert: ";
	cin >> num;
	system("cls");
	cout << "\nThe binary of " << num << " is: " << endl;

	while (num > 0)
	{
		binArr[i] = num % 2;
		num = num / 2;
		i++;
	}
	for (int j = i; j >= 0; j--)
	{
		cout << binArr[j] << " ";
	}

	return 0;
}

////															**** Decimal to Octal Converter ****
//int main() {
//
//	int num, i = 0;
//	char choice;
//	array <int, 20> binArr{};
//
//	cout << "\nEnter number to convert: ";
//	cin >> num;
//	system("cls");
//	cout << "\nThe Octal of " << num << " is: " << endl;
//
//	while (num > 0)
//	{
//		binArr[i] = num % 8;
//		num = num / 8;
//		i++;
//	}
//	for (int j = i; j >= 0; j--)
//	{
//		cout << binArr[j] << " ";
//	}
//
//	return 0;
//}

//															**** Decimal to Hex Converter ****
//int main() {
//
//	int num, i = 0;
//	array <int, 20> binArr{};
//
//	cout << "\nEnter number to convert: ";
//	cin >> num;
//	system("cls");
//	cout << "\nThe HEX of " << num << " is: ";
//
//	while (num > 0)
//	{
//		binArr[i] = num % 16;
//		num = num / 16;
//		i++;
//	}
//	for (int j = i; j >= 0; j--)
//	{
//		cout << binArr[j] << " / ";
//	}
//	
//	return 0;
//}