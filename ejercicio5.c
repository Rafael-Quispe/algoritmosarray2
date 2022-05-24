#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
//Escribir un programa que genere un array de 100 lugares con enteros aleatorios entre 0 y 100. Encontrar el maximo y el mınimo del array.
int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int numbers[n];
  int max = INT_MIN;
  int min = INT_MAX;
  float prom = 0;
  int i = 0;
  srand(time(NULL));
  while (i < n) {
    int r=rand()%100 +1;
    numbers[i]=r;
    printf("%d ", numbers[i]);
    prom = prom + numbers[i];
    if (numbers[i]>max) {
      max = numbers[i];
    } else if (numbers[i]<min) {
      min = numbers[i];
    }
    i++;
  } prom = prom / i;
  printf("\nMáximo = %d\nMínimo = %d\nPromedio = %.2f\n", max, min, prom);
  return 0;
}
