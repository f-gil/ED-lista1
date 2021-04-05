#include<iostream>
#include<queue> // fila!

class Pilha2F // pilha de caracteres
{
public:
  void cria()
  {
    N = 0;
  }

  void libera()
  {
  }

  int N;                   // contador (espaço constante "O(1)")
  std::queue<char> fila1;  // métodos: enqueue/dequeue... push/pop
  std::queue<char> fila2;

  // metodos de pilha (TAD): empilha, desempilha, topo

  char topo()
  {
    // TODO: falta implementar!!
  }

  void empilha(char x) // O(1)
  {
    this->fila1.push(x); // | A | B | C |     N=3
    //this->N = this->N + 1;
    this->N++;
    //N++;
  }

  char desempilha()    // O(N)
  {
    // O(N) ~ linear
    for(int i=0; i<this->N-1; i++)              // N-1 operações x O(1) = O(N)
    {
      int k = this->fila1.front();
      this->fila1.pop();
      this->fila2.push(k); // O(1) + O(1) + O(1) = O(1)
    }
    // | A | B |
    // Elemento C está na fila 1!
    char r = fila1.front();
    fila1.pop(); // desenfileira
    // O(N) ~ linear
    for(int i=0; i<N-1; i++) {              // N-1 operações x O(1) = O(N)
      int k = fila2.front();
      fila2.pop();
      fila1.push(k); // O(1) + O(1) + O(1) = O(1)
    }
    //
    // O(N) + O(N) = 2 O(N) = O(2 N) = O(N)
    //
    N=N-1;
    return r;
  }
};


/*int main() {
  // testes!!! (TDD - Test Driven Development)
  Pilha2F p;
  p.cria();
  //
  p.empilha('a');
  p.empilha('b');
  p.empilha('c');
  //printf("topo: %c\n", p.topo()); // c
  printf("desemp: %c\n", p.desempilha()); // c
  printf("desemp: %c\n", p.desempilha()); // b
  printf("desemp: %c\n", p.desempilha()); // a

  p.libera();

  return 0;
}*/