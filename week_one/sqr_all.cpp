#include <iostream>
#include <vector>
#include <tuple>
#include <map>
#include <string>
#include <set>

using namespace std;

template<typename T>
T Sqr(const T& value);

template<typename First, typename Second>
pair<First, Second> Sqr(const pair<First, Second>& p);

template<typename T>
vector<T> Sqr(const vector<T>& v);

template<typename Key, typename Value>
map<Key, Value> Sqr(const map<Key, Value>& v);


template<typename T>
T Sqr(const T& value) {
    return value * value;
}


template<typename First, typename Second>
pair<First, Second> Sqr(const pair<First, Second>& p) {
    return {Sqr(p.first), Sqr(p.second)};
}

template<typename T>
vector<T> Sqr(const vector<T>& v) {
    vector<T> squares;
    squares.reserve(v.size());
    for (const auto& e: v) {
        squares.push_back(Sqr(e));
    }
    return squares;
}

template<typename Key, typename Value>
map<Key, Value> Sqr(const map<Key, Value>& v) {
    map<Key, Value> squares;
    for (const auto& e: v) {
        squares.insert({e.first, Sqr(e.second)});
    }
    return squares;
}

int main() {
    vector<int> v = {1, 2, 3};
    cout << "vector:";
    for (int x : Sqr(v)) {
        cout << ' ' << x;
    }
    cout << endl;

    map<int, pair<int, int>> map_of_pairs = {
            {4, {2, 2}},
            {7, {4, 3}}
    };
    cout << "map of pairs:" << endl;
    for (const auto& x : Sqr(map_of_pairs)) {
        cout << x.first << ' ' << x.second.first << ' ' << x.second.second << endl;
    }
}