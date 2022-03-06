/*https://www.acmicpc.net/problem/1932*/
// ������ �迭�� �̿��� dp����
// �������� ���ϰ��� �ϴ°��� �� ��θ��� ���� Ȥ�� ������ �밢������ ������ �� ���� ���� ū�� ����ϴ� ���̴�.
// ������ �迭�� �����Ͽ��� arr���� �Է��� arr2���� ��θ����� ���� �� �ִ� ���� �־��ش�.
// �ٸ� ������ ���� �־��ִ� ���� �ƴ϶� �� ���ܰ迡�� �ִ밪�� ���� �����ͼ� �����ش�.(�׷��� �� �Ʒ� ��η� ������ �ִ��� ���� ���´�.)
// �� ���� �� �Ʒ� �ٿ��� �ִ밪�� ã�Ƴ��� ������ָ� �ȴ�.

#include <iostream>

using namespace std;

int arr[501][501];
int arr2[501][501];

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int n, result = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cin >> arr[i][j];
		}
	}

	arr2[1][1] = arr[1][1];

	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			arr2[i][j] = max(arr2[i - 1][j], arr2[i - 1][j - 1]) + arr[i][j];
		}
	}

	for (int i = 1; i <= n; i++)
	{
		result = max(result, arr2[n][i]);
	}

	cout << result << "\n";
	return 0;
}