#include<stdio.h>
int main(){
  int n,i,sum=0,x;
    printf("Enter any number:");
    scanf("%d",&n);
    x=n;
    for(i;n!=0;n=n/10){
        i=n%10;
        sum=sum*10+i;
    }
    printf("Number in reverse is %d\n",sum);

    if (x == sum){
        printf("It's a palindrome number");
    }
    else {
            printf("It's not a palindrome number");
    }
    return 0;
}
