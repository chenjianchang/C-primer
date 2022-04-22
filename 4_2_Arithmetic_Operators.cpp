#include <iostream>
using namespace std;
int main()
{

    int i = 1024;
    int k = -i;
    bool b = true;
    bool b2 = -b;

    short short_value = 32767;
    short_value += 1;
    cout << "short_value:" << short_value << endl;

    cout << "21 % 6 = " << 21 % 6 << endl;
    cout << "21 % 7 = " << 21 % 7 << endl;
    cout << "-21 % -8 = " << -21 % -8 << endl;
    cout << "21 % -5 = " << 21 % -5 << endl;
    cout << "21 % 6 = " << 21 % 6 << endl;
    cout << "21 % 7 = " << 21 % 7 << endl;
    cout << "-21 % -8 = " << -21 % -8 << endl;
    cout << "21 % -5 = " << 21 % -5 << endl;

    

    return 0;

    
}