#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, W;
    long int N;
    long long int sum = 0;
    vector<long int> num;

    cin >> T;
    while (T > 0)
    {

        cin >> W;
        while (W--)
        {
            cin >> N;
            sum += N;
            num.push_back(N);
        }
        T--;
        double mean = ((double)sum / num.size());
        // cout << num.size() << ":" << mean << "\n";
        auto it = find(num.begin(), num.end(), mean);
        if (it != num.end())
            cout << it - num.begin() + 1 << "\n";
        else
            cout << "Impossible\n";
        num.clear();
        sum = 0;
    }
}