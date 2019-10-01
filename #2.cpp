#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int a, b, c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << "ac = " << abs(a-c) << endl << "bc = " << abs(b-c) << endl << "ac+bc = " << abs(a-c)+abs(b-c);
}
