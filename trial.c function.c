#include <stdio.h>
#include <stdlib.h>
int max(int num1,int num2){
if(num1>num2){
    printf("num1 is greater tha num2   \n");}
    else{
        printf("num1 is less than num2  \n");
    }

    return (max);
}
int main()
{
    int result;
    int a=4;int b=30;
    result=max(a,b);

    return 0;
}
