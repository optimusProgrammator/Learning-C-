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
#include <iomanip>
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
    
    int num;
    char character = '*';
    
    cout << "";
    cin >> num;
    
    for (int index = 1; index <= num; index++)
    {
        cout << setw(num - index + 1) << setfill(' ');
        for (int index_two = 1; index_two <= index; index_two++)
        {
            cout << character << " ";
        }
        cout << endl;
    }
    return 0;
}
