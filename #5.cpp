#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x1, y1, x2, y2, x3, y3;
    cout << "x1 = ";
    cin >> x1;
    cout << "y1 = ";
    cin >> y1;
    cout << "x2 = ";
    cin >> x2;
    cout << "y2 = ";
    cin >> y2;
    cout << "x3 = ";
    cin >> x3;
    cout << "y3 = ";
    cin >> y3;
    float a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    float b = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    float c = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    float p2 = (a+b+c)/2;
    cout << "P = " << a+b+c << endl << "S = " << sqrt(p2*(p2-a)*(p2-b)*(p2-c));
}
