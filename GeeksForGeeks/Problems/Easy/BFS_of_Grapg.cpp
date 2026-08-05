class Solution {
   public:
    vector<int> bfs(vector<vector<int>>& adj) {
        // code here
        int n = adj.size();
        vector<int> res;
        vector<bool> vis(n, false);
        queue<int> q;
        q.push(0);
        vis[0] = true;
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            res.push_back(u);
            for (int v : adj[u]) {
                if (!vis[v]) {
                    q.push(v);
                    vis[v] = true;
                }
            }
        }
        return res;
    }
};