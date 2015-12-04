#include <stdio.h>
#include <unistd.h>
#define SIZE 30000000
int main(int argc, char *argv[]){
    int i=0;
    float sum=0.0;

    printf("Hello world! I have %ld logical cores. \n",
            sysconf(_SC_NPROCESSORS_ONLN));

#pragma offload target(mic)
    {
        printf("Hello world! I have %ld logical cores. \n",
                sysconf(_SC_NPROCESSORS_ONLN));
        fflush(0);
    }

    printf("Bye\n");
}


