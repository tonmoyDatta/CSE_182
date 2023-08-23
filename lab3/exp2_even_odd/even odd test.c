#include<stdio.h>
int main(){
    int num;
        printf("Enter a number:\n");
        scanf("%d",&num);
        if(num%2==0){
            printf("This is an even number");
        }
        else{
            printf("This is an odd number");
        }

    return 0;
}
