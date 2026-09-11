class Solution {
   public:
    int count = 0;
    void dfs(int node, vector<vector<int>>& adj, vector<bool>& vis) {
        vis[node] = true;
        for (int u : adj[node]) {
            if (!vis[u]) {
                dfs(u, adj, vis);
            }
        }
    }
    int countConnected(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(V);
        for (auto& e : edges) {
            int u = e[0];
            int v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> vis(V, false);
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                count++;
                dfs(i, adj, vis);
            }
        }
        return count;
    }
};