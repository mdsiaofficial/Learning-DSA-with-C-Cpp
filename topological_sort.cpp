#include <iostream>
#include <vector>
#include <stack>

// Structure to represent a list (adjacency list)
struct List {
    int data;
    List* next;
};

// Structure to represent the graph
struct Graph {
    int V; // Number of vertices
    std::vector<List*> adj; // Array of linked lists
};

// Create a new node for the adjacency list
List* createListNode(int data) {
    List* newNode = new List;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Create a new graph with V vertices
Graph* createGraph(int V) {
    Graph* graph = new Graph;
    graph->V = V;
    graph->adj.resize(V, nullptr);
    return graph;
}

// Add an edge to the graph
void addEdge(Graph* graph, int v, int w) {
    List* newNode = createListNode(w);
    newNode->next = graph->adj[v];
    graph->adj[v] = newNode;
}

// Recursive function for topological sorting
void topologicalSortUtil(Graph* graph, int v, std::vector<bool>& visited, std::stack<int>& stack) {
    visited[v] = true;
    List* current = graph->adj[v];
    while (current != nullptr) {
        int adjacentVertex = current->data;
        if (!visited[adjacentVertex]) {
            topologicalSortUtil(graph, adjacentVertex, visited, stack);
        }
        current = current->next;
    }
    // Push the vertex onto the stack
    stack.push(v);
}

// Perform topological sorting
void topologicalSort(Graph* graph) {
    std::stack<int> stack;
    std::vector<bool> visited(graph->V, false);
    for (int i = 0; i < graph->V; ++i) {
        if (!visited[i]) {
            topologicalSortUtil(graph, i, visited, stack);
        }
    }
    // Print the topological order
    std::cout << "Topological order: ";
    while (!stack.empty()) {
        std::cout << stack.top() << " ";
        stack.pop();
    }
    std::cout << std::endl;
}

int main() {
    int V = 6; // Number of vertices
    Graph* graph = createGraph(V);
    addEdge(graph, 5, 2);
    addEdge(graph, 5, 0);
    addEdge(graph, 4, 0);
    addEdge(graph, 4, 1);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 1);

    topologicalSort(graph);

    // Clean up memory (optional)
    for (int i = 0; i < V; ++i) {
        List* current = graph->adj[i];
        while (current != nullptr) {
            List* temp = current;
            current = current->next;
            delete temp;
        }
    }
    delete graph;

    return 0;
}
