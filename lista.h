#ifdef LISTA_H
#define LISTA_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdbool.h>

// DEFINICAO DO TIPO PRODUTO
typedef struct Produto{
  int codigo;
  char descricao[100];
  float valor;
  int quantidade;
}Produto;

// DEFINICAO DO TIPO PRODUTO
typedef struct Produto{
  int codigo;
  char descricao[100];
  float valor;
  int quantidade;
}Produto;

// DEFINICAO DO TIPO CELULA
typedef struct Celula{
  Produto dado;
  struct Celula *prox;
}Celula;

// DEFINICAO DO TIPO CELULA
typedef struct Celula{
  Produto dado;
  struct Celula *prox;
}Celula;


// DEFINICAO DO TIPO LISTA
typedef struct Lista{
  Celula *inicio;
  Celula *fim;
  int tam;
}Lista;


Celula *new_celula();
void new_lista(lista *l);
  



















#endif