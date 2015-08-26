/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include <bits/stdc++.h>

using namespace std;

void BuildZarray(string &P$T, int Zarray[])
{
    int L=0, R=0;
    int len = P$T.length();

    for(int i=1; i<len; i++)
    {
        if(i>R)
        {
            L=R=i;

            while(R<len && P$T[R-L] == P$T[R])
                R++;

            Zarray[i]=R-L;
            R--;
        }
        else
        {
            int k=i-L;

            if(Zarray[k] < R-i+1)
                 Zarray[i] = Zarray[k];
            else
            {
                L=i;

                while (R<len && P$T[R-L] == P$T[R])
                    R++;

                Zarray[i] = R-L;
                R--;
            }
        }
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

