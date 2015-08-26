/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include<bits/stdc++.h>

using namespace std;

#define MAX 100000

int Parent[MAX];

void Makeset(int n)
{
    Parent[n]=n;
}

int Find_Representative(int r)
{
    if(Parent[r]==r)
        return r;
    else
    {
        //Without Path Compression:
        return Find_Representative(Parent[r]);

        //With Path Compression:
        //return Parent[r]=Find_Representative(Parent[r]);
    }
}

void Union(int a, int b)
{
    int u=Find_Representative(a);
    int v=Find_Representative(b);

    if(u==v)
        cout<<"They are already friends!"<<endl;
    else
    {
        Parent[v]=u;
    }
}

void isConnected(int a, int b)
{
    if(Find_Representative(a)==Find_Representative(b))
        cout<<"Yes! They are connected!"<<endl;
    else
        cout<<"No! They are not connected!"<<endl;
}

int main()
{
    std::ios_base::sync_with_stdio(false);

    for(int i=1; i<=5; i++)
        Makeset(i);

    Union(1,5);
    Union(1,4);
    Union(2,3);

    cout<<"Parent of 5: "<<Find_Representative(5)<<endl;
    cout<<"Parent of 3: "<<Find_Representative(3)<<endl;

    isConnected(1,4);
    isConnected(2,5);

    return 0;
}
