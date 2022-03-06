/*https://www.acmicpc.net/problem/10844*/
// ������ �迭�� dp����
// ������ ����ڸ��� ���̰� 1�� ��ܼ��� ���ؾ� �ϴ� �����̴�.
// ��Ģ�� ã�ƺ��� ���ڸ��� 0�� 9�� ���� ���ܷ� �����ؼ� Ǯ ���ִ�.
// �������ڸ����� 0 �̶�� �տ� �ü��ִ� ���� 1, ������ �ڸ����� 9��� �տ� �ü� �ִ� ���� 8 �̷���
// ���� 1������ �����ϰ� �ȴ�.
// 2 ~ 8 ������ -1 , + 1�� ���� �����Ҽ��ִ� ���� ��� x2��� �ϸ� x���� 1 or 3�� �ü��ִ�.

#include <iostream>

using namespace std;

long long arr[101][11];
int number = 1000000000;

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);

	long long N, count = 0;
	cin >> N;
	arr[1][0] = 0;

	for (int i = 1; i <= 10; i++)
	{
		arr[1][i] = 1;
	}
	for (int i = 2; i <= N; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (j == 0)
			{
				arr[i][j] = arr[i - 1][j + 1] % number;
			}
			else if (j == 9)
			{
				arr[i][j] = arr[i - 1][j - 1] % number;
			}
			else
			{
				arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j + 1]) % number;
			}
		}
	}
	for (int i = 0; i <= 9; i++)
	{
		count += arr[N][i];
	}
	cout << count % number << "\n";
	return 0;
}