#include<stdio.h>
/*
* This program will help to find any given factorial number 
*/
int factorial_number(int numb){
    // Base case this will help to stop recursively calling
    if(numb <= 1){
        return 1;
    }
    // recursively call factorial_number() function
    return numb * factorial_number(numb -1);
}
// Now take it into main function
int main(){
    int numb;
    printf("Enter number to get its factorial: ");
    scanf("%d",&numb);
    printf("The factorial of %d! = %d\n", numb,factorial_number(numb));

    return 0;
}