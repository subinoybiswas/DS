#include <iostream>

using namespace std;

int main()
{
    int t, n, m, k, H;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m >> k >> H;
        int arr[n];
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            for (int l = 1; l < m; l++)
            {
                if (abs(H - arr[j]) == k * l)
                {
                    count += 1;
                    //cout<< arr[j]<<endl;
                    break;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}