/*https://www.acmicpc.net/problem/1463*/
// DP����
// N������ ���ڵ��� ���� �ּ����� ���� Ƚ���� �����Ͽ��� N�� �ּ� ����Ƚ���� ����Ѵ�
// 2�� 3���� �������� ���� 2�� 3���� �������� ���� ȿ�����̴�.
// ���� ���� 2�� 3���� ������ ������ -1�� ���ش�.
#include <iostream>

using namespace std;

int arr[1000001];

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int N;
	cin >> N;
	arr[1] = 0;
	for (int i = 2; i <= N; i++)
	{
		arr[i] = arr[i - 1] + 1; 
		if (i % 2 == 0)
		{
			arr[i] = min(arr[i / 2] + 1, arr[i]);
		}
		if (i % 3 == 0)
		{
			arr[i] = min(arr[i / 3] + 1, arr[i]);
		}
	}
	cout << arr[N];
	return 0;
}