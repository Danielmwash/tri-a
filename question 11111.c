#include <stdio.h>
#include <stdlib.h>

int main()
{
  int display[2][3];
  int i,j,a,largest;
  for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        printf("enter value for display[%d][%d]:",i,j);
        scanf("%d%d",&[i],&[j]);}}
         for(i=o;i<2;i++){
          for(j=0;j<3;j++){
                printf("%d",display[i][j]);
    largest=a[0][0];
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
    if(a[i][j]>largest)
        largest=a[ii][j]
        }
    }printf("largest element%d\n",largest);
          }}
    return 0;
}
