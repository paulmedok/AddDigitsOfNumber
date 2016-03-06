// AddDigitsOfNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
/*
program calculates the summ of all digits in the entered number
*/

int _tmain(int argc, _TCHAR* argv[])
{
	long num = 0, t_num = 0;
	int sum = 0;

	cout << "Enter Number: " << endl;
	cin >> num;

	t_num = num;

	while (((t_num / 10) != 0) || ((t_num % 10) != 0)){ 
		sum += t_num % 10;
		t_num /= 10;

		if ((((t_num / 10) == 0) && ((t_num % 10) == 0)) && (sum > 9)){
			t_num = sum;
			sum = 0;
		}
	};

	cout << endl << "Summ of all digits of number " << num << " equal " << sum << endl;

	if (_CrtDumpMemoryLeaks())
		cout << endl << "************" << endl << "MemoryLeaks!!!" << endl << "************" << endl;
	else
		cout << endl << "************" << endl << "Memory OK" << endl << "************" << endl;

	system("pause");
	return 0;
}

