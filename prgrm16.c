#include<stdio.h>

/*
Quick Quiz: Write a program to find grade of a student given his marks based on below:
90 – 100 => A
80 – 90 => B
70 – 80 => C
60 – 70 => D
50 – 60 => E
<50 => F
*/

int main(){
    
    int marks=40;

    if(marks<=100 && marks>=90){
        printf("Grade allotted to the student is A.");
    }

    else if(marks<=90 && marks>=80){
        printf("Grade allotted to the student is B.");
    }

    else if(marks<=80 && marks>=70){
        printf("Grade allotted to the student is C.");
    }

   else if(marks<=70 && marks>=60){
        printf("Grade allotted to the student is D.");
    }

   else if(marks<=60 && marks>=50){
        printf("Grade allotted to the student is E.");
    }

    else{
        printf("Sorry the student failed the exam.");
    }
    return 0;
}
