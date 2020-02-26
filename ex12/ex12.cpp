#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int sum = 1;
    for (int i = 1; i < S.size(); i++)
    {
        if (S.at(i) == '+')
        {
            sum += 1;
            // cout << sum << endl;
        }
        else if (S.at(i) == '-')
        {
            sum -= 1;
            // cout << sum << endl;
        }
    }
    cout << sum << endl;
}
