
#include <iostream>
#define control 17
using namespace std;

int main()

{
    int temp;
    
    cout << "Input temperature in celcius:" << endl;
    cin >> temp;
    
    if (temp==control)
    cout << "temperature stable";
    
        else if (temp<=control)
            cout << "temperature too low, initiate heating system";
    
            else
            cout << "temperature too high, initiate cooling system";
   
   return 0;
}

    
    