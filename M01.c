#include "lista.h"

Celula *new_celula(){
  Celula *tmp = (Celula*) malloc(sizeof(Celula));
  tmp->prox = NULL;
  return tmp;
}

void new_lista(lista *l){
  l-> inicio = l->fim = new_celula();
  l-> tam = 0;
}