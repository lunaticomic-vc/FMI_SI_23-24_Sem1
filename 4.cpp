#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = n;
    n--;
    while (n>0)
    {
        i *= n;
        n--;
    }
    cout << i << endl;

}
