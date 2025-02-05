#include<stdio.h>

int main()
{
    // int count;
    // printf("Enter Count :");
    // scanf("%d", &count);

    // if(count < 10000){
    //     printf("Release lockdown");
    // }
    // else{
    //     if(count > 10000 && count < 15000){
    //         printf("Partial release lockdown");
    //     }
    //     else{
    //         printf("Continue lockdown");
    //     }
    // }

    int num1, num2, num3;
    printf("Enter value of num1 num2 num3:");
    scanf("%d", &num1,&num2,&num3);
// if(num1&&num2&&num3){


    if (num1 > num2){
    if (num1 > num3){
    printf("greatest = num1 ");
    }
    else{
    printf("greatest = num3 ");
    }
            
    }    
    else{
    if (num2 > num3)
    {
    printf("greatest = num2");
    }
        
        else{
    printf("greatest = num3");

        }
        
    }
// }
// else{
//     printf(" %d The greatest number is: ");
// }
    
















    // if(num1 > num2){
    //     printf("%d is grater ",num1,num2);

    //     if(num1 > num3){
    //         printf("%d is grater ",num1,num3);
    //     }
    //     else if(num2 > num1){
    //         printf("%d is greter ",num1,num2);
    //     }
    //    if(num2 > num3)
    //     {
    //         printf("%d is greter ",num2,num3);
    //     }
    //   }
    
    // else{
    //    if(num3 > num1){
    //         printf("%d is greter ",num1,num3);
    //     }
    //     else if(num3 > num2)
    //     {
    //         printf("%d is greter ",num2,num3);
    //     }
    // }
}