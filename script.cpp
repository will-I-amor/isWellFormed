#include <iostream>
#include <vector>
#include <math>
using namespace std;
void divideDownNumber(int num, vector<int>&vec){
	//vector<int> vec;
	int tempSum = 0;
	int a = num;
	while (a>=10){
		int b = a % 10;
		vec.push_back(b);
		a = a/10;
	}
	vec.push_back(a);
	for (int i = 0;i<vec.size();i++){
		sum= sum+vec[i];
	}
	

}
void sumUpNumbersInVec(vector<int>&vec){
	int a = 0;//sum of digits
	for (int i = 0;i<vec.size();i++){
		a= a+vec[i];
	}
	//if sum is still bigger than 10;
	if (a>=10){
		divideDownNumber(a,vec);
	}
}



