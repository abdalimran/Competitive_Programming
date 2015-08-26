/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include <bits/stdc++.h>

using namespace std;

void BuildZarray(string &P$T, int za[])
{
    for(int i=1,l=0,r=0, _new; i<P$T.size(); i++)
    {
        if(i <= r) za[i]=min (r-i+1, za[i-l]);
        while((_new=i+za[i]) < P$T.size() && P$T[za[i]] == P$T[_new]) za[i]++;
        _new--;
        if(_new > r)l=i,r=_new;
    }
}

int ZSearch(string &text, string &pattern)
{
    string P$T = pattern+"$"+text;
    int len=P$T.length();

    int plen=pattern.length();

    int *Zarray=new int[len];
    BuildZarray(P$T, Zarray);

    for(int i=0; i<len; i++)
    {
        if (Zarray[i] == plen)
            return (i-plen-1); //Returns matching index
            //For counting matching frequency: use a counter replacing return (i-plen-1);
    }
    return -1;  //Returns -1 if there is no match
}


int main()
{
    ios_base::sync_with_stdio(false);

    string s="adabdskfjhbskjdfksjdksjdkjsdksjdkjsaxabcdabdjakjskaxaksjsdfsabcdabddfsdfabcdabd";
    string p="abcdabd";

    cout<<ZSearch(s,p)<<" ";

    return 0;
}


