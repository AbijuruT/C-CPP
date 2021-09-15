#include<stdio.h> 
int main(){
    int size, count_even = 0, count_odd = 0; 
    /*
    *The counter variables will be used to know how many even and odd numbers 
    *inside all entered numbers and initial are zero 
    */
    // Ask user how many number are needed
    printf("How many numbers do you want? ");
    scanf("%d", &size);
    int array_of_numbers[size];
    // Add element in array

    for(int i = 0; i < size; i++){
        printf("Enter number %d: ",i+1);
        scanf("%d", &array_of_numbers[i]);
        if(array_of_numbers[i] % 2 == 0){
            // printf("%d is even\n", array_of_numbers[i]);
            count_even++;
        }
    
        else{
            // printf("%d is odd\n", array_of_numbers[i]);
            count_odd++;
        }
    }
    printf("There are %d Even numbers and %d Odd numbers in all entered number.\n",count_even,count_odd);
    return 0;
}