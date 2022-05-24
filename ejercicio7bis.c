#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Escribir un programa que genere un array de 100 elementos con valores aleatorios enteros del 0 al 9. Contar la cantidad de veces que aparece cada dıgito en el array e imprimir una tabla con las frecuencias.
int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  srand(time(NULL));
  int r = rand()%25;
  if (n>=25) {
    printf("Ingresar un N° entre 0 y 24\n");
  } else if (r==n) {
    printf("%d\n", r);
    printf("GANASTE!!!\n");
  } else printf("PERDISTE :( Era %d\n",r);
  return 0;
}
