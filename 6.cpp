#include <iostream>
using namespace std;

int main()
{
    int n, i = 0, c = 0;
    cout << "Take a guess!" << endl;
    n = rand() % 100;
    do
    {
        cin >> i;
        c++;
        if (i > n)cout << "Go lower" << endl;
        else if (i<n) cout << "Go higher" << endl;

    } while (i != n);

    cout << "Congrats!You guessed! The number was "<< n<<".Amount of tries : " << c << endl;

}
