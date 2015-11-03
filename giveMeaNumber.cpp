#include <iostream>
#include <math.h>
using namespace std;
int giveMeANumber(int num){
	int rem = 0;
	if (num % 9 ==0 && num != 0){
		rem = num % 9 + 9;
	}
	else if(num == 0){
		rem = 0;
	}
	else{
		rem = num % 9;
	}
	return rem;
}

int main(){
	int a = 0;
	int rem = 0;
	rem = giveMeANumber(a);
	cout<<"The remainder of "<<a<<" is : "<<rem<<endl;
	return 0;
}