#include <cmath>
using namespace std;
bool calculator()
{
	double value1;
	double value2;
	string calccmd;
	cout << "Calculator mode activated!" << endl;
	cout << "Enter a calculator command. Type 'Exit' to exit the calculator. Type 'Help' for help." << endl;
	while(1 == 1)
	{
	cout << "Calculator command: ";
	cin >> calccmd;
		if(calccmd == "+")
		{
		cin >> value1;
		cin >> value2;
		cout << "Result: " << value1 + value2 << endl;
			if(cin.fail())
			{
			cout << "One of the numbers is invalid!" << endl;
			cin.clear();
			}
		}
		else if(calccmd == "-")
		{
		cin >> value1;
		cin >> value2;
		cout << "Result: " << value1 - value2 << endl;
			if(cin.fail())
			{
			cout << "One of the numbers is invalid!" << endl;
			cin.clear();
			}
		}
		else if(calccmd == "*")
		{
		cin >> value1;
		cin >> value2;
		cout << "Result: " <<  value1 * value2 << endl;
			if(cin.fail())
			{
			cout << "One of the numbers is invalid!" << endl;
			cin.clear();
			}
		}
		else if(calccmd == "/")
		{
		cin >> value1;
		cin >> value2;
		cout << "Result: " << value1 / value2 << endl;
			if(cin.fail())
			{
			cout << "One of the numbers is invalid!" << endl;
			cin.clear();
			}
		}
		else if(calccmd == "^" || calccmd == "pow")
		{
		cin >> value1;
		cin >> value2;
		cout << "Result: " << pow(value1, value2) << endl;
			if(cin.fail())
			{
			cout << "One of the numbers is invalid!" << endl;
			cin.clear();
			}
		}
		else if(calccmd == "root")
		{
		cin >> value1;
		cin >> value2;
		cout << "Result: " << pow(value1, 1/value2) << endl;
			if(cin.fail())
			{
			cout << "One of the numbers is invalid!" << endl;
			cin.clear();
			}
		}
		else if(calccmd == "help")
		{
			cout << "Calculator operators: +, -, *, /" << endl;
			cout << "Example of calculator usage: If you type: '+ 20 10' the return will be 30, if you type: '- 20 10' the return will be 10." << endl;
		}

		else if(calccmd == "exit")
			return false;
		else
		{
		cout << "Wrong calculator command! Type 'help' to see how to use it!" << endl;
		}
	}
}

