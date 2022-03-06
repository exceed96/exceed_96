/*https://www.acmicpc.net/problem/10610*/
// ���ڿ� ���� ����
// string���� ���ڿ��� ������ �������� ���� �� ���ڿ� �������� 0�� �����ÿ��� 30�� ����� �ƴϹǷ� -1 ��� �� ����
// 0�� �����ÿ��� ���ڿ� ���� �ϳ��ϳ��� �����༭ 3���� ������ �������� 0�Ͻ� 30�� ����̹Ƿ�
// a�� ������ش�.
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	long long sum = 0;
	string a;
	cin >> a;
	sort(a.begin(), a.end(), greater<>());

	if (a[a.size() - 1] != '0')
	{
		cout << -1 << "\n";
		return 0;
	}
	else
	{
		for (int i = 0; i < a.size() - 1; i++)
		{
			sum += int(a[i]);
		}
		if (sum % 3 == 0)
		{
			cout << a << "\n";
		}
		else
		{
			cout << -1 << "\n";
		}
	}
	return 0;
}