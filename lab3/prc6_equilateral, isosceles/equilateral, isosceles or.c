#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three sides of triangle:\n");
    scanf("%d%d%d",&a,&b,&c);
    if ((a==b)&&(b==c)){
        printf("The triangle is equilateral");
    }
    else if ((a!=b)&&(b!=c)){
        printf("The triangle is scalene triangle");
    }
    else if ((a==b) && (b!=c)){
        printf("The triangle is isosceles");
    }
    else if ((a==c) && (c!=b)){
        printf("The triangle is isosceles");
    }
    else if ((c==b) && (b!=a)){
        printf("The triangle is isosceles");

    }

    return 0;
}


