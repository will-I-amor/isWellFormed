#include <iostream>
#include <string>
using namespace std;
class Node
{
	friend class LinkedList;
private:
	int _value;
	Node* _pNext;
public:
	Node(void):_pNext(NULL){}
	Node(int val):_value(val),_pNext(NULL){}
	Node(int val, Node* _ptr):_value(val),_pNext(_ptr){}
};
class LinkedList
{
	Node* _pHead;
	Node* _pTail;
public:
	LinkedList(){}
};

int main(){
	
	return 0;
}





