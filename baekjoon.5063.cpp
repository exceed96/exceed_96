/*https://www.acmicpc.net/problem/5063*/
#include <iostream>

using namespace std;

int main(void)
{
	int T;
	cin >> T;
	while (T--)
	{
		long long r, e, c; // int�� ������ �Ѿ�� �����Ƿ� long long����
		cin >> r >> e >> c;

		if (r < e - c)
		{
			cout << "advertise" << "\n";
		}
		else
		{
			if (r == (e - c))
			{
				cout << "does not matter" << "\n";
			}
			else
			{
				cout << "do not advertise" << "\n";
			}
		}
	}
	return 0;
}