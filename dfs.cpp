#include <iostream>
#include <vector>
using namespace std;

// DFS function
void dfs(int node, vector<int> adj[], vector<bool> &visited) {
    visited[node] = true;
    cout << node << " ";

    for (auto it : adj[node]) {
        if (!visited[it]) {
            dfs(it, adj, visited);
        }
    }
}

int main() {
    int n, e;
    
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter number of edges: ";
    cin >> e;

    vector<int> adj[n];

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;

        // Undirected graph
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(n, false);

    cout << "DFS Traversal: ";
    dfs(0, adj, visited); // starting from node 0

    return 0;
}