#include <stdio.h>
#include <stdlib.h>

int main()
{int eng,kisw,math,sci,ssre;
int sum,average;
printf("enter the marks for math\n",math);
scanf("%d\n",&math);
printf("enter the marks for eng\n",eng);
scanf("%d\n",&eng);
printf("enter the marks for kisw\n",kisw);
scanf("%d\n",&kisw);
printf("enter the marks for sci\n",sci);
scanf("%d\n",&sci);
printf("enter the marks for sci\n",ssre);
scanf("%d\n",&ssre);
sum=math+ssre+sci+kisw+eng;
printf
("the sum%d:\n",sum);
average=sum/5;
printf("%d\n",average);

if(average>=0&&average<=39){
    printf("the grade is E\n");
}
else if(average>=40&&average<=49)
{
    printf("the grade is D\n");
}
else if(average>=50&&average<=59)
{
    printf("the grade is C\n");
}
else if(average>=60&&average<=79)
{
    printf("the grade is B\n");

}
else if(average>=70&&average<=100)
{
    printf("the grade is A\n");}
    return 0;
}
