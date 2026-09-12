class Solution {
   public:
    int count = 0;
    void dfs(int node, vector<vector<int>>& adj, vector<bool>& vis,
             vector<int>& component) {
        vis[node] = true;
        component.push_back(node);
        for (int u : adj[node]) {
            if (!vis[u]) {
                dfs(u, adj, vis, component);
            }
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for (auto& e : edges) {
            int u = e[0];
            int v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> vis(n, false);
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                vector<int> component;
                dfs(i, adj, vis, component);
                bool comp = true;
                for (int node : component) {
                    if (adj[node].size() != component.size() - 1) {
                        comp = false;
                        break;
                    }
                }
                if (comp) {
                    count++;
                }
            }
        }
        return count;
    }
};