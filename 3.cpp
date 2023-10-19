#include <iostream>
using namespace std;

int main()
{
    int n, i, j = 1;
    cin >> n;
    //n=25
    n *= n;
    //n=625
    i = n % 10;
    //i=5
    n /= 10;
    //i=5, n=62
    while (n!=0)
    {
        i = i * 10 + n % 10;
        //i=50+2=52
        //i=520+6=526
        n /= 10;
        //i=52, n=6
        //i=526, n=0
    }
    cout << i << endl;

}
