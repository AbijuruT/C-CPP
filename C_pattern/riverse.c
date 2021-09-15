#include <stdio.h>
/*
    This program will print right up triangle using stars
*/
int main(){ // Main function

    int row,col,size = 5; // Decralation with one variable assignemt

    for(row = 1; row <= size; row++){ 

        for(col = 1; col <= row; col++){ 

            printf("  "); // printing 2 spaes to form a shape
        }

        for(col = row; col <= size; col++){ 

            printf("* "); // printing stars to form a shape
        }
        printf("\n"); // Adding new line
    }
    return 0;
}