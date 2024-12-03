#include <stdio.h>

#include <stdlib.h>

#define TAMANHO_MAXIMO 100

struct queue 
{
    int itens[TAMANHO_MAXIMO];
    int front, rear; 
};

int empty(struct queue * pq)
{
   if(pq->front == pq->rear)
   {
    return 1;
   } 

   return 0;
}

void enqueue(struct queue *pq, int x)
{
    if(pq->rear +1 >= TAMANHO_MAXIMO)
    {
        printf("\n Estouro da capacidade da fila");

        exit(1);
    }
}