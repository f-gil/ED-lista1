#include <iostream>
#include <stack>


// inversão utilizando uma pilha
std::stack<char> inverte1P(std::stack<char> P)  {
    std::stack<char> pI;
    while(!P.empty())   {
        pI.push(P.top());
        P.pop();
    }

    return pI;
}

int main(int argc, char const *argv[])
{
    std::stack<char> p;

    p.push('a');
    p.push('b');
    p.push('c');
    
    p = inverte1P(p);

    while(!p.empty())   {
        printf("desemp: %c\n", p.top());
        p.pop();
    }

    return 0;
}
