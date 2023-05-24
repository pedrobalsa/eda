#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>

void inicializar(Fila *fila, int tamanho) {
  fila->item = malloc(tamanho * sizeof(Item));
  fila->quantidade = -1;
  fila->primeiro = -1;
  fila->ultimo = -1;
  fila->tamanho = tamanho;
}

void inserir(Fila *fila, int n) {
  fila->quantidade++;
  if(fila->tamanho==fila->quantidade) return;
  fila->item[fila->quantidade].n = n;
  fila->item[fila->quantidade].proximo = -1;
  fila->ultimo = fila->quantidade;
  if (fila->quantidade > 0) {
    fila->item[fila->quantidade - 1].proximo = fila->quantidade;
  } else {
    fila->primeiro = fila->quantidade;
  }
}

int remover(Fila *fila) {
  if (fila->primeiro == -1) {
    return -1;
  }
  int removido = fila->item[fila->primeiro].n;
  fila->primeiro = fila->item[fila->primeiro].proximo;
  if (fila->primeiro == -1) {
    fila->ultimo = -1;
  }
  return removido;
}

int vazio(Fila *fila){
  if(fila->primeiro==-1) return 1;
  else return 0;
}

void destroi(Fila *fila){
  while(fila->primeiro!=-1){
    remover(fila);
  }
}

int length(Fila *fila){
  if (vazio(fila) == 1) return 0;
  int counter = 1;
  for(int i = fila->primeiro;fila->item[i].proximo!=-1; i++){
    counter++;
  }
  return counter;
}
