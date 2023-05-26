/* Author: William Chadwick
 * Date Created: 05/26/2023
 * Date Modified: 05/26/2023
 * Description: Account interface, code from O'Reilly's
 * C++ Pocket Reference, by Kyle Loudon 
 */

// int main()
// int main(int argc, char *argv[])

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

#include "Account.h"

int main(int argc, char *argv[])
{
	Account		account(0.0);
	char		action;
	double		amount;

	if (argc > 1)
		account.deposit(atof(argv[1]));

	while (true)
	{
		cout << "Balance is "
		     << account.getBalance()
		     << endl;
		
		cout << "Enter d, w, or q: ";
		cin >> action;

		switch (action)
		{
			case 'd':
				cout << "Enter Deposit: ";
				cin >> amount;
				account.deposit(amount);
				break;

			case 'w':
				cout << "Enter withdrawal: ";
				cin >> amount;
				account.withdraw(amount);
				break;
			
			case 'q':
				exit(0);

			default:
				cout << "Bad command" << endl;

		}
	}
	return 0;
}

// of course, running the following g++ command
// $ g++ -o CppPocketRef CppPocketRef.cpp
//
// receives the following g++ compiler error:
// 
// CppPocketRef.cpp:16:10: fatal error: Account.h: No such file or directory
// 16 | #include "Account.h"
// |          ^~~~~~~~~~~
// compilation terminated.
//
// a reasonable compiler error...

/* end first code segment */


