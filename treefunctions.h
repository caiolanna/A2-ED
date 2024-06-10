typedef struct Node
{
    int iPayload;
    Node* ptrLeft;
    Node* ptrRight;
} Node;

Node* createNode(int);
Node* searchNode(Node*, int);
Node* insertNode(Node*, int);
void bfsTraversal(Node*);
int treeHeight(Node*);

void traversePreOrder(Node*);
void traverseInOrder(Node*);
void traversePostOrder(Node*);

