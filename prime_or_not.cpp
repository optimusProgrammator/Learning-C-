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
    bool is_prime = true;
    
    
    cout << "";
    cin >> n;
    
    if (n <= 1) {
        cout << "NOT PRIME" << endl; 
        return 0;
    }

    for (int index = 2; index <= sqrt(n); index++) {
        if (n % index == 0) {
            is_prime = false;
            break; 
        }
    }

    if (is_prime) {
        cout << "PRIME" << endl;
    } else {
        cout << "NOT PRIME" << endl;
    }

    return 0;
}
