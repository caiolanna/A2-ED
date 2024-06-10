#include <iostream>

#include "treefunctions.h"
#include "linkedlist.h"

using namespace std;

//DELETAR Node

void deleteNote(Node** head, Node* ptrDelete)
{
    if (*head == nullptr || ptrDelete == nullptr)
    {
        cout << "deleteNote: nao foi possivel remover" << endl;
        return;
    }

    //CASO ptrDelete SEJA O PRIMEIRO ELEMENTO DA LISTA.
    if (*head == ptrDelete) (*head) = ptrDelete->ptrRight;

    //CASO ptrDelete N�O SEJA O �LTIMO N�.
    if (ptrDelete->ptrRight != nullptr) ptrDelete->ptrRight->ptrLeft = ptrDelete->ptrLeft;

    //CASO ptrDelete N�O SEJA O PRIMEIRO N�.
    if (ptrDelete->ptrLeft != nullptr) ptrDelete->ptrLeft->ptrRight = ptrDelete->ptrRight;

    free(ptrDelete);
}

Node* searchNodebyValue(Node** head, int iPayLoad){

    if (*head == nullptr)
    {
        cout << "searchNodebyValue: lista vazia" << endl;
        return nullptr;
    }

    Node* current = *head;

    while (current != nullptr)
    {
        if (current->iPayload == iPayLoad)
        {
            return current; // Retorna o ponteiro para o nó com o valor desejado
        }
        current = current->ptrRight;
    }

    cout << "searchNodebyValue: elemento nao encontrado" << endl;

    return nullptr;
}

void deleteNodebyValue(Node** head, int iPayLoad)
{
    Node* ptrDeletar = searchNodebyValue(head, iPayLoad);

    deleteNote(head, ptrDeletar);

    return;
}

void insertFront(Node** head, int iPayload)
{
    Node* newNode = createNode(iPayload);
    //newNode->prtPrev = nullptr;

    if (*head != nullptr)
    {
        (*head)->ptrLeft = newNode;
        newNode->ptrRight = (*head);
        (*head) = newNode;

        return;
    }

    (*head) = newNode;
}


void insertEnd(Node** head, int iPayload)
{
    Node* newNode = createNode(iPayload);
    //newNode->prtNext = nullptr;

    if (*head == nullptr)
    {
        //newNode->prtNext = nullptr;
        (*head) = newNode;
        return;
    }

    Node* temp = (*head);

    //PERCORREMOS A LISTA ATE O FIM
    while(temp->ptrRight != nullptr) temp = temp->ptrRight;

    newNode->ptrLeft = temp; //NEW NODE APONTA PARA O FIM DA LISTA.
    temp->ptrRight = newNode;
}