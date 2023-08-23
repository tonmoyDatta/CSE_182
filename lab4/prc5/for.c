#include<stdio.h>
int main(){
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for (i=0; n!=0; i++)
        {
            n=n/10;
    }

            printf("Num of the digit is:%d",i);
return 0;


}
