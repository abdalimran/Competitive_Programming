/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include <bits/stdc++.h>

using namespace std;

void BuildPValueOptimized(string& pattern, int PrefixValue[])
{
    int q=0;

    PrefixValue[0]=0;

    for(int i=1; i<pattern.length(); i++)
    {
        while(q>0 && pattern[i]!=pattern[q])
            q=PrefixValue[q-1];

        if(pattern[q]==pattern[i])
            q++;

        if(pattern[q]==pattern[i])
            PrefixValue[i]=PrefixValue[q];
        else
            PrefixValue[i]=q;
    }
}

int KMP(string &text, string &pattern)
{
    int q=0;
    int len=pattern.length();

    int *PrefixValue=new int[len];

    BuildPValueOptimized(pattern,PrefixValue);

    for(int i=0; i<text.length(); i++)
    {
        while(q>0 && text[i]!=pattern[q])
            q=PrefixValue[q-1];

        if(pattern[q]==text[i])
            q++;

        if(q==len)
        {
            q=PrefixValue[q];

            return (i-len+1);  //Returns matching index
            //For counting matching frequency: use a counter replacing return (i-len+1);
        }
    }
    return -1;  //Returns -1 if there is no match
}

int main()
{
    ios_base::sync_with_stdio(false);

    string s="adabdskfjhbskjdfksjdksjdkjsdksjdkjsaxabcdabdjakjskaxaksjabcdabdsdfs";
    string p="abcdabd";

    cout<<KMP(s,p);

    return 0;
}
