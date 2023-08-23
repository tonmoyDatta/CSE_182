#include<stdio.h>
int main( )
{
float ratio,a, b, c, d;
printf("Enter four integer values\n");
scanf("%f%f%f%f",&a,&b,&c,&d);
if (c-d != 0){
ratio = (a+b)/(c-d);
printf("Ratio = %f\n", ratio);
}
return 0;
}
