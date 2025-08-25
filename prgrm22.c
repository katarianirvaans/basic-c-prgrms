/*Write a program to print multiplication table of a given number n.*/

#include<stdio.h>

int main(){
    int y;
    printf("Enter the number:");
    scanf("%d" , &y);
    for ( int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d \n" , y , i , y*i );
    }
    
    return 0;
}
