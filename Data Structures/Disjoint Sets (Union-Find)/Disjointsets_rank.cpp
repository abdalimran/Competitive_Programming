/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include<bits/stdc++.h>

using namespace std;

#define MAX 100000

int Parent[MAX];
int Rank[MAX];  //Union by rank, is to always attach the smaller tree to the root of the larger tree.

void Makeset(int n)
{
    for(int i=1; i<=n; i++)
    {
        Parent[i]=i;
        Rank[i]=0;
    }
}

int Find_Representative(int r)
{
    if(Parent[r]==r)
        return r;
    else
        return Parent[r]=Find_Representative(Parent[r]);
}

void Union(int a, int b)
{
    int u=Find_Representative(a);
    int v=Find_Representative(b);

    if(Rank[u]<Rank[v])
        Parent[u]=v;
    else
        Parent[v]=u;

    if(Rank[u]==Rank[v])
        Rank[u]++;
}

bool isConnected(int a, int b)
{
    if(Find_Representative(a)==Find_Representative(b))
        return true;
    else
        return false;
}

int main()
{
    std::ios_base::sync_with_stdio(false);

    int n=5;
    Makeset(n);

    Union(1,5);
    Union(1,4);
    Union(2,3);

    cout<<"Parent of 4: "<<Find_Representative(5)<<endl;
    cout<<"Parent of 3: "<<Find_Representative(3)<<endl;

    return 0;
}
