#include<stdio.h>
#include<stdlib.h>
//space for function prototype



//node declaration
struct node
{
    int data;
    struct node * next;
};

//add th the begining
struct node * add_begining(struct node * startNode,int data){

    struct node * newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data =  data;
    newNode->next = NULL;
    return newNode;

}

void add_end(struct node * startNode,int data)
{

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    while(startNode->next != NULL){

        startNode = startNode->next;
    }
    newNode->data = data;
    newNode->next = NULL;
    startNode->next = newNode;


}

void add_at_pos(struct node * startNode,int data,int pos){

    int i = 0;
    struct node * head = startNode;
    while(i<pos-1 && head->next!= NULL){

        head = head->next;
        i++;
    }
    if(head->next == NULL){

        if(i<pos-1){
            printf("\nThere is not enough elements so that i can insert at position %d",pos);
        }
        else{
            printf("End reached this is a case of adding to the end so adding the elements to the end");
        }
        //add at the end
    }
    else
    {
        struct node * newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = data;
        newNode->next = head->next;
        head->next = newNode;
    }
}


//print the linked list
void print_linked_list(struct node * startNode){

    struct node * head = startNode;
    printf("\n\n printing the linked list\n***********************************\n\n");
    while(head != NULL){
        printf("|%d | -> ",head->data);
        //printf(" | %u",head->next);
        head = head->next;
    }
    printf("\n\n************************************\n");
}

struct node * generate_random_linked_list(struct node * startNode){

    startNode =  add_begining(startNode,123);
    //print_linked_list(startNode);
    int random_number[10];
    int size = 0;
    printf("Enter the Size of the linkedList : ");
    //printf("%d",rand()%50);
    scanf("%d",&size);
    int i=0;
    for(i=0;i<size-1;i++){

        add_end(startNode,rand()%50);
    }
    return startNode;
}



int main(){

     struct node * startNode = NULL;
    printf("\tRunning the linked list program\n****************************************************\n");
    while(1){
        int ch;
        printf("\nEnter you choice\n***********************************\n");
        printf("\
              1.Create a Random Linked List\n \
            2.Display the linked List\n \
            3.insert to a position \
            \n10.to quit\n");
        printf("\nEnter you Choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                startNode = generate_random_linked_list(startNode);
                print_linked_list(startNode);                      //add_begining(startNode,100);
                break;
            case 2: 
                print_linked_list(startNode);
                break;
            case 3:
                add_at_pos(startNode,400,4);
                break;
            case 10:
                exit(1);
            default:
                printf("\n\n***********************\ninvalid Choice Darling...!!!!!\n***********************\n");
        }
    }
}
