/*https://www.acmicpc.net/problem/14912*/
#include <iostream>

using namespace std;

int main(void)
{
	int n, d, count = 0;
	cin >> n >> d;

	for (int i = n; i >= 1; i--)
	{
		int number = i;
		while (1)
		{
			if ((number % 10) == d) // 10���� �������� d�̸� count++
			{
				count++;
			}	
			if ((number / 10) == 0) // number�� �� �ڸ� ���϶��� 10���� ������ 0�̹Ƿ� break
			{
				break;
			}
			else // �� �ڸ����� �ƴҶ��� 10���� �����ش�
			{
				number /= 10;
			}
		}
	}
	cout << count << "\n";
	return 0;
}