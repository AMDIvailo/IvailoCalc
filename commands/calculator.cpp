bool calculator()
{
	int value1;
	int value2;
	std::string calccmd;
	std::cout << "Calculator mode activated!" << std::endl;
	std::cout << "Enter a calculator command. Type 'Exit' to exit the calculator. Type 'Help' for help." << std::endl;
	while(1 == 1)
	{
	std::cout << "Calculator command: ";
	std::cin >> calccmd;
		if(calccmd == "+")
		{
		std::cin >> value1;
		std::cin >> value2;
		std::cout << "Result: " << value1 + value2 << std::endl;
			if(std::cin.fail())
			{
			std::cout << "One of the numbers is invalid!" << std::endl;
			std::cin.clear();
			}
		}
		else if(calccmd == "-")
		{
		std::cin >> value1;
		std::cin >> value2;
		std::cout << "Result: " << value1 - value2 << std::endl;
			if(std::cin.fail())
			{
			std::cout << "One of the numbers is invalid!" << std::endl;
			std::cin.clear();
			}
		}
		else if(calccmd == "*")
		{
		std::cin >> value1;
		std::cin >> value2;
		std::cout << "Result: " <<  value1 * value2 << std::endl;
			if(std::cin.fail())
			{
			std::cout << "One of the numbers is invalid!" << std::endl;
			std::cin.clear();
			}
		}
		else if(calccmd == "/")
		{
		std::cin >> value1;
		std::cin >> value2;
		std::cout << "Result: " << value1 / value2 << std::endl;
			if(std::cin.fail())
			{
			std::cout << "One of the numbers is invalid!" << std::endl;
			std::cin.clear();
			}
		}
		else if(calccmd == "help")
		{
			std::cout << "Calculator operators: +, -, *, /" << std::endl;
			std::cout << "Example of calculator usage: If you type: '+ 20 10' the return will be 30, if you type: '- 20 10' the return will be 10." << std::endl;
		}
		else if(calccmd == "exit")
			return false;
		else
		{
		std::cout << "Wrong calculator command! Type 'help' to see how to use it!" << std::endl;
		}
	}
}
