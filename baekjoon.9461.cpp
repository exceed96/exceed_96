/*https://www.acmicpc.net/problem/9461*/
// �ܼ� dp����
// �׸��� ���� �����Ҽ� �ִ� �����̴�.
// arr[i]�� ���� arr[i - 5] + arr[i - 4] + arr[i - 3]�̴�. �� �ʱⰪ�� �ε��� 5������ ������� �Ѵ�.
#include <iostream>

using namespace std;

long long arr[101];

int main(void)
{
	int T;
	cin >> T;

	arr[1] = arr[2] = arr[3] = 1;
	arr[4] = arr[5] = 2;

	for (int i = 6; i <= 100; i++)
	{
		arr[i] = arr[i - 5] + arr[i - 4] + arr[i - 3];
	}
	while (T--)
	{
		int N;
		cin >> N;
		cout << arr[N] << "\n";
	}
	return 0;
}