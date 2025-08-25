#include<stdio.h>

int main(){
    /*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40%. Assume there
are three subjects and take the marks as input from the user.*/

int sub1,sub2,sub3,x;

printf("enter sub1 marks: ");
scanf("%d" , &sub1);


printf("enter sub2 marks: ");
scanf("%d" , &sub2);


printf("enter sub3 marks: ");
scanf("%d" ,&sub3);

printf("The obtained marks are %d,%d and %d \n" , sub1 , sub2, sub3);

x = (sub1+sub2+sub3)/3;

if(x<40){
    printf("The student didn't meet the criteria , which resulted in failure \n");
}

else{
    printf("Pass.");
}

 return 0;
}
