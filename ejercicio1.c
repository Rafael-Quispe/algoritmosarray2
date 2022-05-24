#include <stdio.h>
#include <stdlib.h>
//Escribir un programa que declare un array de tipo int que almacene los primeros diez n ́umeros naturales. Imprimir el array un elemento por l ́ınea.
int main(void) {
  int a[]={,1,2,3,4,5,6,7,8,9,10};
  for (int i = 1; i < 11; i++) {
    printf("%d ", a[i]);
  } printf("\n");
  return 0;
}
