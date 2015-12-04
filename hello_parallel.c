#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <omp.h>
#define SIZE 3000000
int main(int argc, char *argv[]){
    int i=0;
    float sum=0.0;
#pragma omp parallel
    {
        printf("Hello world from host [%d]\n", omp_get_thread_num());
    }
#pragma offload target(mic)
    {
#pragma omp parallel 
            printf("Hello world from coprocessor [%d]\n",omp_get_thread_num()); 
            fflush(0);
    }
    printf("Bye\n");
}


