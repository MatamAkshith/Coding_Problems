class Solution {
   public:
    vector<int> res;
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n = adj.size();
        vector<bool> vis(n, false);
        solve(0, adj, vis);
        return res;
    }
    void solve(int node, vector<vector<int>>& adj, vector<bool>& vis) {
        vis[node] = true;
        res.push_back(node);
        for (int u : adj[node]) {
            if (!vis[u]) {
                solve(u, adj, vis);
            }
        }
    }
};