#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string Power(string s)
{
	string ans;
	int c = 0;
	for (int i = s.size() - 1; i >= 0; --i)
	{
		int t = (int(s[i]) - 48) * 2 + c;
		c = 0;
		if (t >= 10)
			c = 1;
		ans.insert(0, 1, char(t % 10 + 48));
	}
	if (c)
		ans.insert(0, 1, char(c + 48));
	return ans;
}

int main()
{
	ifstream file1("zadanie3(input).txt");
	ofstream file2("zadanie3(output).txt");

	int n;
	file1 >> n;

	string s = "2";

	for (int i = 1; i < n; ++i)
		s = Power(s);

	file2 << s;

	file1.close();
	file2.close();

}