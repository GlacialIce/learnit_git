#include <iostream>

using namespace std;

// Buat struct untuk Node linked list
class Node
{
public:
	// Data
	int data;

	// Tail
	Node* next;
};

// Given a node prev_node, insert a
// new node after the given
// prev_node
void insertAfter(Node* prev_node, int new_data)
{

	// 1. Check if the given prev_node is NULL
	if (prev_node == NULL)
	{
		cout << "The given previous node cannot be NULL" << endl;
		return;
	}

	// 2. Allocate new node
	Node* new_node = new Node();

	// 3. Put in the data
	new_node->data = new_data;

	// 4. Make next of new node as
	// next of prev_node
	new_node->next = prev_node->next;

	// 5. move the next of prev_node
	// as new_node
	prev_node->next = new_node;
}

int main(){
	// Head
	Node *head = NULL;
	Node *node1, *node2, *node3;

	// Deklarasi
	node1 = new Node();
	node2 = new Node();
	node3 = new Node();

	// Masukkan data
	node1->data = 10;
	node1->next = node2;

	node2->data = 20;
	node2->next = node3;

	node3->data = 30;
	node3->next = NULL;

	insertAfter(node1->next, 40);

	// Print Node linked list
	Node *cur;
	cur = node1;
	while(cur != NULL){
		cout << cur->data << endl;
		cur = cur->next;
	}
}