#include <iostream>

#include "treefunctions.h"
#include "linkedlist.h"

using namespace std;


//Função que mostra a lista.
void displayList(Node* node)
{
    if (node == nullptr)
    {
        cout << "displayList: lista vazia" << endl;
        return;
    }

    if (node->ptrLeft != nullptr)
    {
        cout << "displayList: node esta no meio ou no fim da lista." << endl;
    }

    Node* temp = node;

    cout << "PayLoad: ";

    while (temp != nullptr)
    {
        cout << temp->iPayload << " ";
        temp = temp->ptrRight;
    }

    cout << endl;
}

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



void selectionSort(Node** head) 
{
    if(*head == nullptr)
    {
        cout << "Lista vazia" << endl;
        return;
    }
    
    Node* sortedList = nullptr; //criando o ponteiro para a lista ordenada
    Node* current = *head;
    Node* Aux = current->ptrRight;
    
    while(Aux != nullptr)
    {
    
    while (current != nullptr)
    {
        if(current->iPayload <= Aux->iPayload)
        {
            Aux = current;
            current = current->ptrRight;
        } else {
        current = current->ptrRight;
        
        }
    }
    
    insertEnd(&sortedList, Aux->iPayload);
    deleteNodebyValue(head, Aux->iPayload);
    current = *head;
    Aux = current->ptrRight;
    }
    
    insertEnd(&sortedList, current->iPayload);
    
    
    (*head) = sortedList;
}


//Troca valores dos nós.
void swapNode(Node* Node_1, Node* Node_2)
{
    int temp = Node_1->iPayload;
    Node_1->iPayload = Node_2->iPayload;
    Node_2->iPayload = temp;
}

//Buble sort
void bubbleSort(Node** head)
{
    if(*head == nullptr)
    {
        cout << "Lista vazia" << endl;
        return;
    }
    
    Node* listUnSorted = (*head);
    
    //Cria um ponteiro para marcar o fim da lista
    while(listUnSorted ->ptrRight != nullptr)
    {
        listUnSorted = listUnSorted->ptrRight;
    }
    
    for (Node* OutLoop = listUnSorted; OutLoop->ptrLeft != nullptr; OutLoop = OutLoop->ptrLeft)
    {
        for(Node* InnerLoop = *head; InnerLoop != OutLoop; InnerLoop = InnerLoop->ptrRight )
        {
            if(InnerLoop->iPayload >= InnerLoop->ptrRight->iPayload)
            {
                swapNode(InnerLoop, InnerLoop->ptrRight);
            }
        }
    }
    
    
}






























