#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;

// Structure to represent a vertex in the graph
struct Vertex {
    char label; // The label/weight of the vertex
    vector<int> outgoingEdges; // Indices of outgoing edges from this vertex
};

// Structure to represent an edge in the graph
struct Edge {
    int targetVertexIndex; // Index of the target vertex
};

// Function to check if the weight/label from the graph matches the seeking weight/label
bool isMatch(char seekingLabel, char graphLabel) {
    return seekingLabel == graphLabel;
}

// Recursive function to traverse the graph based on a pattern
bool traverseGraph(const vector<Vertex>& graph, const string& pattern, int currentVertexIndex, int patternIndex) {
    // Base case: If we reach the end of the pattern, return true
    if (patternIndex == pattern.length()) {
        return true;
    }

    // If the patternIndex is not the last index, but the currentVertexIndex is the last vertex,
    // it means we cannot go backward as per the instructions. So, return false.
    if (currentVertexIndex == graph.size() - 1) {
        return false;
    }

    // Get the current vertex
    const Vertex& currentVertex = graph[currentVertexIndex];

    // Check if the weight/label from the graph matches the seeking weight/label for the current patternIndex
    if (isMatch(pattern[patternIndex], currentVertex.label)) {
        // For each outgoing edge from the current vertex
        for (const Edge& edge : currentVertex.outgoingEdges) {
            // Recursively traverse the graph starting from the target vertex of the edge
            if (traverseGraph(graph, pattern, edge.targetVertexIndex, patternIndex + 1)) {
                return true; // If the traversal is successful, return true
            }
        }
    }

    return false; // If no match or traversal is successful, return false
}

// Function to build the directed acyclic graph (DAG) based on the given instructions
vector<Vertex> buildGraph() {
    vector<Vertex> graph;

    // Create vertices for each letter in the pattern
    string pattern = "abc";
    for (char letter : pattern) {
        graph.push_back({ letter, {} });
    }

    // Create an edge from the start vertex to the first vertex in the pattern
    graph[0].outgoingEdges.push_back({ 1 });

    // Create edges between the vertices based on the given instructions
    graph[1].outgoingEdges.push_back({ 2 });
    graph[2].outgoingEdges.push_back({ 0 });

    return graph;
}

int main() {
    vector<Vertex> graph = buildGraph();
    string pattern = "abc";

    // Start the traversal from the first vertex in the graph (index 0)
    if (traverseGraph(graph, pattern, 0, 0)) {
        cout << "Pattern matched!" << endl;
    } else {
        cout << "Pattern not matched!" << endl;
    }

    return 0;
}