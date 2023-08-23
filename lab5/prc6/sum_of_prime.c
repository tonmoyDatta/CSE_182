#include<stdio.h>
int main(){
    int n,i,num,count,sum=0;
     printf("Enter a number:");
     scanf("%d",&n);
     for (num = 1; num<=n;num++){
            count =0;
     for(i=2;i<=num/2;++i){
        if (num%i == 0){
            count++;
            break;
        }
     }
    if (count == 0 && num!=1)
        sum = sum+num;
     }
        printf("sum of num is %d",sum);



     return 0;




}
