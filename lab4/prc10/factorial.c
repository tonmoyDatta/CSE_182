#include<stdio.h>
int main(){
    int n,i,sum=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;++i){

            sum=sum*i;
    }
    printf("The factorial is %d",sum);
return 0;

}
