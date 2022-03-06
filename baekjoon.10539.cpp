/*https://www.acmicpc.net/problem/10539*/
#include <iostream>

using namespace std;

int arr[101];

int main(void)
{
	int N,sum = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i]; // ����B�� N����ŭ �Է��� �޴´�.
	}

	for (int i = 0; i < N; i++)
	{
		if (i == 0) // A�� 0��°���Ҷ� B�� 0��° ���Ҵ� ����
		{
			cout << arr[0] << " ";
			sum += arr[0]; 
		}
		// A�� i��° ���Ҹ� ���ϴ� ���Ŀ��� (SUM + x) / (i+1) = arr[i] �̹Ƿ�
		// x = arr[i] * (i + 1) - sum �̴�.
		else
		{
			cout << arr[i]*(i+1) - sum << " ";
			sum += (arr[i]*(i+1) - sum);
		}
	}
	return 0;
}