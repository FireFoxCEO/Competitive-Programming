#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int n; 
    cin >> n;
    vector<int> number(n);
    for(int i = 0; i < n-1; i++)
    {cin >> number[i];}

    sort(number.begin(),number.end());
    int x =0;
    for(int i = 0; i < n; i++)
    {
        if(number[i] != i)
        {
            x = i;
            cout << x;
            break;
        }
    }
    if(x == 0)
    {
        cout << n;
    }
}
