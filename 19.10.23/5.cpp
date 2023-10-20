#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cout << i * m + 1;
        for (int j = 2; j <=m; j++)
        {
            cout << " "<<i * m + j;
        }
        cout << endl;
   }

}
