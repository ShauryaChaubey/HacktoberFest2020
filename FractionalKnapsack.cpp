#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    int n;
    double W,i,j=0;
    cin >> n >> W;
    vector<double>v(n);
    vector<double>w(n);
    vector<double>c(n);
    for(i=0;i<n;i++)
    {
        cin >> v[i];
        cin >> w[i];
        c[i] = v[i]/w[i];
    }
    sort(c.begin(), c.end(), greater<double>());
    double value=0.0000,k=0.0000;
    while(W != 0 && j<n)
    {
        for(i=0;i<n;i++)
        {
            if(c[j] == v[i]/w[i])
            {
                k = min(w[i],W);
                value += k*(v[i]/w[i]);
                W = W-k;
            }
        }
        j++;
    }
    cout << fixed << setprecision(4) << value;
    
    
}