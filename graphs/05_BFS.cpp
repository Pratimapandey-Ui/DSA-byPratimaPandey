#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[]) {
    
    vector<int> vis(V, 0);
    
    vis[0] = 1;
    
    queue<int> q;
    q.push(0);
    
    vector<int> bfs;
    
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        
        bfs.push_back(node);
        
        for (auto it : adj[node]) { //adj is not itself a vector<int>.It is an array of vector<int>.
            if (!vis[it]) {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    
    return bfs;
}