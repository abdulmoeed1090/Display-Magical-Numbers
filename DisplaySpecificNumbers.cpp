// program to display same digits number from 111-999
#include <iostream>
using namespace std;

// main function
int main()
{

    // variables
    int first, mid, last;
    // using for-loop
    for (int i = 111; i <= 999; i++)
    {

        last = (i % 10);

        mid = (i / 10) % 10;

        first = i / 100;
        // using if-else
        if (first == mid && mid == last)
        {
            cout << i << endl;
        }
    }

    return 0;
}