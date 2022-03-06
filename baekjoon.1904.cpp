/*https://www.acmicpc.net/problem/1904*/
#include <iostream>
// �Ǻ���ġ �������� dp����
// ���� �� �״�� �Ǻ���ġ �������� �����̴�.
// N = 1�̸� ���� 1����, N = 2�̸� ���� 2���� N = 3�̸� ���� 3����
// �� arr[i] = arr[i-1] + arr[i-2] ��� ����� �� �� �ִ�.
// �ʱⰪ�� 1,2�ڸ��϶��� �����س����� �ȴ�.

using namespace std;

long long arr[1000001];
int number = 15746;

int main(void)
{
	arr[1] = 1;
	arr[2] = 2;
	int N;
	cin >> N;
	for (int i = 3; i <= N; i++)
	{
		arr[i] = (arr[i - 1] + arr[i - 2]) % number;
	}

	cout << arr[N];
	return 0;
}