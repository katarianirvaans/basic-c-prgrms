#include<stdio.h>

//this is a prgrm to check whether a given year is a leap year or not.

int main(){
    int year;
    printf("Enter year:");
    scanf("%d" , &year);

    if((year % 4==0 && year % 100 !=0)|| year % 400 == 0){
        printf("Entered year is a leap year.\n");
    }

    else{
        printf("Entered year is not a leap year. \n");
    }
    
    return 0;
}
