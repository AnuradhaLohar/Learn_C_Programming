    #include<stdio.h>

    int main()
    {

    int choice;
    printf("Enter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        default:
        printf("Please Enter Valid Choice");  //default satament use anywhere in switch block
        break;
        case 1 : printf("one");
        break;
        case 2 : printf("Two");
        break;
        case 3 : printf("Three");
        break;
        case 4 : printf("Four");
        break;
        case 5 : printf("Five");
        break;
        case 6 : printf("Six");
        break;
        case 7 : printf("Seven");
        break;
        case 8 : printf("Eight");
        break;
        case 9 : printf("Nine");
        break;
        case 10 : printf("Ten");
        break;

    }





    return 0;
    }