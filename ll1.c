// A simple C program for traversal of a linked list 
#include <stdio.h> 
#include <stdlib.h> 

struct Node { 
	int data; 
	struct Node* next; 
}; 

// This function prints contents of linked list starting from 
// the given node 
void printList(struct Node* n) 
{ 
	while (n != NULL) { 
		printf(" %d ", n->data); 
		n = n->next; 
	} 
} 

int main() 
{ 
	struct Node* zero = NULL;	
	struct Node* head = NULL; 
	struct Node* second = NULL; 
	struct Node* third = NULL;
	struct Node* final = NULL;
	 
	// allocate 3 nodes in the heap
 	zero = (struct Node*)malloc(sizeof(struct Node)); 
	 
	head = (struct Node*)malloc(sizeof(struct Node)); 
	second = (struct Node*)malloc(sizeof(struct Node)); 
	third = (struct Node*)malloc(sizeof(struct Node)); 
	final = (struct Node*)malloc(sizeof(struct Node));

	head->data = 1; // assign data in first node 
	head->next = second; // Link first node with second 

	second->data = 2; // assign data to second node 
	second->next = third; 

	third->data = 3; // assign data to third node 
	third->next = final;

	final->data = 4;
	final->next = NULL; 

	zero->data = 0;
	zero->next = head;
	head = zero;	

	printList(head); 

	return 0; 
}

