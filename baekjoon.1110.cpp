/*https://www.acmicpc.net/problem/1110*/
#include <iostream>

using namespace std;

int main(void)
{
	int N, number = 0, count = 0;
	cin >> N;
	number = N;

	while (1)
	{
		int sum = 0;
		if (N < 10) // N�� 10 �����϶��� 10�� ���ؼ� ���ڸ� ���� �����.
		{
			N = N * 10;
			sum = N / 10 + N % 10;
			N = (N / 10 * 10) + sum % 10; // 0X�� ���ڸ� ������ ���� X0�̹Ƿ�  N % 10�� �ƴ϶� N / 10���� �Ѵ�.
			count++;
		}
		else
		{
			sum = N / 10 + N % 10;
			N = (N % 10 * 10) + sum % 10;
			count++;
		}
		if (number == N)
		{
			break;
		}
	}
	cout << count << "\n";
	return 0;
}