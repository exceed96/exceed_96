/*https://www.acmicpc.net/problem/11721*/
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string a;
	cin >> a;
	for (int i = 0; i < a.length(); i++)
	{
		if (i % 10 == 0 && i != 0) //���ڿ��� �ε����� 0�� �ƴϰ� 10���� �������� \n
		{
			cout << "\n";
		}
		cout << a[i];
	}
	return 0;
}