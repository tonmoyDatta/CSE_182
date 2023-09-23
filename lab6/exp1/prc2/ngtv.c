#include<stdio.h>
int main() {
int array[5], i;
printf("Enter 5 integers: ");
for(i = 0; i < 5; ++i) {
scanf("%d", &array[i]);
}
printf("Displaying negative integers: ");
for(i = 0; i < 5; ++i) {
    if(array[i] < 0){
printf("%d\n", array[i]);
}
}
return 0;
}
