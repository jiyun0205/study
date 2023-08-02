#include<stdio.h>

int main()
{
	int x = 2;
	int y = 2;
	int a[11][11] ={};

	for(int i=1; i<=10; i++)
	{
		for(int j=1; j<=10; j++)
		{
			scanf("%d ", &a[i][j]);
		}
	}	
	
	while(a[x][y] !=2)
	{
		a[x][y] = 9;

		if(a[x][y+1] != 1)
		{
			y++;
		}
		else
		{
			x++;
		}
	}

	a[x][y] = 9;

	for(int i=1; i<=10; i++)
	{
		for(int j=1; j<=10; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}