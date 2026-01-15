
#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct Node {
    int x;
    struct Node* next;
} Node ;

typedef struct Graph {
    int y;
    Node** list;
    int a;
} Graph;

 Node* createNode(int v) {
    Node * newNode = new Node;
    newNode->x = v;
    newNode->next = NULL;
    return newNode;
}

Graph* createGraph(int y, int a) {
    Graph * graph = new Graph;

    graph->y = y;
    graph->a = a;

    
    graph->list = new Node*[y];

    
    for (int i = 0; i < y; i++) {
        graph->list[i] = NULL;
    }

    return graph;
}

void addEdge(Graph* graph, int s, int d) {
    
    Node* newNode = createNode(d);
    newNode->next = graph->list[s];
    graph->list[s] = newNode;

    if (!graph->a) {
        newNode = createNode(s);
        newNode->next = graph->list[d];
        graph->list[d] = newNode;
    }
}

void printGraph(Graph* graph) {
    cout << "\n";
    for (int v = 0; v < graph->y; v++) { 
        Node* t = graph->list[v];
        cout << v << " ---> ";
        while (t) {
            cout << t->x << " -> ";
            t = t->next;
        }
        cout << "NULL\n";
    }
}


int main() {
   
    struct Graph* dothi = createGraph(4, 1);

    
    addEdge(dothi, 0, 1);
    addEdge(dothi, 0, 2);
    addEdge(dothi, 1, 2);
    addEdge(dothi, 2, 3);
    addEdge(dothi, 3, 4);
    addEdge(dothi, 4, 2);

    printGraph(dothi);

    return 0;
}