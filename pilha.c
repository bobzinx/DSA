#include <stdio.h>

void push(int valor);
int pop(void);
int size(void);
int stacktop(void);

int pilha[20];

int pos= 0;

void push(int valor)
{
    pilha[pos] = valor;

    pos++;
}

int pop()
{
    return (pilha[--pos]);
}

int size()
{
    return pos;
}

int stacktop()
{
    return pilha[pos];
}

int main( int argc, char** argv)
{
    printf("\n colocados dados na pilhas");
    push(1);
    push(2);
    push(3);

    printf("\n Tamanho da pilha %d", size());

    printf("\n APegando dado da pilha : %d", pop());

    printf("\n Apagando dado da pilha : %d",pop());

    printf("\n Apagando dado da pilha : %d",pop());

    printf("\n Tamanho da pilha %d \n",size());

    return 0;

}