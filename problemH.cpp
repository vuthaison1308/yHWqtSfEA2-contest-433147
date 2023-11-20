#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
#define fi first
#define se second
#define all(a) a.begin(), a.end()
using son = long long;
const son N = 1e6+5;
son n, t, x, d;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL); std::cout.tie(NULL);
    freopen("inp.inp", "r", stdin);
    std::cin >> t;
    while(t--){
        son s1=0, s2=0;
        std::vector<son> members;
        std::cin >> n;
        while(n--){
            std::cin >> x;
            members.push_back(x);
        }
        std::sort(all(members), std::greater<long long>());
        for (son i = 1; i < members.size(); i++){
            if (members[i]==members[i-1]){
                if (s1==0) s1=members[i];
                else s2=members[i];
                i++;
            }
            if (s1!=0 && s2!=0){
                break;
            }
        }
        if (s1==0 || s2 ==0) std::cout << -1 << std::endl;
        else std::cout << s1*s2 << std::endl;
    }
    return 0;
}
