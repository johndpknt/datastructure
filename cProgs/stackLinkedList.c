#include<stdio.h>
#include<malloc.h>



struct Node {

	int data;
	struct Node * next;
};

#push,pop,isEmpty,isFull,peek

int pop(struct Node **head){
	if(isEmpty(head)){
		//the stack is empty

	}
	else{
		while(*head->next != NULL){
			head = head->next;
		}
	}
}

int isEmpty(struct Node ** head){
	if(**head == null){
		return 1;
	}
	else{
		return 0;
	}
}
int pop(struct Node * head){


}

