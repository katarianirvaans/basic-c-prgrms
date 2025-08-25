#include<stdio.h>

int main(){
 /*Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
 Income Slab Tax
 2.5 – 5.0L 5%
 5.0L - 10.0L 20%
 Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.*/

int x , tax=0;
/*let x be the income of a particular person*/
printf("enter your annual income:" , x);
scanf("%d" , &x);

if(x<250000){
    printf("There would be no tax.");
}

else if(x>250000 && x<500000){
    printf("tax would be 5 percent of your income i.e : %d " , tax=0.05*x);
} 

else if(x>500000 && x<1000000){
    printf("tax would be 20 percent of your income i.e : %d " , tax=0.20*x);
} 

else {
    printf("tax would be 30 percent of your income i.e : %d " , tax=0.30*x);

} 


    return 0;
}
