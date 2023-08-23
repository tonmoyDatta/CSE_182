#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);

    for(i; n!=0 ; n=n/10){
        i=n%10;
        sum=sum+i;
    }
    printf("Sum of digit is %d",sum);
    return 0;

}
