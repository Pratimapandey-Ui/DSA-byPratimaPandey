// void dfs(vector<int>& vis, vector<int> adj[], vector<int>& ls, int start) {
    
//     ls.push_back(start);
//     vis[start] = 1;

//     for (auto it : adj[start]) {
//         if (!vis[it]) {
//             dfs(vis, adj, ls, it);
//         }
//     }
// }

// vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    
//     vector<int> vis(V, 0);
//     vector<int> ls;

//     dfs(vis, adj, ls, 0); //mistake:passes adj[] instead adj

//     return ls;
// }