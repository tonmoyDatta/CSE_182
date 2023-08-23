#include<stdio.h>
int main(){
    int n,i,sum;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i;n!=0;n=n/10){
        i=n%10;
        sum=sum*10+i;
    }
    printf("Number in reverse is %d",sum);
    return 0;
}
