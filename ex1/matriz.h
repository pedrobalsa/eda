#ifndef MATRIZ_H
#define MATRIZ_H

typedef struct Item{
  int n;
  int proximo;
} Item;

typedef struct Fila{
  Item *item;
  int quantidade, primeiro, ultimo, tamanho;
} Fila;

void inicializar( Fila *fila, int tamanho);
void inserir(Fila *fila, int n);
int remover(Fila *fila);
int vazio(Fila *fila);
void destro(Fila *fila);
int length(Fila *fila);

#endif