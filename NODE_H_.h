#ifndef NODE_H_
#define NODE_H_
//template <typename Item_Type>
struct Node{
	Int data;
	Node* next;
	Node(const Int& data_item, Node* next_ptr = NULL):\
	    data(data_item),next(next_ptr){}
};
struct DNode
{
	Int data;
	DNode* next;
	DNode* prev;
	DNode(const Int& the_data, DNode* prev_val = NULL, DNode* next_val =NULL):\
	    data(the_data),next(next_val),prev(prev_val){}
};
#endif