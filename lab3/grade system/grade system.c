 #include<stdio.h>
int main(){
    int mark;

    printf("Enter your marks:");
    scanf("%d",&mark);
  //  if (mark<=100 && mark>=0)
    if (mark>=80 && mark<=100){
        printf("You got A+ and your grade is 5.00");
    }
    else if (mark>=70 && mark<80){
        printf("You got A and your grade is 4.00");

    }
    else if (mark>=60 && mark<70){
        printf("You got A- and your grade is 3.50");
    }
    else if (mark>=50 && mark<60){
        printf("You got B and your grade is 3.00");
    }
    else if (mark>=40 && mark<50){
        printf("You got C and your grade is 2.50");
    }
    else if (mark>=33 && mark<40){
        printf("You got passed(D) and your grade is 2.00");
    }
    else if (mark<33 && mark>=0){
        printf("You got failed");
    }
    else {
        printf("Input invalid");
    }
return 0;
}
