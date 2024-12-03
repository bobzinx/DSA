#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_PILHA 100

struct pilha {
    int topo;
    int itens[TAMANHO_PILHA];
};

int empty(struct pilha *p) {
    if (p->topo == -1) {
        return 1;
    }
    return 0;
}

int pop(struct pilha *p) {
    if (empty(p)) {
        printf("\n Pilha vazia\n");
        exit(1);
    }
    return p->itens[(p->topo)--];
}

void push(struct pilha *p, int e) {
    if (p->topo == (TAMANHO_PILHA - 1)) {
        printf("\n Estouro de pilha\n");
        exit(1);
    }

    p->itens[++(p->topo)] = e;
}

int size(struct pilha *p) {
    return p->topo + 1;
}

int stackpop(struct pilha *p) {
    if (empty(p)) {
        printf("\n Pilha vazia\n");
        exit(1);
    }
    return p->itens[p->topo];
}

int main(void) {
    struct pilha x;
    x.topo = -1;

    push(&x, 1);
    push(&x, 2);
    push(&x, 3);

    printf("\n Tamanho da pilha: %d", size(&x));
    printf("\n Elemento do topo da pilha: %d", stackpop(&x));

    printf("\n %d", pop(&x));
    printf("\n %d", pop(&x));
    printf("\n %d", pop(&x));

  
    printf("\n %d", pop(&x));

    return 0;
}
