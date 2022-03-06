/*https://www.acmicpc.net/problem/11170*/
#include <iostream>

using namespace std;

int main(void)
{
	int T;
	cin >> T;

	while (T--)
	{
		int N, M, count = 0;
		cin >> N >> M;

		for (int i = N; i <= M; i++)
		{
			int number = i;
			while(1)
			{
				if (number % 10 == 0) // �������� 0 �̸� count++
				{
					count++;
				}
				if (number / 10 == 0) // ���� 0 �̸� ���ڸ��� �̹Ƿ� break
				{
					break;
				}
				else // ���ڸ����� �ƴ� ��� 10���� �����༭ �ݺ�
				{
					number /= 10;
				}
			}
		}
		cout << count << "\n";
	}
	return 0;
}