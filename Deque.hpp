struct carta  {
  char valor;
  carta *prox;
  carta *ante;
};

class Deque {     
private:
  carta *topo, *base;
public:
  int N;

  void cria() {
    N = 0;
    topo = NULL;
    base = NULL;
  }

  void insereInicio(char v) {
    carta *tmp = new carta;
        tmp->valor = v;
        tmp->ante = NULL;

        if(base == NULL)  {
            topo = tmp;
            base = tmp;
        }
        else  {
            base->ante = tmp;
            tmp->prox = base;
            base = base->ante;
        }
    N++;
  }

  void insereFim(char v) {
    carta *tmp = new carta;
      tmp->valor = v;
      tmp->prox = NULL;

      if(topo == NULL)
      {
        topo = tmp;
        base = tmp;
      }
      else
      {
        topo->prox = tmp;
        tmp->ante = topo;
        topo = topo->prox;
      }
    N++;
  }
  char removeFim()  {
    char fim = topo->valor;
    if (topo->ante == NULL) {
      topo = NULL;
      base = NULL;
    } else  {
      topo = topo->ante;
      topo->prox = NULL;
    }
    N--;
    return fim;
  }

  char removeInicio()  {
    char inicio = base->valor;
    if (base->prox == NULL) {
      topo = NULL;
      base = NULL;
    } else  {
      base = base->prox;
      base->ante = NULL;
    }
    N--;
    return inicio;
  }

  carta *buscaFim() {
    return topo;
  }

  carta *buscaInicio() {
    return base;
  }


};