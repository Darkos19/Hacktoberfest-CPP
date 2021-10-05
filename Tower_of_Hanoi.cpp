#include <bits/stdc++.h>
using namespace std;


//The recursive fucntion for the program

void toh(char start, char mid, char targ, int n)
{
    if(n != 1)
        toh(start, targ, mid, n-1);
        
    cout << "\nTake disc " << n << " from tower " << start << " to tower " << targ;

    if(n != 1)
        toh(mid, start, targ, n-1);
}


int main()
{
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;
    cout << "The Required solution is:\n";
    toh('A', 'B', 'C', n);
    return 0;
}