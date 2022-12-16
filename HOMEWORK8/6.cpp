#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


int main()
{
	int n, c = 0;
	vector <int> a;
	ifstream file1;
	file1.open("zadanie6(input).txt");
	file1 >> n;

	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (i % j == 0)
				c += 1;
		}
		if (c == 2)
			a.push_back(i);
		c = 0;
	}

	int min1 = n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i] + a[j] == n)
			{
				min1 = min(a[i], min1);
			}
		}
	}

	ofstream file2;
	file2.open("zadanie6(output).txt");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i] == min1 && a[i] + a[j] == n)
			{
				file2 << a[i] << " " << a[j];
			}

		}
	}

	file1.close();
	file2.close();
}