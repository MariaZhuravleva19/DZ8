#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


int check(int a, int q) // проверка на симметричность в сс с основанием q
{
	int b = 0, c = a;
	do {
		b = b * q + c % q;
		c /= q;
	} while (c);
	return a == b;
}

int main()
{
	vector<int> a;
	int c = 0, n;

	ifstream file1("zadanie1(input).txt");
	file1 >> n;

	for (int i = 2; i <= 36; i++)
	{
		if (check(n, i) == 1)
		{
			c += 1;
			a.push_back(i);
		}
	}

	ofstream file2("zadanie1(output).txt");

	if (c == 1)
		file2 << "unique" << endl << a[0];

	else if (c == 0)
		file2 << "none" << endl;
	else
	{
		file2 << "multiple" << endl;
		for (int i = 0; i < a.size(); i++)
			file2 << a[i] << " ";
	}

	file1.close();
	file2.close();
}