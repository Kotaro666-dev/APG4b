#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<vector<int>> array(3, vector<int>(4));

    for (int i = 0; i < array.size(); i++)
    {
        for (int j = 0; j < array.at(0).size(); j++)
        {
            cin >> array.at(i).at(j);
        }
    }

    int count;

    count = 0;
    for (int i = 0; i < array.size(); i++)
    {
        for (int j = 0; j < array.at(0).size(); j++)
        {
            if (array.at(i).at(j) == 0)
                count++;
        }
    }
    cout << count << endl;
}

