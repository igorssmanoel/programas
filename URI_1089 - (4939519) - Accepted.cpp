#include <bits/stdc++.h>

int N, cont, vet[10000];

int main ()
{
  scanf ("%d", &N);
  while (N != 0)
    {
      cont = 0;
      for (int i=0; i<N; i++)
	{
	  scanf ("%d", &vet[i]);
	}
      for (int i=1; i<N-1; i++)
	{
	  if ((vet[i] > vet[i+1] && vet[i] > vet[i-1]) || (vet[i] < vet[i+1]) && (vet[i] < vet[i-1]))
	    cont = cont+1;
	}
      
      if ((vet[0] > vet[1] && vet[0] > vet[N-1]) || (vet[0] < vet[1] && vet[0] < vet[N-1]))
	{
	  cont = cont+1;
	}
      if ((vet[N-1] > vet[N-2] && vet[N-1] > vet[0]) || (vet[N-1] < vet[N-2] && vet[N-1] < vet[0]))
	{
	  cont = cont+1;
	} 
	printf ("%d\n", cont);
	scanf ("%d", &N);
    }
}