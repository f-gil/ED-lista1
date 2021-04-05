#include <stack>
#include <queue>
#include <iostream>

class PilhaMin  {
private:
    std::stack<int> p;
    std::queue<int> mins;
public:
    int N;

    void cria() {
        N = 0;
    }

    bool estaVazio()    {
        return p.empty();
    }

    int ObterMin()  {
        return mins.front();
    }

    void empilha(int v) {
        if(mins.empty())
            mins.push(v);
        else    {
            std::queue<int> newMins;
            bool notYetReplaced = true;
            while(!mins.empty())    {
                if(v < mins.front() && notYetReplaced)  {
                    newMins.push(v);
                    notYetReplaced = false;
                }else   {
                    newMins.push(mins.front());
                    mins.pop();
                }
            }
            mins = newMins;
        }
        p.push(v);
        N++;
    }
    int desempilha() {
        int r = p.top();
        std::queue<int> newMins;
            bool notYetReplaced = true;
            while(!mins.empty())    {
                if(r == mins.front() && notYetReplaced)  {
                    mins.pop();
                    notYetReplaced = false;
                }else   {
                    newMins.push(mins.front());
                    mins.pop();
                }
            }
            mins = newMins;
        p.pop();
        
        N--;
        return r;
    }
};

int main(int argc, char const *argv[])
{
    PilhaMin p;
    p.empilha(5);
    p.empilha(4);
    p.empilha(1);    
    p.empilha(2);
    p.empilha(3);

    while(!p.estaVazio())   {
        std::cout << "minimo: " << p.ObterMin() << std::endl;
        std::cout << "desemp: " << p.desempilha() << std::endl;
    }

    return 0;
}
