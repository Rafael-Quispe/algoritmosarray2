#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  if (n>=100) {
    printf("Ingresar un N° entre 0 y 99\n");
  } else if (43==n) {
    printf("GANASTE!!!\n");
  } else printf("PERDISTE :(\n");
  return 0;
}
