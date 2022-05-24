#include <stdio.h>
#include <stdlib.h>
//Escribir un programa que declare el array de enteros 1, 2, 3, 4, 5, 6 e invierta el orden del mismo. Luego imprimirlo.
int main(int argc, char const *argv[]) {
  int a[]={1,2,3,4,5,6};
  for (int i = 0; i < 6; i++) {
    printf("%d ", a[5-i]);
  } printf("\n");
  return 0;
}
