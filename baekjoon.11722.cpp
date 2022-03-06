/*https://www.acmicpc.net/problem/11722*/
// BOJ 11055�� ���� ���� DP����
// 11055������ ���� �� �����ϴ� �κ� �����̿����� �� ���������� ���� �� �����ϴ� �κ� �����̴�.
// �ᱹ ���� �� �����ϴ� �κм����̶� ���� �迭�� �Ųٷ� �������� ���� �� �����ϴ� �κм����� ã����� ���̴�.
// �迭�� �������� ���ش����� �迭���� ���� �� �����ϴ� �κ� ������ ã���ָ� �ȴ�.

#include <iostream>
#include <algorithm>

using namespace std;

int arr[1001];
int arr2[1001];

int main(void)
{
	int N, result = 0;;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	reverse(arr, arr + N);

	for (int i = 0; i < N; i++)
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

	for (int i = 0; i < N; i++)
	{
		result = max(result, arr2[i]);
	}
	cout << result << "\n";
	return 0;
}