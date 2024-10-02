#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/***
Name : Justin Marcel Camonayan
Date: September 17, 2024
Purpose: You are given a point (x,y) and a rectangle that is defined by it's top left corner (rx,ry), width w and the height h. Find whether the point lies inside the rectangle.
*/

int main() {
    int x, y, rx, ry, width, height;
    
    // Take input 
    cout << "";
    cin >> x;
    
    cout << "";
    cin >> y;
    
    cout << "";
    cin >> rx >> ry >> width >> height;
    
    // figure out the bottom of the rectangle, taking note where would the coordinates end
    int left = rx;
    int right = rx + width;
    int top = ry;
    int bottom = ry - height;
    
    // Check if the point (x, y) is inside the rectangle
    if (x >= left && x <= right && y <= top && y >= bottom) {
        // Check if the point is on the rectangle
        if (((x == left || x == right) && (y <= top && y >= bottom)) || ((y == top || y == bottom) && (x >= left && x <= right))) {
            cout << "On the Rectangle" << endl;
        } else {
            cout << "Inside" << endl;
        }
    } else {
        cout << "Outside" << endl;
    }
    
    

    
    
    return 0;
}
