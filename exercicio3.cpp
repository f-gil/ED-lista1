#include <iostream>
#include "Fila2P.hpp"


int main() {
  // testes!!! (TDD - Test Driven Development)
  Fila2P p;
  p.cria();
  //
  p.enfilera('a');
  p.enfilera('b');
  p.enfilera('c');
  //printf("topo: %c\n", p.topo()); // c
  printf("desenfil: %c\n", p.desenfilera()); // c
  printf("desenfil: %c\n", p.desenfilera()); // b
  printf("desenfil: %c\n", p.desenfilera()); // a

  p.libera();

  return 0;
}