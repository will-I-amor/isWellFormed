#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int divideDownNumber(int& num){
	int sum = 0;
	while(num>=10){
		int b = num %10;
		sum = sum +b;
		num = num / 10;
	}
	sum = sum +num;
	while(sum>=10){
		sum = divideDownNumber(sum);
	}
	return sum;
}

int main(){
	int a = 123i;
	int b;
	if (a>0){
		b = divideDownNumber(a);
	}
	cout<<"b is : "<<b<<endl;
	return 0;
}