#include <stdio.h>
// %d -> decimal %s -> string | %c -> character | %f -> float %t -> boolean %o -> octal %u -> unsigned %ld -> long decimal %lld -> long long decimal %x -> hexadecimal 
double max(double a, double b) {
    return (a > b) ? a : b;}
int main(int argc, char *argv[]) {
    double r = atoi(argv[1]);
    double g = atoi(argv[2]);
    double b = atoi(argv[3]);
    double c;
    double m;
    double y;
    double k;
    double w = (r > g ? r : g > b ? g : b)/255; //max(max(r/255, g/255), b/255);
    c = ((r == g && g == b) && b == 0 ? 0 : (w-(r/255))/w) * 100;
    m = ((r == g && g == b) && b == 0 ? 0 : (w-(g/255))/w) * 100;
    y = ((r == g && g == b) && b == 0 ?  0 : (w-(b/255))/w) * 100;
    k = ((r == g && g == b) && b == 0 ?  0 : 1 - w)*100;
    printf("El color es: \n C: %.0f %% \n M: %.0f %% \n Y: %.0f %%\n K: %.0f %%", c, m, y, k);
}