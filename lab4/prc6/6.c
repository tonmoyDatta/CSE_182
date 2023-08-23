#include<stdio.h>
int main(){
    int n,fd,ld;
    printf("Enter the number:");
    scanf("%d",&n);
    ld=n%10;
    for (fd=0;n>10;fd++){
        n/=10;
    }
printf("First digit is %d\n",n);
printf("Last digit is %d",ld);
return 0;

}
