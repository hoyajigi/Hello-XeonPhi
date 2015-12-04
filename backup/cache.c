include <stdio.h>
#include <stdlib.h>

#define SIZE 1000

int main(){
    int i=0;
    int j=0;
    int k=0;

    int a[SIZE][SIZE];
    unsigned long int sum=0;

    for(k=0;k<2*SIZE;k++){
        for(j=0;j<SIZE;j++){
            for(i=0;i<SIZE;i++){
                a[i][j] += 1;
            }
        }
    }


}