#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// %d -> decimal %s -> string | %c -> character | %f -> float %t -> boolean %o -> octal %u -> unsigned %ld -> long decimal %lld -> long long decimal %x -> hexadecimal 
int main(int argc, char *argv[]) {
    int year = atoi(argv[1]);

    if (year%4 == 0 && year%100 != 0 || year%400 == 0){
        printf("El year %d es bisiesto", year);
    }
    else {
        printf("El year %d no es bisiesto", year);
    }
    return 0;
}