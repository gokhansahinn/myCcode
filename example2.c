#include <stdio.h>
#include <stdint.h>



//Array of Pointers to Functions.
void addition(int a, int b)
{
    printf("%d + %d = %d\n",a,b,a+b);
}
void substraction(int a, int b)
{
    printf("%d - %d = %d\n",a,b,a-b);
}
void multiplication(int a, int b)
{
    printf("%d * %d = %d\n",a,b,a*b);
}
void division(int a, int b)
{
    if(b != 0)
        printf("%d / %d = %d\n",a,b,a/b);
    else
        printf("Do not enter 0 for second parameter!\n");
}
void module(int a, int b)
{
    printf("%d %% %d = %d\n",a,b,a%b);
}
int main()
{
    void (*ptrOperation[])(int,int) = {addition,substraction,multiplication,division,module};
    int num1,num2;
    char operation;
    int choice;
    // printf("Enter the operation that you want to perform (+,-,*,/): ");
    // scanf("%c",&operation);
    printf("Choices: \n0 - addition \n1 - substraction \n2 - multipication \n3 - devision\n4 - module\n");
    scanf("%d",&choice);
    printf("Enter a number1: ");
    scanf("%d",&num1);
    printf("Enter a number2: ");
    scanf("%d",&num2);
    (*ptrOperation[choice])(num1,num2);

    // switch (operation)
    // {
    // case '+':
    //     addition(num1,num2);
    //     break;
    // case '-':
    //     substraction(num1,num2);        
    //     break;
    // case '*':
    //     multiplication(num1,num2);
    //     break;
    // case '/':
    //     division(num1,num2);
    //     break;
    // default:
    //     printf("No relevant operation...Please try again!");
    //     break;
    // }




    return 0;
}