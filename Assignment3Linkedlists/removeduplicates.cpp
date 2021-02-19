#include <bits/stdc++.h> 
using namespace std; 
struct Node 
{ 
	int data; 
	struct Node *next; 
}; 
struct Node *newNode(int data) 
{ 
Node *temp = new Node; 
temp -> data = data; 
temp -> next = NULL; 
return temp; 
} 
void printList(struct Node *node) 
{ 
	while (node != NULL) 
	{ 
		printf("%d ", node -> data); 
		node = node -> next; 
	} 
} 
void removeAllDuplicates(struct Node* &start) 
{ 
	Node* dummy = new Node; 
	dummy -> next = start; 
	Node* prev = dummy; 
	Node* current = start; 

	while(current != NULL) 
	{ 
		while(current -> next != NULL && 
			prev -> next -> data == current -> next -> data) 
			current = current -> next; 
		if (prev -> next == current) 
			prev = prev -> next; 
		else
			prev -> next = current -> next; 

		current = current -> next; 
	} 
	start = dummy -> next; 
} 
int main() 
{ 
	struct Node* start = newNode(23); 
	start -> next = newNode(28); 
	start -> next -> next = newNode(28); 
	start -> next -> 
	next -> next = newNode(35); 
	start -> next -> 
	next -> next -> next = newNode(49); 
	start -> next -> 
	next -> next -> 
	next -> next = newNode(49); 
	start -> next -> 
	next -> next -> 
	next -> next -> next = newNode(53); 
	start -> next -> 
	next -> next -> 
	next -> next -> 
	next -> next = newNode(53); 
	cout << "List before removal " << 
				"of duplicates\n"; 
	printList(start); 
	
	removeAllDuplicates(start); 
	
	cout << "\nList after removal " << 
				"of duplicates\n"; 
	printList(start); 
	return 0; 
} 
