#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int sum = 0;

    vector<int> score(N);
    for (int i = 0; i < N; i++)
    {
        cin >> score.at(i);
        sum += score.at(i);
    }

    int average = sum / N;
    for (int i = 0; i < N; i++)
    {
        if (average >= score.at(i))
            cout << average - score.at(i) << endl;
        else
            cout << score.at(i) - average << endl;
    }
}
