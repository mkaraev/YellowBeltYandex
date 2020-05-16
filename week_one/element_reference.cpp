#include <iostream>
#include <vector>
#include <tuple>
#include <map>
#include <string>
#include <set>


using namespace std;

template<typename K, typename V>
V& GetRefStrict(map<K, V>& v, K key) {
    if (v.count(key) == 0) {
        throw runtime_error("Invalid key");
    }
    return v[key];
}
