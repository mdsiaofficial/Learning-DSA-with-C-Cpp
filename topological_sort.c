#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// Structure to represent a list (adjacency list)
struct List {
    int data;
    struct List* next;
};

// Structure to represent the graph
struct Graph {
    int V; // Number of vertices
    struct List* adj; // Array of linked lists
};

// Structure to represent a stack
struct Stack {
    int data;
    struct Stack* next;
};

// Create a new node for the stack
struct Stack* createStackNode(int data) {
    struct Stack* newNode = (struct Stack*)malloc(sizeof(struct Stack));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Create a new node for the adjacency list
struct List* createListNode(int data) {
    struct List* newNode = (struct List*)malloc(sizeof(struct List));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Create a new graph with V vertices
struct Graph* createGraph(int V) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->V = V;
    graph->adj = (struct List*)malloc(V * sizeof(struct List));
    for (int i = 0; i < V; ++i) {
        graph->adj[i].next = NULL;
    }
    return graph;
}

// Add an edge to the graph
void addEdge(struct Graph* graph, int v, int w) {
    struct List* newNode = createListNode(w);
    newNode->next = graph->adj[v].next;
    graph->adj[v].next = newNode;
}

// Recursive function for topological sorting
void topologicalSortUtil(struct Graph* graph, int v, bool visited[], struct Stack** stack) {
    visited[v] = true;
    struct List* current = graph->adj[v].next;
    while (current != NULL) {
        int adjacentVertex = current->data;
        if (!visited[adjacentVertex]) {
            topologicalSortUtil(graph, adjacentVertex, visited, stack);
        }
        current = current->next;
    }
    // Push the vertex onto the stack
    struct Stack* newNode = createStackNode(v);
    newNode->next = *stack;
    *stack = newNode;
}

// Perform topological sorting
void topologicalSort(struct Graph* graph) {
    struct Stack* stack = NULL;
    bool* visited = (bool*)malloc(graph->V * sizeof(bool));
    for (int i = 0; i < graph->V; ++i) {
        visited[i] = false;
    }
    for (int i = 0; i < graph->V; ++i) {
        if (!visited[i]) {
            topologicalSortUtil(graph, i, visited, &stack);
        }
    }
    // Print the topological order
    printf("Topological order: ");
    while (stack != NULL) {
        printf("%d ", stack->data);
        struct Stack* temp = stack;
        stack = stack->next;
        free(temp);
    }
}

int main() {
    int V = 6; // Number of vertices
    struct Graph* graph = createGraph(V);
    addEdge(graph, 5, 2);
    addEdge(graph, 5, 0);
    addEdge(graph, 4, 0);
    addEdge(graph, 4, 1);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 1);

    topologicalSort(graph);


    // Clean up memory (optional)
    // for (int i = 0; i < V; ++i) {
    //     struct List* current = graph->adj[i];
    //     while (current != NULL) {
    //         struct List* temp = current;
    //         current = current->next;
    //         free(temp);
    //     }
    // }
    // free(graph);

    return 0;
}
