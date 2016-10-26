#include<stdio.h>


void print_array(int [],int);
void print_array_pointer(int *,int);

int main(){

    printf("Enter the Number of elements you want : ");
    int number = 0;
    scanf("%d",&number);
    printf("entered number is : %d",number);
    int array[number];
    int i = 0;
    for(i=0;i<number;i++){
    
        printf("Enter the %d th number : ",i);
        scanf("%d",&array[i]);
    
    }

    print_array_pointer(array,number);
    


}


//pointer implemetations
void reverse(int *array,int number){

    printf("Reversing the array elements \n ******************************************* \n");
    while(number>=0){
    
        *array = *(array+(number-1));
        number--;
    
    } 

}

//print array pointer 
void print_array_pointer(int *array,int size){
    int itr = 0;
    while(itr < size){
        printf("%d\t",*array);
        itr++;
        array++;
    }
    printf("\n");
}


//regular printing
void print_array(int array[],int size){
    printf("Printing the array\n*************************************\n");
    int itr = 0;
    for(itr = 0;itr<size;itr++){
        printf("%d\t",array[itr]);
    }
    printf("\n**********************************************");
}
