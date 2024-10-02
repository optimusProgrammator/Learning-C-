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
    string string_input;
    
    cout << "";
    cin >> n >> string_input;
    
    for (int i = 0; i < n; i++)
    {
        int number = string_input[i];
        char letter = number;
        
        char crypt = 'a' + ('z' - letter);
        
        cout << crypt;
    }
    
    
    
    
    return 0;
}
