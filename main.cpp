#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    bool permut=false;
    int z;
    int res;
    for (int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector <int> v(n);
        int a;
        for(int j=1;j<=n;j++)
        {
            cin>>v[j];
        }
        int j=1;
           if(v[j+1] != v[j] && v[j+1] != v[j+2])
            {
                do
                {
                    if(v[j+2]<v[j+1])
                    {
                      z=v[j+2];
                      v[j+2]=v[j+1];
                      v[j+1]=z;
                      permut=true;
                    }
                    else
                    {
                       permut=false;
                    }
                    j++;
                }while((permut=true) || (j==n-2));
                for(int k=1;k<n;k++)
                {
                    if(v[k]<v[k+1])
                        res=1;
                    else
                        res=0;
                        break;
                }
                cout<<res;

            }
            else
            {
                cout<<"NO";
            }



    }
    return 0;
}
