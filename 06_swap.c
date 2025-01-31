#include<stdio.h>

int main()
{
    //swap numbers
    // int a = 10;
    // int b = 20;
    // int temp;
    // printf("%d\n", a , b);

    // temp = a;
    // a = b;
    // b = temp;
    // printf("a=%d b=%d \n",a , b );



//Fibonacci series
    // int a = 0;
    // int b = 1;
    // int next;

    // for(int i = 0; i<=10; i++){
    //     if(i <= 1){
    //         next = i;
    //     }else{
    //             next = a + b;
    //             a = b;
    //             b = next;
    //     }
    
    // printf("%d,", next);
    // }

    // printf("%d",5/2);
    // printf("%d",10/2.00+1);
    // int a = 4;
	// int b = 8;
	// printf("Addition of %d and %d : %d",a, b , a+b);
    // printf("%c", '$');
    //    int a = 5;
    // int b = 3;
    // printf("The result od %d + %d is : %d",a, b ,a+b);

    int rows =5;
    for(int i = 0; i< rows; i++){
        for(int j=0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
	return 0;
  
}