#include<stdio.h>
void
input (int a[3][3], int r, int c)
{
  printf ("Enter values of matrix:");
  for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
	{
	  scanf ("%d", &a[i][j]);
	}
    }
  return;
}


void
mul (int a[3][3], int b[3][3], int r1, int c1, int r2, int c2, int sum[3][3])
{
  for (int i = 0; i < r1; i++)
    {
      for (int j = 0; j < c2; j++)
	{
	  for (int k = 0; k < c1; k++)
	    {
	      sum[i][j] += a[i][k] * b[k][j];
	    }
	}
    }
  return;
}


void
print (int val[3][3], int r, int c)
{
  for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
	{
	  printf ("%d ", val[i][j]);
	}
      printf ("\n");
    }
  return;
}

int
main ()
{
  int a[3][3], b[3][3], c[3][3], sum[3][3];
  int r1, c1, r2, c2;

  printf ("enter r1:");
  scanf ("%d", &r1);
  printf ("enter c1:");
  scanf ("%d", &c1);
  printf ("enter r2:");
  scanf ("%d", &r2);
  printf ("enter c2:");
  scanf ("%d", &c2);

  if (c1 != r2)
    {
      printf ("enter a valid matrix");
    }
  else
    {
      input (a, r1, c1);
      input (b, r2, c2);

      for (int i = 0; i < r1; i++)
	{
	  for (int j = 0; j < c2; j++)
	    {
	      sum[i][j] = 0;
	    }
	}


      mul (a, b, r1, c1, r2, c2, sum);




      print (sum, r1, c2);

    }


}
