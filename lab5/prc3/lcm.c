#include<stdio.h>
int main(){
    int x,y,max;

    printf("Enter two number:");
    scanf("%d %d",&x,&y);
    max = (x>y) ? x:y;
        for (max;;++max){
            if ((max%x == 0) && (max%y == 0)){
                printf("LCM is %d",max);
                break;
                }
        }
return 0;

}
