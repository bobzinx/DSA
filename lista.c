#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;              
    struct Node* next;     
} Node;

// Função para criar um novo nó
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node)); // Aloca memória para o novo nó
    if (!newNode) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    newNode->data = data;   // Define o valor do dado
    newNode->next = NULL;   // Inicializa o ponteiro como NULL
    return newNode;
}

// Função para adicionar um nó ao final da lista
void append(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {    
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next != NULL) { 
        temp = temp->next;
    }
    temp->next = newNode;   
}

// Função para imprimir a lista
void printList(Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Função para liberar a memória da lista
void freeList(Node* head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    Node* head = NULL; // Ponteiro para o primeiro nó da lista

    // Adicionando elementos à lista
    append(&head, 10);
    append(&head, 20);
    append(&head, 30);

    // Imprimindo a lista
    printf("Lista: ");
    printList(head);

    // Liberando a memória
    freeList(head);

    return 0;
}
