#include <iostream>

using namespace std;

int main()
{
    int n, n2;

    cin >> n >> n2;

    if(n2<n)swap(n, n2);

    for(int i=n; i<=n2; i++)cout << i << endl;

    return 0;
}