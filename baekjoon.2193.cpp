/*https://www.acmicpc.net/problem/2193*/
// ������ dp����
// 0���� �������� �ʰ� 1�� �������� �ι� �� 11�� �κ� ���ڿ��� ������ ���� ���� ��ģ���� ã�°��̴�.
// ������ ���ڸ� 0 �ڿ��� 0,1�� �Ѵ� �ü��ְ�, 1 �ڿ��� ������ 0�� �;� �ϴ� ���̴�.
// �ʱⰪ�� ��ȭ���� ���� �� �������� ����ְ� N�ڸ����� �ǵڰ� 1,0�� ��ģ������ ����� ���� �����ָ� �ȴ�.
#include <iostream>

using namespace std;

long long arr[90][2];

int main(void)
{
	int N;
	cin >> N;
	
	arr[1][1] = 1;
	arr[2][0] = 1;

	for (int i = 3; i <= N; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (j == 0)
			{
				arr[i][j] = arr[i - 1][0] + arr[i - 1][1];
			}
			else
			{
				arr[i][j] = arr[i - 1][0];
			}
		}
	}

	cout << arr[N][1] + arr[N][0] << "\n";
	return 0;
}