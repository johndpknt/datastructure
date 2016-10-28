/*
 *
 *
 *
 * An array is a type of data structure that stores elements of the same type in a contiguous block of memory. In an array, , of size , each memory location has some unique index,  (where ), that can be referenced as  (you may also see it written as ).
 *
 * Given an array, , of  integers, print each element in reverse order as a single line of space-separated integers.
 *
 * Note: If you've already solved our C++ domain's Arrays Introduction challenge, you may want to skip this.
 *
 * Input Format
 *
 * The first line contains an integer,  (the number of integers in ). 
 * The second line contains  space-separated integers describing .
 *
 * Constraints
 *
 * Output Format
 *
 * Print all  integers in  in reverse order as a single line of space-separated integers.
 *
 *
 *
 * URL: https://www.hackerrank.com/challenges/arrays-ds
 */



#include<stdio.h>



void print_array(int array[],int size){

	int i=0;
	printf("[");
	for( i=0;i<size;i++){
		printf("%d,",array[i]);
	}
	printf("]\n");

}


int main(){

	int array[] = {1,54,67,89,123,543,876,18,32,-1,95,0,-234};
	int size;
	printf("Enter the size of the elements to be reversed : ");
	scanf("%d",&size);
	size--;
	printf("Reverse from First(1),Last(0) : ");
	int ch;
	scanf("%d",&ch);
	print_array(array,sizeof(array)/sizeof(array[0]));
	if (ch == 1)
	{
		int i=0;
		while(i<size){
			int temp = array[size];
			array[size] = array[i];
			array[i] = temp;
			i++;
			size--;
		}
		print_array(array,sizeof(array)/sizeof(array[0]));
		//printf("%p\n",array++);
		
		
		
	}
	else{
		int up_size = sizeof(array)/sizeof(array[0]);
		up_size = up_size-1;
		int i = up_size-size;
		while(i<up_size)
		{
			int tmp = array[i];
			array[i] = array[up_size];
			array[up_size] = tmp;
			i++;
			up_size--; 
		}
		print_array(array,sizeof(array)/sizeof(array[0]));
	}
}



