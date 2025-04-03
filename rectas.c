//Una función que reciba números enteros 𝑎, 𝑏, 𝑐 y 𝑑 representando dos rectas 𝑦 = 𝑎𝑥 + 𝑏 y 𝑦 = 𝑐𝑥 + 𝑑. La
//función debe decidir si existe una intersección en un sólo punto de las dos rectas.
#include <stdio.h>
#include <stdlib.h>

int se_cruzan(int a, int b, int c, int d){
    int x = 1;
    int y1 = a*x + b;
    int y2 = c*x + d;
    printf("%s", y1 == y2 ? "Hay inteseccion":"No hay interseccion");
    
}
int main(int argc, char *argv[]){
    se_cruzan(atoi(argv[1]),atoi(argv[2]),atoi(argv[3]),atoi(argv[4]));    
}