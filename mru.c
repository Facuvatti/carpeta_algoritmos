#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[]){
    double d1 = atof(argv[1]);
    double d2 = atof(argv[2]);
    double v1 = atof(argv[3]);
    double v2 = atof(argv[4]);
    double t = (d2-d1)/(v2-v1);
    printf("El tiempo de choque es: %lf",t);
}