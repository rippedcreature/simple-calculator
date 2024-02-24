#include<stdio.h>
#include<conio.h>
clrscr();
int main(){
    float num1;
    float num2;
    char  op;
    float result;

    printf("Write the first number : ");
    scanf ("%f",&num1);
    printf("write the operation :  \n");
    scanf (" %c",&op);
    printf("write the Second number : ");
    scanf ("%f",&num2);

    switch(op)
    {
        case '+':
        result = num1+num2;
        printf("%f",result);
        break;

         case '-':
        result = num1-num2;
        printf("%f",result);
        break;

        case '*':
        result = num1*num2;
        printf("%f",result);
        break;

        case '/':
        result = num1/num2;
        printf("%f",result);
        break;

        default :
        printf("This operator is not valid :");

    }
getch();
return (0);
}
