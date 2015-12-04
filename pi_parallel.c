#include <stdio.h>
#include <stdlib.h>

int main(){
const unsigned int count=420000000;
double pi=0.0;
double t;
unsigned int i=0;

#pragma omp parallel for  simd private(t) reduction(+:pi)
for(i=0;i<count;i++){
    t=(double)((i+0.5)/count);
    pi+=4.0/(1.0+t*t);
}

pi /= count;
printf("pi=%f\n",pi);
return 0;
}
