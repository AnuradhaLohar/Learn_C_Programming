#include<stdio.h>
int main(){

//if Statement
    // int i = 10;
    // int j = 20;
    
    // if(i < j){
    //     i = 30;
    // }
    // printf("i = %d j = %d", i, j);

// if-else Statement
    // int i = 40;
    // int j = 20;
    
    // if(i < j){
    //     i = 30;
    // }
    // else
    // {
    //     i=0;
    // }
    // printf("i = %d j = %d", i, j);

// if else ladder
    // int i = 40;
    // int j = 20;
    // int k = 30;
    
    // if(i == j)
    // {
    //     i=30;
    // }
    // else if(i == k)
    // {
    //     i=40;
    // }
    // else if(i > j)
    // {
    //     i=50;
    // }

    // else if(i > k)
    // {
    //     i=60;
    // }
    // else{
    //     i=0;
    // }
    // printf("i = %d j = %d k = %d", i, j,k);

//odd even
    // int num;
    // printf("Enter the value of num:\n");
    // scanf("%d",&num);
    
    // if(num % 2 == 0){
    //     // printf("It is Even Number");
    //     printf("%d is a even number", num);
    // }
    // else 
    // {
    //     printf("It is Odd Number");
    // }


//prime or not prime

    int num ;

    printf("Enter the value of num: ");
    scanf("%d", &num);

    if( num != 1){
        printf("%d is prime number");
    }
    else
    {
        printf("%d is not prime number");
    }
    return 0;

    }