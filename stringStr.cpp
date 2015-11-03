#include <string>
#include <iostream>
#include <stack>
#include <sstream>
using namespace std;
int main()
{
	string tmp = "1234";
	stack<char> myStack;
	for(char element : tmp){
		//cout<<element<<endl;
		myStack.push(element);
	}
	return 0;
}



