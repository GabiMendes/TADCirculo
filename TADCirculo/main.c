#include <stdio.h>
#include <stdlib.h>
#include "circulo.h"


int main(void) {

  //Código feito em dupla: Gabriela Mendes e Rafaela Alexandre
  
  Circulo *c1=circ_cria(1, 1, 5);
  
  circ_exibe(c1);
  
  printf("\nPerimetro %.1f",circ_perimetro(5));
  
  printf("\nArea %.1f",circ_area(5));
  
  return 0;
  
}