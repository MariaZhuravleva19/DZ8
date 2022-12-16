#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	ifstream file1("zadanie9(input).txt");
	int n, l, maxx = 0;

	file1 >> n;

	int* a = new int[n];

	for (int i = 0; i < n; i++)
	{
		file1 >> a[i];
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				l = j - i;
				break;
			}
		}
		if (l > maxx)
		{
			maxx = l;
		}
	}

	ofstream file2("zadanie9(output).txt");
	file2 << maxx << endl;

	file1.close();
	file2.close();
}