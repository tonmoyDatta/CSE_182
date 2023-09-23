#include<stdio.h>
int main()
{
int a, b,n=1;
for(a = 5; a >= 1; --a)
{
for(b = 1; b <= a; ++b)
{
printf("%d ", a);
}
//++n;
printf("\n");
}
return 0;
}