#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
存储位置备忘
0
1 2
3 4 5
6 7 8 9

*/

	int N;

	void show(int * a,int num)
	{
		char * p = malloc((num+1)*sizeof(int));
		int t = 0;
		int flag = 0;
	
		for (int x = 0; x < 4;x++)
		{
			memset(p, 0, num);
			char ak[10] = { ' ' };
			for (t = 0; t < 3 - x;t++)
			{
				strcat(p, ak);
			}
			
			
			for (int y=0; y <= x; y++)
			{
				
				int x = a[flag];
				_itoa(x, p+t, 10);
				
				t++;
				flag++;
			}

			for (int v = 0; v < t; v++)
			{
				printf("%c ", p[v]);
				if (p[v]!=' ')
				{
					printf("%c ", ' ');
				}
				
			}
			printf("\n");
		}
		printf("\n\n\n");
	}

	int  near(int a, int b)
	{
		if (a + 1 == b || a == b + 1) 
			return 1;
		return 0;
	}

	void test(int *a,int num)
	{
		if (a[1] < a[0]) return;
		if (a[2] < a[0]) return;
		if (a[3] < a[1]) return;
		if (a[4] < a[1]) return;
		if (a[4] < a[2]) return;
		if (a[5] < a[2]) return;
		if (a[6] < a[3]) return;
		if (a[7] < a[3]) return;
		if (a[7] < a[4]) return;
		if (a[8] < a[4]) return;
		if (a[8] < a[5]) return;
		if (a[9] < a[5]) return;

		show(a,10);
		N++;
	}

	//// a: 待排元素
	//// k: 当前考虑的位置
	void f(int *a,int num, int k)
	{
		if (k == num-1){
			test(a,num);
			return;
		}

		for (int i = k; i < num; i++)
		{
			{ 
				int t = a[i]; 
				a[i] = a[k];
				a[k] = t; 
			}
			f(a, num,k + 1);
			{int t = a[i]; a[i] = a[k]; a[k] = t; }
		}
	}

    void main()
	{
		int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13 };

		f(a, 10,0);
	/*	System.out.println("N= " + N);*/
	}
