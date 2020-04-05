#include "E2.h"

void comparaN(int v[], int *l, int *num, int *ln, int *pn)
{
	for (int i = 0; i < *l; ++i)
	{
		if(v[i] > *num)
		{
			++*pn;
		}
		else
		{
			++*ln;
		}
	}
}

void divideV(int v[], int *l, int *num, int lnum[], int pnum[])
{
	int j=0, k=0;
	for (int i = 0; i < *l; ++i)
	{
		if(v[i]>*num)
		{
			pnum[j] = v[i];
			j++;
		}
		else
		{
			lnum[k] = v[i];
			k++;
		}
	}
}