#include <iostream>
using namespace std;

int main()
{
    int n, i, j = 1;
    cin >> n;
    n *= n;
    i = n % 10;
    n /= 10;
    while (n!=0)
    {
        i = i * 10 + n % 10;
        n /= 10;
    }
    cout << i << endl;

}
