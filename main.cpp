#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> parent;
    unordered_map<int, int> hashmap;
    for (int i = 0; i < 26; i++)
    {
        parent.push_back(i);
        cout << parent[i] << endl;
    }

    for (int i = 0; i < 26; i++)
    {
        hashmap[i]++;
    }
}