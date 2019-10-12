#include <stdio.h>
#include <stdlib.h>

int main()
{int number1,number2;
char operator;

    printf("enter number1\n");
    scanf("%d\n",&number1);
        printf("enter the operator\n");
    scanf("%c\n",&operator);
        printf("enter number2\n");
    scanf("%d\n",number2);


        switch(operator);{
    cas:{
    printf("%d\n",number1+number2);
    break;
    case'-':{
    printf("%d\n",number1-number2);
    break;
    case'*':{
    printf("%d\n",number1*number2);
    break;
    case'/':{
    printf("%d\n",number1/number2);
    break;}}}} } return 0;
}
