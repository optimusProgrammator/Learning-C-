#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int first, second;
    int gcf = 1;
    int min;
    //int gcf;
    
    
    cout << "";
    cin >> first >> second;
    
    if (first > second)
    {
        min = second;
    }
    else if (first < second)
    {
        min = first;
    }
    else
    {
        min = first;
    }
    
    for (int i = 1; i <= min; i++)
    {
        if (first % i == 0 && second % i == 0)
        {
            gcf = i;
        }
    }
    
    cout << gcf;
    
    
    return 0;
}
