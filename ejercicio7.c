#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Escribir un programa que genere un array de 100 elementos con valores aleatorios enteros del 0 al 9. Contar la cantidad de veces que aparece cada dıgito en el array e imprimir una tabla con las frecuencias.
int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);
  int numbers[n];
  int frecuencias[m];
  srand(time(NULL));
  for (int i = 0; i < m; i++) {
    frecuencias[i]=0;
  }
  for (int i = 0; i < n; i++) {
    numbers[i] = rand()%(m);
    printf("%d ", numbers[i]);
    frecuencias[numbers[i]]++;
  } printf("\n");
  for (int i = 0; i < m; i++) {
    printf("El número %d apareció %d veces\n", i, frecuencias[i]);
  }
  return 0;
}
