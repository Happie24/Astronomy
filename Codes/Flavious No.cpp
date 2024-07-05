#include <bits/stdc++.h>
using namespace std;

bool Survives(int n)
{
    int i;

    for (int i = 2;; i++) {
        if (i > n)
            return true;
        if (n % i == 0)
            return false;

        n -= n / i;
    }
}

int main()
{
    int n = 17;
    if (Survives(n))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
