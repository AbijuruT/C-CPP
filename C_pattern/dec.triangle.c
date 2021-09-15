#include <stdio.h>
/*
    This program will print decreasing triangle using stars
*/
int main(){ // Main function

    int row,col,size = 5; // Decralation with one variable assignemt

    for(row = 1; row <= size; row++){ // This for loop is responsible for printing rows pending on the size we have

        for(col = row; col <= size; col++){ // This for loop is responsible for printing cols pending on the size we have

            printf("* "); // printing stars to form a shape
        }
        printf("\n"); // Adding new line
    }
    return 0;
}