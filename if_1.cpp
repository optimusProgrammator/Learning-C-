#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int number;
    int answer = 0;
    
    cout << "";
    cin >> number;
    
    if (number >= 0)
    {
        answer = number;
        cout << "The absolute value of " << number << " is " << answer << "." << endl;
    }
    else if (number < 0)
    {
        answer = (number * -1);
        cout << "The absolute value of " << number << " is " << answer << "." << endl;
    }
    return 0;
}
