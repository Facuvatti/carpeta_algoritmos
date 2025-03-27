#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[]){
    int n = 12;
    int years = atoi(argv[1]);
    double initial = atof(argv[2]);
    double interest = atof(argv[3]);
    double final = initial * pow((1 + (interest / n) * years), n*years);
    printf("El capital final es: %lf",final);
}