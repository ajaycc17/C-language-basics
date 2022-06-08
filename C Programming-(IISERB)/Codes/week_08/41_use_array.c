#include<stdio.h>
void main()
{
  int m,n,p,q,r;
  printf("Enter the rows and columns of the matrix A:");
  scanf("%d",&m);
  scanf("%d",&n);

   printf("Enter the columns of the matrix B:");
   scanf("%d",&p);
  int A[m][n], B[n][p];
  printf("\nNow Enter the values in matrix A\n");
  for(int i=0;i<m;++i)
    for(int j=0;j<n;++j)
      {
	printf("For row %d and column %d:",i+1,j+1);
	scanf("%d",&q);
	A[i][j]=q;
      }
   printf("\nNow Enter the values in matrix B\n");
    for(int i=0;i<n;++i)
    for(int j=0;j<p;++j)
      {
	printf("For row %d  and column %d:",i+1,j+1);
	scanf("%d",&r);
	B[i][j]=r;
      }

	if(m==n&&n==p)
{	
   printf("\nNow printing the sum of the matrices\n");
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			printf("%d\t",A[i][j]+B[i][j]);
		}
		printf("\n");
	}

printf("\nNow printing the difference of the matrices\n");
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			printf("%d\t",A[i][j]-B[i][j]);
		}
		printf("\n");
	}
}
	else
		printf("Unequal number of rows and columns cannot be added");

printf("\n*****For Multiplication*****\n");
int C[m][n];
if(m==n)
{
  printf("\nNow printing the product of the matrices\n");
	for(int i=0;i<m;++i)
		for(int j=0;j<n;++j)
		  {
		    C[i][j]=0;
			for(int k=0; k<n; ++k)
		{
			C[i][j]+=A[i][k]*B[k][j];
		}
		  }
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}	
	
}

}
