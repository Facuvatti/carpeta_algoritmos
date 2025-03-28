#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// %d -> decimal %s -> string | %c -> character | %f -> float %t -> boolean %o -> octal %u -> unsigned %ld -> long decimal %lld -> long long decimal %x -> hexadecimal 
int main(int argc, char *argv[]) {
    double b = atof(argv[1]);
    double a = atof(argv[2]);
    double c = atof(argv[3]);
    double x1 = (-b + sqrt(pow(b,2)-4*a*c))/2*a;
    double x2 = (-b - sqrt(pow(b,2)-4*a*c))/2*a;
    printf("Las raices son \n x1: %f \n x2 %f",x1,x2);
    return 0;
}