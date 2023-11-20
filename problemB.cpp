#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define fi first
#define se second
#define all(a) a.begin(), a.end()
using son = long long;
std::vector<std::string> a;
son n;
son saver[9]={0};
std::string x;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL); std::cout.tie(NULL);
    freopen("inp.inp", "r", stdin);
    std::cin >> n;
    while(n--){
        std::cin >> x;
        a.push_back(x);
    }
    saver[9]=0;
    for (son i = 0; i < a.size(); i++){
        for (son j = 0; j < a[i].length(); j++){
            if (a[i][j]=='0') saver[0]++;
            if (a[i][j]=='1') saver[1]++;
            if (a[i][j]=='2') saver[2]++;
            if (a[i][j]=='3') saver[3]++;
            if (a[i][j]=='4') saver[4]++;
            if (a[i][j]=='5') saver[5]++;
            if (a[i][j]=='6') saver[6]++;
            if (a[i][j]=='7') saver[7]++;
            if (a[i][j]=='8') saver[8]++;
            if (a[i][j]=='9') saver[9]++;
        }
    }
    for (son i = 0; i <= 9; i++) std::cout << saver[i] << " ";
    return 0;
}
