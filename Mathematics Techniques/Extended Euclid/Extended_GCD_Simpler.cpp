/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include<bits/stdc++.h>

using namespace std;

int extendedEuclid(int a, int b, int &x, int &y)
{
	if(a==0)
	{
		x=0;y=1;
		return b;
	}

	int x1,y1;
	int d=extendedEuclid(b%a,a,x1,y1);

	x=y1-(b/a)*x1;
	y=x1;

	return d;
}

int main()
{
    ios_base::sync_with_stdio(false);

    return 0;
}
