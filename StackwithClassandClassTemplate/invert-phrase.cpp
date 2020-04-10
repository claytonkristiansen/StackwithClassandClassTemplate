#include <iostream>
#include <string>
#include "Stack.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    Stack<string> s;
	string el = "";
	cin >> el;
	s.push(el);
	while (el.back() != '.')
	{
		cin >> el;
		s.push(el);
	}
	while (!s.isEmpty())
	{
		string output = s.pop();
		if (output.back() == '.')
		{
			output.pop_back();
		}
		cout << output;
		if (!s.isEmpty())
		{
			cout << " ";
		}
	}
    
    return 0;
}
