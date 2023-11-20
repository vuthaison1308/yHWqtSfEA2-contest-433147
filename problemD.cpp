#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define fi first
#define se second
#define all(a) a.begin(), a.end()
using son = long long;
const son N = 1e6+5;
son saver[N];
son n, x;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL); std::cout.tie(NULL);
    freopen("inp.inp", "r", stdin);
    std::cin >> n;
    while (n--){
        std::cin>>x;
        if (saver[x]>0){
            std::cout << "NO";
            return 0;
        }
        else {
            saver[x]++;
        }
    }
    std::cout << "YES";
    return 0;
}
