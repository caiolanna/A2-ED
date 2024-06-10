#include <iostream>

#include "treefunctions.h"
#include "linkedlist.h"

using namespace std;

Node* createNode(int iValue)
{
    Node* tmp = (Node*) malloc(sizeof(Node));
    
    if (tmp == nullptr)
    {
        cerr << "Erro em createNode: malloc" << endl;
        exit(1);
    }
    
    tmp->iPayload = iValue;
    tmp->ptrLeft = nullptr;
    tmp->ptrRight = nullptr;
    
    return tmp;
}

Node* searchNode(Node* startingNode, int iData)
{
    if(startingNode == nullptr) return nullptr;
    else if(iData == startingNode->iPayload) return startingNode;
    else if(iData < startingNode->iPayload) return searchNode(startingNode->ptrLeft, iData);
    else return searchNode(startingNode->ptrRight, iData);
}

Node* insertNode(Node* startingNode, int iData)
{
    if(startingNode == nullptr)
    {
        return createNode(iData);
    }
    
    if(iData < startingNode->iPayload)
    {
        startingNode->ptrLeft = insertNode(startingNode->ptrLeft, iData);
    }
    else
    {
        startingNode->ptrRight = insertNode(startingNode->ptrRight, iData);
    }
    
    return startingNode;
}

void bfsTraversal(Node* startingNode)
{
    Node* head_v = nullptr;
    Node* current = startingNode;
    if (startingNode == nullptr) return;
    
    insertEnd(&head_v, startingNode->iPayload);
    
    while(head_v != nullptr)
    {
        cout << head_v->iPayload << " ";
        current = searchNode(startingNode, head_v->iPayload);
        
        
        if (current->ptrLeft != nullptr)
        {
            insertEnd(&head_v, current->ptrLeft->iPayload);
        }
        
         if (current->ptrRight != nullptr)
        {
            insertEnd(&head_v, current->ptrRight->iPayload);
        }
        
        deleteNote(&head_v, head_v);
        
    }

}

int treeHeight(Node* startingNode)
{
    if (startingNode == nullptr) return 0;
    else
    {
        int iLeftHeight = treeHeight(startingNode->ptrLeft);
        int iRightHeight = treeHeight(startingNode->ptrRight);
        
        return max(iLeftHeight, iRightHeight) + 1;
    }
}


//DFS _________________________________________________________________________

void traversePreOrder(Node* ptrStartingNode)
{
    if (ptrStartingNode != nullptr)
    {
        cout << " " << ptrStartingNode->iPayload;
        traversePreOrder(ptrStartingNode->ptrLeft);
        traversePreOrder(ptrStartingNode->ptrRight);
    }
}

void traverseInOrder(Node* ptrStartingNode)
{
    if (ptrStartingNode != nullptr)
    {
        traverseInOrder(ptrStartingNode->ptrLeft);
        cout << " " << ptrStartingNode->iPayload;
        traverseInOrder(ptrStartingNode->ptrRight);
    }
}

void traversePostOrder(Node* ptrStartingNode)
{
    if (ptrStartingNode != nullptr)
    {
        traversePostOrder(ptrStartingNode->ptrLeft);
        traversePostOrder(ptrStartingNode->ptrRight);
        cout << " " << ptrStartingNode->iPayload;
    }
}

//_____________________________________________________________________________










