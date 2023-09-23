#include<stdio.h>
int main() {
int array[5], i , even=0, odd=0;
printf("Enter 5 integers: ");
for(i = 0; i < 5; ++i) {
scanf("%d", &array[i]);
}
for (i=0; i <5 ;++i){
    if (array[i]%2==0)
        even++;
    else
        odd++;

}
    printf("Even integer number= %d\n",even);
    printf("Odd integer number= %d",odd);

    return 0;
}
