#include<stdio.h>
// this is a code to calculate area of a rectangle. (inputs from user)

int main(){
   int length , breadth;
   printf("Enter length = \n");
   scanf("%d" , &length);
   printf("Enter breadth =\n ");
   scanf("%d" , &breadth);
   
    printf("area of rectangle is %d" , length*breadth );
    return 0;
}
