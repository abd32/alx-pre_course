#include <iostream>

using namespace std;

int main()
{

    int input;
    int sum = 0;

    
    
    

    while (cin >> input && input >= 0)
    {

        sum += input;
    }

    cout << "SUM = " << sum;
}
