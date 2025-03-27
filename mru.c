#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[]){
    double di1 = atof(argv[1]);
    double di2 = atof(argv[2]);
    double v1 = atof(argv[3]);
    double v2 = atof(argv[4]);
    double df = (-di1*v2+di2*v1)/(v1-v2);
    double t = df/v1;
    printf("El tiempo de choque es: %lf",t);
}