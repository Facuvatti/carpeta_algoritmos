#include <stdio.h>
#include <stdlib.h>
// %d -> decimal %s -> string | %c -> character | %f -> float %t -> boolean %o -> octal %u -> unsigned %ld -> long decimal %lld -> long long decimal %x -> hexadecimal 
int main(int argc, char *argv[]) {
    int year = atoi(argv[1]);
    int r = 0;
    r = ((year%4 == 0 && year%100 != 0) || (year%400 == 0)) ? 1:0; 
    printf("%s",r == 1 ? "Es bisiesto" : "No es bisiesto" );
}