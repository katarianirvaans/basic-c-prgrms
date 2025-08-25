/*Write a program to print multiplication table of 10 in reversed order*/

#include<stdio.h>

int main(){
    int y=10;
    printf("Reverse order table for 10 using loop is: \n");
    for ( int i = 10; i ; i--)
    {
        printf("%d x %d = %d \n" , y , i , y*i );
    }
    
    return 0;
}
