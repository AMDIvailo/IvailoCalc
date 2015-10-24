#include <iostream>
class msghandler
{
	public:
		void print(std::string const text, bool brake = true)
		{
			using namespace std;
			if (brake == false)
				cout << text;
			else if (brake == true)
				cout << text << endl;
		}
};