    #include<stdio.h>

    //=================================Arithamatic Opreators===============================================

    int main(){
    
    int num1,num2;
    printf( "Enter the value of num1 : \n");
    scanf("%d",&num1);
    
    printf( "Enter the value of num2 : \n");
    scanf("%d",&num2);
    
    printf("Addition of %d & %d : %d\n", num1,num2, num1 + num2);
    printf("Substraction of %d & %d  : %d\n", num1,num2, num1 - num2);
    printf("Multiplication of %d & %d :%d \n", num1,num2, num1 * num2);
    printf("Division of %d & %d :%d \n", num1,num2, num1 / num2);
    printf("Modulus of %d & %d : %d \n", num1,num2, num1 % num2);


    //=================================Relational Opreators===============================================

    int num3,num4;

    printf( "Enter the value of num3 : \n");
    scanf("%d",&num3);
    
    printf( "Enter the value of num4 : \n");
    scanf("%d",&num4);
    
    printf(" %d < %d : %d \n",num3,num4,num3 < num4 );
    printf(" %d > %d : %d \n",num3,num4,num3 > num4 );
    printf(" %d <= %d : %d \n",num3,num4,num3 <= num4 );
    printf(" %d >= %d : %d \n",num3,num4,num3 >= num4 );
    printf(" %d == %d : %d \n",num3,num4,num3 == num4 );
    printf(" %d != %d : %d \n",num3,num4,num3 != num4 );


    return 0;


    }