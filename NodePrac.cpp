#include <iostream>
#include <list>
using namespace std;
struct Node{
	Node* next;
	string payload;
	Node(string pl="", Node* n_ptr=NULL):payload(pl),next(n_ptr){};
};
void print_list(Node* ptr){
	while (ptr!=NULL){
		cout<<ptr->payload<<" ";
		ptr = ptr->next;
	}
	cout<<endl;
}
int main(){
	//从后往前写
	Node* head = new Node("deep");
	head = new Node("the", head);
	head = new Node("in", head);
	head = new Node("rolling",head);
	print_list(head);
	return 0;
}