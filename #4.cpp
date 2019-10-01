#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cout << "x1 = ";
    cin >> x1;
    cout << "y1 = ";
    cin >> y1;
    cout << "x2 = ";
    cin >> x2;
    cout << "y2 = ";
    cin >> y2;
    cout << "P = " << 2*(abs(x1-x2)+abs(y1-y2)) << endl << "S = " << abs(x1-x2)*abs(y1-y2);
}
