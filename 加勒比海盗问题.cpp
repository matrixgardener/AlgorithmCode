#include <algorithm>
#include <iostream>
#include <stdio.h>
const int N = 1000005;
using namespace std;
double w[N]; //古董的重量
int main()
{
    double c;
    int n;
    cout << "请输入古董重量c及古董个数n: " << endl;
    cin >> c >> n;
    cout << "请输入每个古董的重量，用空格分隔开： " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    sort(w, w + n);
    double weight = 0.0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        weight += w[i];
        if (weight <= c)
            ans++;
        else
            break;
    }
    cout << "能装入的古董最大数量为Ans= ";
    cout << ans << endl;
    return 0;
}