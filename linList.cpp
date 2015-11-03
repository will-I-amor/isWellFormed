#include <iostream>
using namespace std;
class Node{
	friend class LinkedList;
	int data;
	Node* next;
	Node(void):next(NULL){}
	Node(int mydata):data(mydata),next(NULL){}
	Node(int mydata, Node* ptr):data(mydata),next(ptr){}
};
class LinkedList{
	Node* _pHead;
	Node* _pTail;
public:
	LinkedList(int val);
	//~LinkedList();
	void tailAppend(int val);
	void traverse_and_print();
	void remove(int val);
};
LinkedList::LinkedList(int val){
	_pHead = new Node(val);
	_pTail = _pHead;
}
void LinkedList::tailAppend(int val){
	if (_pHead == NULL){//if list is empty
		_pHead = _pTail = new Node(val);
	}
	else{
		_pTail->next = new Node(val);
		_pTail = _pTail->next;
	}
}
void LinkedList::traverse_and_print(){
	Node* p;
	if(_pHead == NULL){
		cout<<"This list is empty"<<endl;
	}
	else{
		p = _pHead;
		int count = 0;
		while (p!=NULL){
			count++;
			cout<<" "<<count<<" node is: "<<p->data<<endl;
			p = p->next;
		}
	}
}
int main(){
	LinkedList one(1);
	one.tailAppend(2);
	one.tailAppend(3);
	one.traverse_and_print();

	return 0;
}







