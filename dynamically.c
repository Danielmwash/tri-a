#include <stdio.h>
#include <stdlib.h>

int main()
{int catmarks[6];
int i;
printf("key in six array elements\n");
for(i=0;i<6;i++){
    scanf("%d",&catmarks[i]);

}
    printf("the first element is:%d",catmarks[0]);
    printf("the last elements is:%d",catmarks[5]);
    return 0;
}
