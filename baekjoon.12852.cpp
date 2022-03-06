/*https://www.acmicpc.net/problem/12852*/
// dp���� (1463�� ���� ���� �Ȱ��� Ǯ�� ��õ)
// ���� N�� ���ؼ� 1�� ���鶧 �� ���� ������ �ּҷ� ����ϴ� Ƚ���� ����ϴ� ������.
// 1463���� Ǯ�̴� �����ϸ� ����� ���ԵǾ� �ִ� ���� N���� 1�� ����� ������ ¥��ȴ�.

#include <iostream>

using namespace std;

int arr[1000001];

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int N;
	cin >> N;

	arr[1] = 0; // N = 1�ϰ�쿡�� Ƚ���� 0���̴�.

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
	cout << arr[N] << "\n";

	while (1)
	{
		cout << N << " ";
		if (N == 1)
		{
			break;
		}
		if (arr[N] == arr[N - 1] + 1) // arr[N] �� arr[N- 1] + 1�� ���ٴ� ���� 1�� ����� �����ӿ� 1�� ���� ��찡 �ִٴ� ���̴�.
		{
			N -= 1;
		}
		else if (arr[N / 2] + 1 == arr[N] && N % 2 == 0) 
		{
			N /= 2;
		}
		else if (arr[N / 3] + 1 == arr[N] && N % 3 == 0)
		{
			N /= 3;
		}
	}
	return 0;
}