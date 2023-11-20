#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define fi first
#define se second
#define all(a) a.begin(), a.end()
using son = long long;
son n, x, giu, cho;
const son N = 2005;
son saver[N];
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL); std::cout.tie(NULL);
    freopen("inp.inp", "r", stdin);
    std::cin>>n;
    while(n--){
        std::cin >> x;
        saver[x]++;
    }
    for (son i = 1; i <= 2000; i++){
        if (saver[i]>=3){
            while(saver[i]>=3){
                saver[i]-=3;
                giu++;
            }
            cho+=saver[i];
        } else cho+=saver[i];
    }
    std::cout << giu << " " << cho;
    return 0;
}
