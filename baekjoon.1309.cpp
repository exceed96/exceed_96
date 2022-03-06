/*https://www.acmicpc.net/problem/1309*/
// 2���� �迭�� �̿��� dp����
// ���ڵ��� ��Ÿ���� ���µ� ���ηε� ���ηε� �پ� ���� �ʰ� �ϴ� ����� ���̴�.
// �������� ���� ��Ÿ�� ��ġ�� ���� ����� ���� ������ �ȴ�.
// ���� �������� xo �� ������ �ڿ� �ü��ִ°� xx, ox�� �ü� �ְ� xx�� ������ �� �ü� �ְ�, ox�� ������ xx, xo�� �ü��ִ�.

#include <iostream>

using namespace std;

long long arr[100001][3];
int number = 9901;

int main(void)
{
	int N;
	cin >> N;

	arr[1][0] = 1;
	arr[1][1] = 1;
	arr[1][2] = 1;

	for (int i = 2; i <= N; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (j == 1)
			{
				arr[i][j] += (arr[i - 1][j - 1] + arr[i - 1][j + 1]) % number;
			}
			else if (j == 2)
			{
				arr[i][j] += (arr[i - 1][j - 1] + arr[i - 1][j - 2]) % number;
 			}
			else
			{
				arr[i][j] += (arr[i - 1][j] + arr[i - 1][j + 1] + arr[i - 1][j + 2]) % number;
			}
		}
	}

	cout << (arr[N][0] + arr[N][1] + arr[N][2]) % number << "\n";

	return 0;
}