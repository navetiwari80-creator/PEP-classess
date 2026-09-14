// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;

// class Graph {
//     int V;
//     vector<vector<int>> adj;

// public:
//     // Constructor
//     Graph(int V) {
//         this->V = V;
//         adj.resize(V);
//     }

//     // Add edge (undirected)
//     void addEdge(int u, int v) {
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     // DFS function
//     void dfsUtil(int node, vector<bool> &visited) {
//         visited[node] = true;
//         cout << node << " ";

//         for (int neighbor : adj[node]) {
//             if (!visited[neighbor]) {
//                 dfsUtil(neighbor, visited);
//             }
//         }
//     }

//     void DFS(int start) {
//         vector<bool> visited(V, false);
//         cout << "DFS Traversal: ";
//         dfsUtil(start, visited);
//         cout << endl;
//     }

//     // BFS function
//     void BFS(int start) {
//         vector<bool> visited(V, false);
//         queue<int> q;

//         visited[start] = true;
//         q.push(start);

//         cout << "BFS Traversal: ";

//         while (!q.empty()) {
//             int node = q.front();
//             q.pop();

//             cout << node << " ";

//             for (int neighbor : adj[node]) {
//                 if (!visited[neighbor]) {
//                     visited[neighbor] = true;
//                     q.push(neighbor);
//                 }
//             }
//         }
//         cout << endl;
//     }

//     // Print graph
//     void printGraph() {
//         cout << "\nAdjacency List:\n";
//         for (int i = 0; i < V; i++) {
//             cout << i << " -> ";
//             for (int neighbor : adj[i]) {
//                 cout << neighbor << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     int V, E;
//     cout << "Enter number of vertices: ";
//     cin >> V;

//     cout << "Enter number of edges: ";
//     cin >> E;

//     Graph g(V);

//     cout << "Enter edges (u v):\n";
//     for (int i = 0; i < E; i++) {
//         int u, v;
//         cin >> u >> v;
//         g.addEdge(u, v);
//     }

//     g.printGraph();

//     int start;
//     cout << "\nEnter starting node: ";
//     cin >> start;

//     g.DFS(start);
//     g.BFS(start);

//     return 0;
// }





#include <iostream>
using namespace std;
int main(){
    //adjacency matrix (initialized to zero)
    int adj[10][10] = {0};
    int n, edges, src_vert, dest_vert;

    cout << " Enter number of vertices (<=10):";






    //display adjancency matrix
    cout << " Adjacency Matrix:\n";
    






    //DFS traversal
    int start, status[10] = {0}, stack[10];
    cout << "/n Enter the starting vertex:";
    cin >> start;

    int top = -1;
    stack[++top] = start;
    status[start] = 1;

}