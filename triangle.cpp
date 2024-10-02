#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    float a, b, c;
    
    cout << "";
    cin >> a >> b >> c;
    
    float theorem = (a * a) + (b * b);
    float root = sqrt(theorem);
    
    if (root == c)
    {
        cout << "Right Triangle";
    }
    
    else if (root > c)
    {
        cout << "Acute Triangle";
    }
    
    else
    {
        cout << "Obtuse Triangle";
    }
    return 0;
}
