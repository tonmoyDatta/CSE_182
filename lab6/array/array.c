#include <stdio.h>
int main() {
char array[6], i;
printf("Enter your name: ");
for(i = 0; i < 6; ++i) {
scanf("%c", &array[i]);
}
printf("Displaying name: ");
for(i = 0; i < 6; ++i) {
printf("%c", array[i]);
}
return 0;
}
