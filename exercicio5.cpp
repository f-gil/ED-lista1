#include <iostream>
#include <queue>
#include <stack>


// inversão utilizando uma pilha
std::queue<char> inverte1P(std::queue<char> F)  {
    std::stack<char> p;
    std::queue<char> fI;
    while(!F.empty())   {
        p.push(F.front());
        F.pop();
    }
    while(!p.empty())   {
        fI.push(p.top());
        p.pop();
    }

    return fI;
}

int main(int argc, char const *argv[])
{
    std::queue<char> F;

    F.push('a');
    F.push('b');
    F.push('c');
    
    F = inverte1P(F);

    while(!F.empty())   {
        printf("desenfilera: %c\n", F.front());
        F.pop();
    }

    return 0;
}
