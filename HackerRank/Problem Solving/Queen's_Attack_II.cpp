#include <bits/stdc++.h>

using namespace std;

string ltrim(const string&);
string rtrim(const string&);
vector<string> split(const string&);

/*
 * Complete the 'queensAttack' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER k
 *  3. INTEGER r_q
 *  4. INTEGER c_q
 *  5. 2D_INTEGER_ARRAY obstacles
 */

int queensAttack(int n, int k, int r_q, int c_q,
                 vector<vector<int>> obstacles) {
    int ans = 0;
    int dist[8] = {n - r_q,
                   r_q - 1,
                   n - c_q,
                   c_q - 1,
                   min(n - r_q, n - c_q),
                   min(n - r_q, c_q - 1),
                   min(r_q - 1, n - c_q),
                   min(r_q - 1, c_q - 1)};
    for (auto& o : obstacles) {
        int r = o[0], c = o[1];
        int dr = r - r_q;
        int dc = c - c_q;
        if (dc == 0) {
            if (dr > 0)
                dist[0] = min(dist[0], dr - 1);
            else
                dist[1] = min(dist[1], -dr - 1);
        } else if (dr == 0) {
            if (dc > 0)
                dist[2] = min(dist[2], dc - 1);
            else
                dist[3] = min(dist[3], -dc - 1);
        } else if (abs(dr) == abs(dc)) {
            if (dr > 0 && dc > 0)
                dist[4] = min(dist[4], dr - 1);
            else if (dr > 0 && dc < 0)
                dist[5] = min(dist[5], dr - 1);
            else if (dr < 0 && dc > 0)
                dist[6] = min(dist[6], -dr - 1);
            else
                dist[7] = min(dist[7], -dr - 1);
        }
    }
    for (int d : dist) ans += d;
    return ans;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input =
        split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int k = stoi(first_multiple_input[1]);

    string second_multiple_input_temp;
    getline(cin, second_multiple_input_temp);

    vector<string> second_multiple_input =
        split(rtrim(second_multiple_input_temp));

    int r_q = stoi(second_multiple_input[0]);

    int c_q = stoi(second_multiple_input[1]);

    vector<vector<int>> obstacles(k);

    for (int i = 0; i < k; i++) {
        obstacles[i].resize(2);

        string obstacles_row_temp_temp;
        getline(cin, obstacles_row_temp_temp);

        vector<string> obstacles_row_temp =
            split(rtrim(obstacles_row_temp_temp));

        for (int j = 0; j < 2; j++) {
            int obstacles_row_item = stoi(obstacles_row_temp[j]);

            obstacles[i][j] = obstacles_row_item;
        }
    }

    int result = queensAttack(n, k, r_q, c_q, obstacles);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string& str) {
    string s(str);

    s.erase(s.begin(),
            find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string& str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}

vector<string> split(const string& str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
