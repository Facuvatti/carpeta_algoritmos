#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// %d -> decimal %s -> string | %c -> character | %f -> float %t -> boolean %o -> octal %u -> unsigned %ld -> long decimal %lld -> long long decimal %x -> hexadecimal 
double max_double(double a, double b) {
    return (a > b) ? a : b;}
int main(int argc, char *argv[]) {
    double r = atoi(argv[1]);
    double g = atoi(argv[2]);
    double b = atoi(argv[3]);
    double w = max_double(max_double(r/255, g/255), b/255);
    double c = (w-(r/255))/w;
    double m = (w-(g/255))/w;
    double y = (w-(b/255))/w;
    double k = 1 - w;
    if (r == 0 && g == 0 && b == 0){
        c = 0;
        m = 0;
        y = 0;
        k = 1;
    }
    printf("El color es: \n C: %f \n M: %f \n Y: %f \n K: %f", c, m, y, k);
    return 0;
}