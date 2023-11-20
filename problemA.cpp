#include <iostream>
#include <unordered_map>
#define fi first
#define se second
#define all(a) a.begin(), a.end()
using son = long long;
const son N = 1e6+5;
son n;
son x;
son q;
std::unordered_map<son, son> saver;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL); std::cout.tie(NULL);
    freopen("inp.inp", "r", stdin);
    scanf("%lld", &n);
    for (son i = 0; i < n ; i++) {
        scanf("%lld", &x);
        saver[x]++;
    }
    scanf("%lld", &q);
    while(q--){
        scanf("%lld", &x);
        printf("%lld\n", saver[x]);
    }
    return 0;
}
