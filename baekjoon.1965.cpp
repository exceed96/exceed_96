/*https://www.acmicpc.net/problem/1965*/
// BOJ 11055�� �Ȱ��� ������  DP����
// ��� ������ �־������� �� �������� ���� �� �����ϴ� �κм����� ���ϸ� �ȴ�.
// 11055�� Ǯ�̰� �Ȱ���.
#include <iostream>

using namespace std;

int arr[1001];
int arr2[1001];

int main(void)
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		arr2[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] > arr[j])
			{
				arr2[i] = max(arr2[i], arr2[j] + 1);
			}
		}
	}

	int result = 0;

	for (int i = 0; i < n; i++)
	{
		result = max(result, arr2[i]);
	}

	cout << result << "\n";
	return 0;
}