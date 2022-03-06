/*https://www.acmicpc.net/problem/9012*/
#include <iostream>

using namespace std;


int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int T;
	cin >> T;
	while (T--)
	{
		string a;
		cin >> a;
		if (a.length() % 2) // ������ Ȧ���̸� VPS�ϼ� ����.
		{
			cout << "NO" << "\n";
		}
		else
		{
			int count = 0;
			for (int i = 0; i < a.length() - 1; i++)
			{
				for (int j = i + 1; j < a.length(); j++)
				{
					if (a[j] == ')' && a[i] == '(') 
					{
						a[i] = '0'; // ¦�� ����� 0���� �ʱ�ȭ�ؼ� �ߺ� ����
						a[j] = '0';
						count++;
						break;
					}
				}
			}
			if (count * 2 == a.length()) // VPS�� count�� ���ڿ� a�� ���̿� �����̿��� �Ѵ�.
			{
				cout << "YES" << "\n";
			}
			else
			{
				cout << "NO" << "\n";
			}
		}

	}
	return 0;
}