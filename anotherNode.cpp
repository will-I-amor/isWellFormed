#include <list>
#include <iostream>
using namespace std;
struct Node
{
	string payload;
	Node* next;
	Node (string pl="", Node* n_ptr=NULL):payload(pl),n_ptr(next){};
};
void print_list(Node* head){
	while (head ->next != NULL){
		cout<<head->payload<<" ";
		head = head->next;
	}
	cout<<endl;
}





