#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter 1st number\n");
    scanf("%d",&num1);
    printf("Enter 2nd number\n");
    scanf("%d",&num2);
    printf("Enter 3rd number\n");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3){
        printf("%d is greatest",num1);
    }
    else if (num1<num2 && num2>num3)
        {
        printf("%d is greatest",num2);
    }
    else if(num1<num2 && num2<num3){
        printf("%d is greatest",num3);
    }
    return 0;
}
