#include <stdio.h>
#include <stdlib.h>
//Escribir un programa que haga lo mismo que el ejercicio anterior pero para los primeros n numeros naturales. El usuario ingresa n como argumento de l ́ınea de comandos.
int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int a[n];
  for (int i = 1; i <= n; i++) {
    a[i-1] = i;
    printf("%d ", a[i-1]);
  } printf("\n");
  return 0;
}
