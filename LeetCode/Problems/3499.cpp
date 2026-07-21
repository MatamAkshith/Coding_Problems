class Solution {
public:
  int maxActiveSectionsAfterTrade(string s) {
    int n = s.length();
    vector<pair<char, int>> runs;
    int totalOnes = 0, ones = 0;
    for (char c : s) {
      if (c == '1') {
        totalOnes++;
      }
      if (runs.empty() || runs.back().first != c) {
        runs.push_back({c, 1});
      } else {
        runs.back().second++;
      }
    }
    int m = runs.size();
    ones = totalOnes;
    for (int i = 0; i < m - 2; i++) {
      if (runs[i].first == '0' && runs[i + 1].first == '1' &&
          runs[i + 2].first == '0') {
        totalOnes = max(totalOnes, ones + runs[i].second + runs[i + 2].second);
      }
    }
    return totalOnes;
  }
};