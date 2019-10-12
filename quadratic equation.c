#include <stdio.h>
#include <stdlib.h>

int main()
{
float a,b,c,determinat,r1,r2,real,imag;
printf("enter coefficient a,b and c:");
scanf("%f%f%f",&a,&b,&c);
determinat =b*b-4*a*c;
if(determinat>0){
    r1=(-b+sqrt(determinat))/(2*a);
    r2=(-b-sqrt(determinat))/(2*a);
    printf("roots are:%.2f and%.2f",r1,r2);
}
else if(determinat==0){
    r1=r2= -b/(2*a);
    printf("roots are:%.2f and %.2f",r1,r2);
}
else{
    real=-b/(2*a);
    imag=sqrt(-determinat)/(2*a);
    printf("roots are: %.2f+%.2fi and %.2f-%.2fi",real,imag,real,imag);
}
return 0;
}
