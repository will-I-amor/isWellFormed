#include <iostream>
#include <vector>
#include <string>
using namespace std;
class StrInt{
public:
	StrInt(string s = "", int i = 0):myString(s),myInt(i){}
	StrInt operator+(const StrInt&);
	//StrInt operator-(const StrInt&);
private:
	string myString;
	int myInt;
};
StrInt StrInt::operator+(const StrInt& operand2){
	return StrInt(myString + operand2.myString, myInt + operand2.myInt);
}



int main(){
	StrInt a("high", 100), b("tea", 1),c;
	c = a + b;
	return 0;
}