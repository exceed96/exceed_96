/*https://www.acmicpc.net/problem/9251*/
// ������ �迭�� �̿��� dp����
// ������ �迭�� �̿��ؾ� �ϴ� �����̴�. ǥ�� �׸��鼭 Ȯ���غ��� ��Ģ�� ���δ�.
// ���� a�� ���ڿ� ù��° ���ҿ� b ��ü�� ���غ���. 
// ���� ������ ���� �밢�� ���� �ִ� ������ + 1�� ���ְ� ���� �ٸ���  i - 1 Ȥ�� j - 1 ���߿� ū ���� �����´�.

#include <iostream>

using namespace std;

int arr[1001][1001];

int main(void)
{
	string a, b;

	cin >> a >> b;

	int size_a = a.size();
	int size_b = b.size();

	for (int i = 1; i <= size_a; i++)
	{
		for (int j = 1; j <= size_b; j++)
		{
			if (a[i - 1] == b[j - 1])
			{
				arr[i][j] = arr[i - 1][j - 1] + 1;
			}
			else
			{
				arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
			}
		}
	}

	cout << arr[size_a][size_b] << "\n";
	return 0;
}