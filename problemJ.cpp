#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#include <unordered_map>
#define fi first
#define se second
#define all(a) a.begin(), a.end()
using son = long long;
const son N = 1e6+5;
son n, k, out=0;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL); std::cout.tie(NULL);
    freopen("inp.inp", "r", stdin);
    std::cin >> n >> k;
    std::vector<son> saver(n);
    std::unordered_map<long long, long long> g;
    for (son i = 0; i < n; i++) std::cin >> saver[i];
    for (son i = 0; i < n; i++){
        out+=g[saver[i]-k];
        g[saver[i]]++;
    }
    std::cout << out;
    return 0;
}
