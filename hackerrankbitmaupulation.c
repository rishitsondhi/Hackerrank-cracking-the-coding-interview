#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],i,n;
	printf ("enter the length of array");
	scanf ("%d",&n);
	printf ("enter the elements in array");
	for (i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
	}
	printf ("\n");
	for (i=0;i<n;i++)
	{
		printf ("%d",a[i]);
	}
	printf ("\n");
	int j;
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<=n;j++)
		{
			if (a[i]==a[j])
			{
				a[i]=0;
				a[j]=0;
			}
			else
			{
				continue;
			}
		}
	}
	
	for (i=0;i<n;i++)
	{
		if (a[i]!=0)
		{
			printf ("%d",a[i]);
		}
	}
}
