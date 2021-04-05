#include <stack>

class Fila2P    {
public:
    int N;
    std::stack<char> pilha1;
    std::stack<char> pilha2;

    void cria() {
        N = 0; 
    }

    void libera()   {

    }

    void enfilera(char x) 
    {
        this->pilha1.push(x);
        this->N++;
        
    }

    char desenfilera()   {
        
        for(int i=0; i<this->N-1; i++)  {
        int k = this->pilha1.top();
        this->pilha1.pop();
        this->pilha2.push(k);
        }

        char r = pilha1.top();
        pilha1.pop(); 

        for(int i=0; i<N-1; i++) {
        int k = pilha2.top();
        pilha2.pop();
        pilha1.push(k);
        }
        
        N=N-1;
        return r;
    }
};