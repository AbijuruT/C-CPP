#include <stdio.h>
/*
    This program will print Diamond using stars.
*/
int main(){ // Main function

    int row,col,size = 5; // Decralation with one variable assignemt

    for(row = 1; row < size; row++){   //Pyramid

        for(col = row; col <= size; col++){ 

            printf("  "); // printing 2 spaces to form a shape
        }

        for(col = 1; col < row; col++){ 

            printf("* "); // printing stars to form a shape
        }
        for(col = 1; col <= row; col++){ 

            printf("* "); // printing stars to form a shape
        }
        
        printf("\n"); // Adding new line
    }
    
    for(row = 1; row <= size; row++){ //Pyramid reversed

        for(col = 1; col <= row; col++){ 

            printf("  "); // printing 2 spaces to form a shape
        }

        for(col = row; col < size; col++){ 

            printf("* "); // printing stars to form a shape
        }
        for(col = row; col <= size; col++){ 

            printf("* "); // printing stars to form a shape
        }
        printf("\n"); // Adding new line
    }
    return 0;
}