#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long sum = 0;
    vector<int> temperatures(n);
    for (int& t: temperatures) {
        cin >> t;
        sum += t;
    }
    vector<int> answer;
    for(int i = 0; i < (int)temperatures.size(); i++) {
        if (temperatures[i] > sum / n) {
            answer.push_back(i);
        }
    }
    cout << answer.size() << endl;
    for(int& i: answer) {
        cout << i << " ";
    }
    return 0;
}