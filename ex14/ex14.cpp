#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int A, B, C;
    // cin >> A >> B >> C;

    // using max and min function
    // int tallest, smallest;
    // tallest = max(A, max(B, C));
    // smallest = min(A, min(B, C));

    // cout << tallest - smallest << endl;

    // using sort function;
    vector<int> height(3);

    for (int i = 0; i < 3; i++)
    {
        cin >> height.at(i);
    }

    sort(height.begin(), height.end());
    reverse(height.begin(), height.end());

    cout << height.at(0) - height.at(2) << endl;
}
