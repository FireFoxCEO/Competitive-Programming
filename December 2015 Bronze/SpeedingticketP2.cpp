#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("speeding.in","r",stdin);
    freopen("speeding.out","w",stdout);
    int x, y;
    cin >> x >> y;
    int input = 0;
    int maxam = 0;
    vector<vector<int>> speed(x,vector<int>(2));
    vector<vector<int>> acutal(y, vector<int>(2));
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cin >> input;
            speed[i][j] = input;
        }
    }
    for(int i = 0; i < y; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cin >> input;
            acutal[i][j] = input;
        }
    }
    int a {0};
    int c {0};
    while(a<x && c<y)
    {
        if (speed[a][0] == acutal[c][0]) 
        {
            maxam = max(maxam, acutal[c][1] - speed[a][1]);
            a++;
            c++;
        }
        else if(speed[a][0] < acutal[c][0])
        {
            maxam = max(maxam, acutal[c][1]-speed[a][1]);
            acutal[c][0] = acutal[c][0] - speed[a][0];
            a++;
        }
        else if(speed[a][0]>acutal[c][0])
        {
            maxam = max(maxam,acutal[c][1] - speed[a][1]);
            speed[a][0] = speed[a][0]-acutal[c][0];
            c++;
        }
    }
    cout << maxam;
}
