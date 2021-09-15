#include<stdio.h>
int main(){
    int i,j,t=1;

    // for(i = 1; i<= 5; i++){ //print rows
    //     for(j = 1; j<= 5-i; j++){ //print space
    //         printf(" ");
    //     }
    //     for(j = 1; j<= 2*i-1; j++){ //print star
    //         printf("*");
    //     }
    //     printf("\n");
        
    // }
    for(i = 1; i<= 5; i++){
        for(j=1; j <= 5 -i; j++){
            printf(" ");
            t=i;
        }
        for(j=1; j<= i; j++){
            printf("%d",t);
            t++;
        }
        t =t-2;
        for(j = 1; j< i; j++){
            printf("%d",t);
            t--;
        }
        printf("\n");
    }
   return 0;
}