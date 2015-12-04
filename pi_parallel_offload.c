#include <stdio.h>
#include <stdlib.h>

int main(){
const int count=100000000;
double pi=0.0;
double t;
int i=0,j;

#pragma offload target(mic)
{
#pragma omp parallel for  simd private(t) reduction(+:pi)
for(j=0;j<count;j++)
for(i=0;i<count;i++){
    t=(double)((i+0.5)/count);
    pi+=4.0/(1.0+t*t);
}

pi /= count;
}
printf("pi=%f\n",pi);
return 0;
}
