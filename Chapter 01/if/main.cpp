// If.cbp
#include <iostream>

using namespace std;

int main()
{
    int i;
    cout << "Please enter an integer value: ";
    cin >> i;

    if(i > 100)
        cout << "Greater than 100.";
    else
        cout << "equals or less than 100.";

    cout << endl;
    return 0;    
}