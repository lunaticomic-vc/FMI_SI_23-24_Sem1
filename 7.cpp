#include <iostream>
using namespace std;

int main()
{
    int n, p = 0, k, p1 = 0;
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        p += i;
    }
    for (int i = 1; i < n; i++)
    {
        cin >> k;
        p1 += k;
    }
    cout << p - p1;
}
