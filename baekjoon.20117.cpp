/*https://www.acmicpc.net/problem/20117*/
// ������ ����ϴ� �׸��� ����
// ���� ū �Ͱ� ���� �������� ������ �ִ� ������ ���´�.
// �� ������ Ȧ���� �϶��� ���� 1���� ������� �Ѵ�.

#include <iostream>
#include <algorithm>

using namespace std;

int arr[100001];

int main(void)
{
	int N, sum = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + N);

	if (N % 2 == 1)
	{
		for (int i = N / 2 + 1; i < N; i++)
		{
			sum += arr[i] * 2;
		}
		sum += arr[N / 2];
	}
	else
	{
		for (int i = N / 2; i < N; i++)
		{
			sum += arr[i] * 2;
		}
	}
	cout << sum << "\n";
	return 0;
}