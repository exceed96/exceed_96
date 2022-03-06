/*https://www.acmicpc.net/problem/2231*/
#include <iostream>
#define NUMBER 1000000

using namespace std;

int main(void)
{
	int N, N2, result = 0;
	cin >> N;

	for (int i = 1; i <= NUMBER; i++) //1���� NUMBER������ ���ڱ��� �׶��׋��� i ����  i�ǰ��ڸ����� ���ؼ� 
	{                                 // sum�� N�� �������� ���ؼ� ������ result�� i�� ����
		int sum = 0;
		N2 = i;
		sum += i;
		while (1)
		{
			sum += N2 % 10;
			if ((N2 / 10) == 0)
			{
				break;
			}
			N2 = N2 / 10;
		}
		if (sum == N)
		{
			result = i;
			break;
		}
	}

	if (!result) // result�� 0�Ͻÿ��� �ش��ϴ� �����ڰ� ���ٴ� ���̹Ƿ� 0�� ���
	{
		cout << "0" << "\n";
	}
	else
	{
		cout << result << "\n";
	}
	return 0;
}