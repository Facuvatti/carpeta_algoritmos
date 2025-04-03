#include <stdio.h>
#include <stdlib.h>
// Usando tres números enteros 𝑎, 𝑏 y 𝑐, decidir si se puede formar un triángulo con los mismos
int triangulo(int a, int b, int c){
    return a < (b+c) || b < (c+a) || c < (b+a) ? 1:0;
}
int main(int argc, char *argv[]){
int a = atoi(argv[1]);
int b = atoi(argv[2]);
int c = atoi(argv[3]);
r = triangulo(a,b,c);
printf("%s", r == 1? "Se puede hacer un triangulo" : "No se puede hacer un triangulo");
}
