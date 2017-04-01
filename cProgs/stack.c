#include<stdio.h>
#include<malloc.h>

struct Stack {

	unsigned int size;
	int top;
	int *array;
};

struct Stack * createStack(int size){

		struct Stack * stack = ( struct Stack * )malloc(sizeof(struct Stack));
		stack->size = size;
		stack->top = -1;
		stack->array = (int *)malloc(sizeof(int)*stack->size);
		return stack;

}

int isEmpty(struct Stack *stack){

	if(stack->top == -1){
		return 1;
	}
	else{
		return 0;
	}
}

int isFull(struct Stack *stack){

	if(stack->top == stack->size - 1){
		return 1;
	}
	else{
		return 0;
	}
}

int push(struct Stack *stack,int x){

	if(!isFull(stack)){
		stack->array[++stack->top] =x;
	}
	return x;
}

int pop(struct Stack *stack){
	if(isEmpty(stack)){
		printf("memory underflow...!!!");
	}
	else{
		return stack->array[stack->top--];
	}
}

int peek(struct Stack * stack)
{
    if (isEmpty(stack))
        return 0;
    return stack->array[stack->top];
}

int main()
{
    struct Stack* stack = createStack(100);
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    printf("%d %d ",stack->top,stack->size);
    printf("%d popped from stack\n", pop(stack));
    printf("Top item is %d\n", peek(stack));
    return 0;
}