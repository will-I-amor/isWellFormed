#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <vector>
using namespace std;
bool exists(vector<char>vec, char element){
	bool foo = false;
	for(int i = 0; i<vec.size();i++){
		if (vec[i] == element){
			//cout<<"vec[i]: "<<vec[i]<<" == element : "<<element<<endl;
			foo = true;
			break;
		}
	}
	return foo;
}
int main(){
	string myString;
	stack<char> myStack;
	vector<char> arrOpen = {'(','[','{'};
	vector<char> arrClosed = {')',']','}'};
	cout<<"Please, enter your string: "<<'\n';
	getline(cin,myString);
	bool isWellFormed = true;
	//start to loop
	for(char c : myString){
		bool existsOpen = exists(arrOpen,c);
		bool existsClosed = exists(arrClosed,c);
		if (existsOpen == true && existsClosed == false){//if open
			//cout<<"for loop-> if, "<<c<<"exist in Open"<<endl;
			myStack.push(c);
			isWellFormed = false;
		}
		else if (existsOpen == false && existsClosed == true){//if closed
			//cout<<"for loop-> if, "<<c<<"exist in Closed"<<endl;
			if (myStack.empty()){
				isWellFormed = false;//not well formed
				break;
			}
			else{
				//cout<<"for loop-> if->elseif -> else, "<<c<<"is closed and stack is not empty"<<endl;
				int indexOpen = 0;
				int indexClosed = 0;
				for(int i_Open = 0; i_Open<arrOpen.size();i_Open++){//check the open kuohao index
					if (arrOpen[i_Open] == myStack.top()){
						indexOpen = i_Open;
					}
				}
				for (int j = 0; j<arrClosed.size();j++){//check the closed kuohao index
					if (arrClosed[j] == c){
						indexClosed = j;
					}
				}
				if (indexClosed == indexOpen){
					myStack.pop();
					isWellFormed = true;
				}
				else{
					isWellFormed = false;//not well formed
					break;
				}
			}
		}
	}
	for (char ch : myString){
		bool isOpen = exists(arrOpen, ch);
		bool isClosed = exists(arrClosed,ch);
		if (isOpen == false && isClosed == false){
			isWellFormed == false;
		}
	}
	bool finalDeci = false;
	if (isWellFormed == true && myStack.empty()){
		cout<<'\n'<<"this equation is well-Formed"<<endl;
	}
	else if (finalDeci == true){
		cout<<'\n'<<"this equation is well-Formed"<<endl;
	}
	else{
		cout<<'\n'<<"this equation is  NOT well-Formed"<<endl;
	}
	return 0;
}




