#include <iostream>
#include <chrono>

#include "treefunctions.h"
#include "linkedlist.h"

using namespace std;
using namespace std::chrono;

int main()
{
    //Começa a marcar o tempo te execução das "N" inserções de criação de nós na árvore (N=100).
    auto start = std::chrono::high_resolution_clock::now();
    
    Node* root = nullptr;
    
    root = insertNode(root, 70);
    root = insertNode(root, 33);
    root = insertNode(root, 11);
    root = insertNode(root, 80);
    root = insertNode(root, 28);
    root = insertNode(root, 51);
    root = insertNode(root, 121);
    root = insertNode(root, 61);
    root = insertNode(root, 350);
    root = insertNode(root, 131);
    root = insertNode(root, 42);
    root = insertNode(root, 15);
    root = insertNode(root, 100);
    root = insertNode(root, 122);
    root = insertNode(root, 37);
    root = insertNode(root, 41);
    root = insertNode(root, 36);
    root = insertNode(root, 98);
    root = insertNode(root, 101);
    root = insertNode(root, 188);
    root = insertNode(root, 99);
    root = insertNode(root, 69);
    root = insertNode(root, 25);
    root = insertNode(root, 106);
    root = insertNode(root, 72);
    root = insertNode(root, 14);
    root = insertNode(root, 34);
    root = insertNode(root, 191);
    root = insertNode(root, 45);
    root = insertNode(root, 47);
    root = insertNode(root, 260);
    root = insertNode(root, 9);
    root = insertNode(root, 32);
    root = insertNode(root, 10);
    root = insertNode(root, 290);
    root = insertNode(root, 52);
    root = insertNode(root, 22);
    root = insertNode(root, 140);
    root = insertNode(root, 172);
    root = insertNode(root, 173);
    root = insertNode(root, 48);
    root = insertNode(root, 7);
    root = insertNode(root, 201);
    root = insertNode(root, 162);
    root = insertNode(root, 6);
    root = insertNode(root, 16);
    root = insertNode(root, 21);
    root = insertNode(root, 125);
    root = insertNode(root, 136);
    root = insertNode(root, 203);
    root = insertNode(root, 43);
    root = insertNode(root, 29);
    root = insertNode(root, 31);
    root = insertNode(root, 151);
    root = insertNode(root, 222);
    root = insertNode(root, 46);
    root = insertNode(root, 137);
    root = insertNode(root, 180);
    root = insertNode(root, 23);
    root = insertNode(root, 2);
    root = insertNode(root, 49);
    root = insertNode(root, 109);
    root = insertNode(root, 35);
    root = insertNode(root, 102);
    root = insertNode(root, 261);
    root = insertNode(root, 97);
    root = insertNode(root, 65);
    root = insertNode(root, 20);
    root = insertNode(root, 19);
    root = insertNode(root, 3);
    root = insertNode(root, 55);
    root = insertNode(root, 59);
    root = insertNode(root, 141);
    root = insertNode(root, 54);
    root = insertNode(root, 124);
    root = insertNode(root, 39);
    root = insertNode(root, 1);
    root = insertNode(root, 192);
    root = insertNode(root, 248);
    root = insertNode(root, 700);
    root = insertNode(root, 26);
    root = insertNode(root, 17);
    root = insertNode(root, 411);
    root = insertNode(root, 333);
    root = insertNode(root, 62);
    root = insertNode(root, 66);
    root = insertNode(root, 211);
    root = insertNode(root, 67);
    root = insertNode(root, 300);
    root = insertNode(root, 309);
    root = insertNode(root, 68);
    root = insertNode(root, 138);
    root = insertNode(root, 415);
    root = insertNode(root, 24);
    root = insertNode(root, 362);
    root = insertNode(root, 369);
    root = insertNode(root, 361);
    root = insertNode(root, 95);
    root = insertNode(root, 360);
    root = insertNode(root, 788);
    
    auto end = std::chrono::high_resolution_clock::now() - start;
    //Converte pra nanosegundos.
    long long resultadoNano = std::chrono::duration_cast<std::chrono::nanoseconds>(end).count();
    
    cout << "TEMPO DE INSERÇÃO DOS 100 ELEMENTOS DA ÁRVORE (nanosegundos): " << resultadoNano << endl;
    
    //BSF
    cout << "BFS Traversal: ";
    bfsTraversal(root);
    cout << endl;
    
    
    //AGORA VAMOS CRIAR UMA FILA (LINKEDLIST) COM OS MESMOS N NÓS.
    
    
    //Começa a marcar o tempo te execução das "N" inserções de criação de nós LISTA (N=100).
    auto start_2 = std::chrono::high_resolution_clock::now();
    
    Node* head = nullptr;
    
    insertEnd(&head, 70);
    insertEnd(&head, 33);
    insertEnd(&head, 11);
    insertEnd(&head, 80);
    insertEnd(&head, 28);
    insertEnd(&head, 51);
    insertEnd(&head, 121);
    insertEnd(&head, 61);
    insertEnd(&head, 350);
    insertEnd(&head, 131);
    insertEnd(&head, 42);
    insertEnd(&head, 15);
    insertEnd(&head, 100);
    insertEnd(&head, 122);
    insertEnd(&head, 37);
    insertEnd(&head, 41);
    insertEnd(&head, 36);
    insertEnd(&head, 98);
    insertEnd(&head, 101);
    insertEnd(&head, 188);
    insertEnd(&head, 99);
    insertEnd(&head, 69);
    insertEnd(&head, 25);
    insertEnd(&head, 106);
    insertEnd(&head, 72);
    insertEnd(&head, 14);
    insertEnd(&head, 34);
    insertEnd(&head, 191);
    insertEnd(&head, 45);
    insertEnd(&head, 47);
    insertEnd(&head, 260);
    insertEnd(&head, 9);
    insertEnd(&head, 32);
    insertEnd(&head, 10);
    insertEnd(&head, 28);
    insertEnd(&head, 52);
    insertEnd(&head, 22);
    insertEnd(&head, 140);
    insertEnd(&head, 172);
    insertEnd(&head, 173);
    insertEnd(&head, 48);
    insertEnd(&head, 7);
    insertEnd(&head, 201);
    insertEnd(&head, 162);
    insertEnd(&head, 6);
    insertEnd(&head, 16);
    insertEnd(&head, 21);
    insertEnd(&head, 125);
    insertEnd(&head, 136);
    insertEnd(&head, 203);
    insertEnd(&head, 43);
    insertEnd(&head, 29);
    insertEnd(&head, 31);
    insertEnd(&head, 100);
    insertEnd(&head, 222);
    insertEnd(&head, 46);
    insertEnd(&head, 137);
    insertEnd(&head, 180);
    insertEnd(&head, 23);
    insertEnd(&head, 2);
    insertEnd(&head, 49);
    insertEnd(&head, 109);
    insertEnd(&head, 35);
    insertEnd(&head, 102);
    insertEnd(&head, 261);
    insertEnd(&head, 97);
    insertEnd(&head, 65);
    insertEnd(&head, 20);
    insertEnd(&head, 19);
    insertEnd(&head, 3);
    insertEnd(&head, 55);
    insertEnd(&head, 59);
    insertEnd(&head, 141);
    insertEnd(&head, 54);
    insertEnd(&head, 124);
    insertEnd(&head, 39);
    insertEnd(&head, 1);
    insertEnd(&head, 192);
    insertEnd(&head, 248);
    insertEnd(&head, 700);
    insertEnd(&head, 26);
    insertEnd(&head, 17);
    insertEnd(&head, 411);
    insertEnd(&head, 333);
    insertEnd(&head, 62);
    insertEnd(&head, 66);
    insertEnd(&head, 211);
    insertEnd(&head, 67);
    insertEnd(&head, 300);
    insertEnd(&head, 309);
    insertEnd(&head, 68);
    insertEnd(&head, 138);
    insertEnd(&head, 415);
    insertEnd(&head, 24);
    insertEnd(&head, 362);
    insertEnd(&head, 369);
    insertEnd(&head, 361);
    insertEnd(&head, 95);
    insertEnd(&head, 360);
    insertEnd(&head, 788);
    
    auto end_2 = std::chrono::high_resolution_clock::now() - start_2;
    //Converte pra nanosegundos.
    long long resultadoNano_2 = std::chrono::duration_cast<std::chrono::nanoseconds>(end_2).count();
    
    cout << "TEMPO DE INSERÇÃO DOS 100 ELEMENTOS DA LISTA (INSERINDO NO FINAL): " << resultadoNano_2 << endl;
    
    //INSERINDO OS "N" NÓS NO INÍCIO DA FILA
    
    //Começa a marcar o tempo te execução das "N" inserções de criação de nós LISTA (N=100).
    auto start_3 = std::chrono::high_resolution_clock::now();
    
    Node* head_2 = nullptr;
    
    insertFront(&head_2, 70);
    insertFront(&head_2, 33);
    insertFront(&head_2, 11);
    insertFront(&head_2, 80);
    insertFront(&head_2, 28);
    insertFront(&head_2, 51);
    insertFront(&head_2, 121);
    insertFront(&head_2, 61);
    insertFront(&head_2, 350);
    insertFront(&head_2, 131);
    insertFront(&head_2, 42);
    insertFront(&head_2, 15);
    insertFront(&head_2, 100);
    insertFront(&head_2, 122);
    insertFront(&head_2, 37);
    insertFront(&head_2, 41);
    insertFront(&head_2, 36);
    insertFront(&head_2, 98);
    insertFront(&head_2, 101);
    insertFront(&head_2, 188);
    insertFront(&head_2, 99);
    insertFront(&head_2, 69);
    insertFront(&head_2, 25);
    insertFront(&head_2, 106);
    insertFront(&head_2, 72);
    insertFront(&head_2, 14);
    insertFront(&head_2, 34);
    insertFront(&head_2, 191);
    insertFront(&head_2, 45);
    insertFront(&head_2, 47);
    insertFront(&head_2, 260);
    insertFront(&head_2, 9);
    insertFront(&head_2, 32);
    insertFront(&head_2, 10);
    insertFront(&head_2, 28);
    insertFront(&head_2, 52);
    insertFront(&head_2, 22);
    insertFront(&head_2, 140);
    insertFront(&head_2, 172);
    insertFront(&head_2, 173);
    insertFront(&head_2, 48);
    insertFront(&head_2, 7);
    insertFront(&head_2, 201);
    insertFront(&head_2, 162);
    insertFront(&head_2, 6);
    insertFront(&head_2, 16);
    insertFront(&head_2, 21);
    insertFront(&head_2, 125);
    insertFront(&head_2, 136);
    insertFront(&head_2, 203);
    insertFront(&head_2, 43);
    insertFront(&head_2, 29);
    insertFront(&head_2, 31);
    insertFront(&head_2, 100);
    insertFront(&head_2, 222);
    insertFront(&head_2, 46);
    insertFront(&head_2, 137);
    insertFront(&head_2, 180);
    insertFront(&head_2, 23);
    insertFront(&head_2, 2);
    insertFront(&head_2, 49);
    insertFront(&head_2, 109);
    insertFront(&head_2, 35);
    insertFront(&head_2, 102);
    insertFront(&head_2, 261);
    insertFront(&head_2, 97);
    insertFront(&head_2, 65);
    insertFront(&head_2, 20);
    insertFront(&head_2, 19);
    insertFront(&head_2, 3);
    insertFront(&head_2, 55);
    insertFront(&head_2, 59);
    insertFront(&head_2, 141);
    insertFront(&head_2, 54);
    insertFront(&head_2, 124);
    insertFront(&head_2, 39);
    insertFront(&head_2, 1);
    insertFront(&head_2, 192);
    insertFront(&head_2, 248);
    insertFront(&head_2, 700);
    insertFront(&head_2, 26);
    insertFront(&head_2, 17);
    insertFront(&head_2, 411);
    insertFront(&head_2, 333);
    insertFront(&head_2, 62);
    insertFront(&head_2, 66);
    insertFront(&head_2, 211);
    insertFront(&head_2, 67);
    insertFront(&head_2, 300);
    insertFront(&head_2, 309);
    insertFront(&head_2, 68);
    insertFront(&head_2, 138);
    insertFront(&head_2, 415);
    insertFront(&head_2, 24);
    insertFront(&head_2, 362);
    insertFront(&head_2, 369);
    insertFront(&head_2, 361);
    insertFront(&head_2, 95);
    insertFront(&head_2, 360);
    insertFront(&head_2, 788);
    
    auto end_3 = std::chrono::high_resolution_clock::now() - start_3;
    //Converte pra nanosegundos.
    long long resultadoNano_3 = std::chrono::duration_cast<std::chrono::nanoseconds>(end_3).count();
    
    cout << "TEMPO DE INSERÇÃO DOS 100 ELEMENTOS DA LISTA (INSERINDO NO INÍCIO): " << resultadoNano_3 << endl;
    //________________________________________________________________________________________________________________//
    cout << "=======================================================================================" << endl;
    
    auto start_4 = std::chrono::high_resolution_clock::now();
    cout << "busca na árvore utilizando BFS" << endl;
    searchNodeBSF(root, 360);
    auto end_4 = std::chrono::high_resolution_clock::now() - start_4;
    long long resultadoNano_4 = std::chrono::duration_cast<std::chrono::nanoseconds>(end_4).count();
    cout << "Tempo para busca no BFS do nó 360: " << resultadoNano_4 << " nanoseconds" << endl;
    
    
    cout << "=======================================================================================" << endl;
    
    
    auto start_5 = std::chrono::high_resolution_clock::now();
    cout << "busca na árvore utilizando DFS" << endl;
    searchNode(root, 360);
    auto end_5 = std::chrono::high_resolution_clock::now() - start_5;
    long long resultadoNano_5 = std::chrono::duration_cast<std::chrono::nanoseconds>(end_5).count();
    cout << "Tempo para busca no DFS do nó 360: " << resultadoNano_5 << " nanoseconds" << endl;
    
    
    
    
    
    
    cout << "=======================================================================================" << endl;
    
    
    cout << "Tree Height: " << treeHeight(root) << endl;
    
    cout << "=======================================================================================" << endl;
    cout << "=======================================================================================" << endl;
    cout << "========================== selectionSort PARA LINKED LIST =============================" << endl;
    cout << "=======================================================================================" << endl;
    cout << "=======================================================================================" << endl;
    
    Node* head_linkedlist1 = nullptr;
    
    //Cria uma links list com 10.000 elementos random com valores de 0 até 1000000.
    for (int i = 0; i < 10000; i++) 
    {
        insertEnd(&head_linkedlist1, rand() % 10000);
    }

    displayList(head_linkedlist1);
    cout << "=================================================================================================================" << endl;
    
     //Começa a marcar o tempo te execução das "N" inserções de criação de nós na árvore (N=100).
    auto start_selectionSort = std::chrono::high_resolution_clock::now();
    
    selectionSort(&head_linkedlist1);
    
    auto end_selectionSort = std::chrono::high_resolution_clock::now() - start_selectionSort;
    //Converte pra nanosegundos.
    long long resultado_selectionSortNano = std::chrono::duration_cast<std::chrono::nanoseconds>(end_selectionSort).count();
    

    displayList(head_linkedlist1);
    cout << "=================================================================================================================" << endl;
    cout << "Tempo de ordenação (selectionSort) em nanosegundos: " << resultado_selectionSortNano << endl;  
    cout << "=================================================================================================================" << endl;
    
    
    cout << "=======================================================================================" << endl;
    cout << "=======================================================================================" << endl;
    cout << "=========================== bubbleSORT PARA LINKED LIST ===============================" << endl;
    cout << "=======================================================================================" << endl;
    cout << "=======================================================================================" << endl;
    
    
    Node* head_linkedlist2 = nullptr;
    
    //Cria uma links list com 10.000 elementos random com valores de 0 até 1000000.
    for (int i = 0; i < 10000; i++) 
    {
        insertEnd(&head_linkedlist2, rand() % 10000);
    }

    displayList(head_linkedlist2);
    cout << "=================================================================================================================" << endl;
    
     //Começa a marcar o tempo te execução das "N" inserções de criação de nós na árvore (N=100).
    auto start_bubbleSort = std::chrono::high_resolution_clock::now();
    
    bubbleSort(&head_linkedlist2);
    
    auto end_bubbleSort = std::chrono::high_resolution_clock::now() - start_bubbleSort;
    //Converte pra nanosegundos.
    long long resultado_bubbleSortNano = std::chrono::duration_cast<std::chrono::nanoseconds>(end_bubbleSort).count();
    

    displayList(head_linkedlist2);
    cout << "=================================================================================================================" << endl;
    cout << "Tempo de ordenação (bubbleSort) em nanosegundos: " << resultado_bubbleSortNano << endl;  
    cout << "=================================================================================================================" << endl;
    
    
    return 0;
}







// Parte 2 do Trabalho: Elaborar busca utilizando BFS (vocês já fizeram o DFS)
// Parte 3 do Trabalho: Monitorar o desempenho de busca em árvore utilizando DFS e BFS
// Parte 4 do Trabalho: Monitorar o desempenho de criação de listas
// Parte 5 do Trabalho: Monitorar o desempenho de criação de árvores















