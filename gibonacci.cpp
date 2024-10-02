#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    
    int n;
    int i;
    
    cout << "";
    cin >> n;
    
    int g0 = 42; 
    int g1 = 5;  
    
    if (n == 0) {
        cout << g0 << endl;
        return 0;
    }
    if (n == 1) {
        cout << g1 << endl;
        return 0;
    }
    
    int g_n;
    
    for (i = 2; i <= n; i++) {
        g_n = g1 + g0 + 2; 
        g0 = g1; 
        g1 = g_n; 
    }

    cout << g_n << endl;
    return 0;
}
