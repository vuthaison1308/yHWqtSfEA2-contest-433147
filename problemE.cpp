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
son n, x;
std::vector<son> saver(N);
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL); std::cout.tie(NULL);
    freopen("inp.inp", "r", stdin);
    std::cin >> n;
    for (son i = 0; i < n; i++) std::cin >> x, saver[x]++;
    std::sort(all(saver), std::greater<long long>());

//    for (son i = 0 ; i < n ; i++) std::cout << saver[i];
    std::cout << saver[0] << " " << std::count(all(saver), saver[0]);
    return 0;
}
