#include <iostream>
#include "Deque.hpp"

int main(int argc, char const *argv[])
{
  Deque d;
  d.cria();
  d.insereFim('A');
  d.insereFim('B');
  d.insereFim('C');
  d.insereInicio('D');
  d.insereInicio('E');

  std::cout << "topo: " << d.buscaFim()->valor << std::endl;
  std::cout << "base: " << d.buscaInicio()->valor << std::endl;

  while (d.N > 0) {
    std::cout << "removendo elemento: " << d.removeInicio() << std::endl;
  }
  
  std::cout << std::endl;
  

  d.insereFim('A');
  d.insereInicio('B');
  d.insereFim('C');
  d.insereFim('D');
  d.insereInicio('E');
  d.buscaInicio();
  std::cout << "topo: " << d.buscaFim()->valor << std::endl;
  std::cout << "base: " << d.buscaInicio()->valor << std::endl;

  while (d.N > 0) {
    std::cout << "removendo elemento: " << d.removeFim() << std::endl;
  }

  return 0;
}
