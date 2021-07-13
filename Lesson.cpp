#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    cout << "Please enter int value: ";
    cin >> x;
   
    if ((x >= 0 && x <= 100) || (x >= 500 && x <= 1000)) {
        cout << x << " True" << endl;
    }
    else {
        cout << x << " False" << endl;
    }


    return 0;
}