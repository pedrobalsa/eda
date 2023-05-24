/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Estrutura de Dados Avançados
 *  Prof. Mário Lizier
 *
 *  Atividade 1
 *
 * ================================================================== *
 *  Dados do aluno:
 *
 *  RA: 792235
 *  Nome: Pedro Balsamão da Costa
 *
 * ================================================================== */
#include <stdio.h>
#include "matriz.c"

int main(void){
    int n;
    scanf("%d", &n);

    int vetorCord[n][3];
    for(int i = 0; i<n; i++){
        scanf("%d %d %d", &vetorCord[i][0], &vetorCord[i][1], &vetorCord[i][2]);
    }
    for(int i = 0; i<n; i++){
        printf("%d %d %d\n", vetorCord[i][0], vetorCord[i][1], vetorCord[i][2]);
    }
    
    return 0;
}