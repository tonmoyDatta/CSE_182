#include<stdio.h>
int main(){
    float u,b,bill;
    printf("Enter your using unit:");
    scanf("%f",&u);
    if (u<=50){
        b=.5*u;
    }
     else if (u<=150){
        b=.5*50+.75*(u-50);
    }
    else if (u<=250){
        b=.5*50+.75*100+1.2*(u-150);
    }
    else if (u>250){
     //   b=.5*50+.2*u+.75*100+1.2*100+1.5*(u-250);
        b=1.5*u;
    }
    bill=b+b*.2;


    printf("Your payable bill is:%f",bill);
return 0;



}
