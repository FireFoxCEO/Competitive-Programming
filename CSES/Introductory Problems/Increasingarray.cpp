#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
    cin >> n;
    vector<int> number(n);
    long long x = 0;
    for(int i =0; i < n; i++)
    {
        cin >> number[i];
    }
    for(int i = 0; i< n-1; i++)
    {
        if(number[i] > number[i+1])
        {
            x += number[i] - number[i+1];
            number[i+1] += number[i] - number[i+1];
        }
    }
    cout << x;
}
