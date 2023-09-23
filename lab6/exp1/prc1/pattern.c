#include<stdio.h>
int main()
{
int a, b,n;
scanf("%d",&n);
for(a = 1;0<n<10 && a <= n; a++)
{
for(b = 1; b <= a; b++)
{
printf("%d", b);
}
printf("\n");
}
return 0;
}
