#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    long long r;
    cin >> n >> r;
    unsigned long long total_weight = 0;
    for (int i = 0; i < n; i++) {
        long long w, h, d;
        cin >> w >> h >> d;
        total_weight += r * w * h * d;
    }
    cout << total_weight;
}