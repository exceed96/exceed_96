/*https://www.acmicpc.net/problem/11055*/
// 11053�� ���� Ǯ���� dp����
// 11053�� ���� Ǯ�̷� Ǯ�� �ִ�. �ٸ� ���⼭ �߰��� ������ ���� ���� ū���̹Ƿ�
// arr2�� ���� �κ� ������ ���� �� ���Ҹ��� �������ְ� ���߿� ���� ū���� ����ϸ� �ȴ�.

#include <iostream>

using namespace std;

int arr[1001];
int arr2[1001];

int main(void)
{
	int N, m = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < N; i++)
	{
		arr2[i] = arr[i];
		for(int j = 0; j < i; j++)
		{
			if (arr[i] > arr[j])
			{
				arr2[i] = max(arr2[j] + arr[i], arr2[i]);
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		m = max(m, arr2[i]);
	}
	cout << m << "\n";
	return 0;

}