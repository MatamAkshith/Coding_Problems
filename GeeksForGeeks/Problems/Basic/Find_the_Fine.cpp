class Solution {
public:
  long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
    // code here
    int n = car.size();
    long long tfine = 0;
    if (date % 2 == 0) {
      for (int i = 0; i < n; i++) {
        if (car[i] % 2 != 0) {
          tfine += fine[i];
        }
      }
    } else {
      for (int i = 0; i < n; i++) {
        if (car[i] % 2 == 0) {
          tfine += fine[i];
        }
      }
    }
    return tfine;
  }
};