#include<stdio.h>
int main() {
int array[5], i;
printf("Enter 5 integers: ");
for(i = 0; i < 5; ++i) {
scanf("%d ", &array[i]);
}
printf("Displaying integers: ");
for(i = 0; i < 5; ++i) {
printf("%d ", array[i]);
}
return 0;
}
