/*https://www.acmicpc.net/problem/2440*/
#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) //N����ŭ ���� �����. EX)5�� 5��
	{
		for (int j = 1; j <= N - i; j++) // ���ٸ��� N-i��ŭ�� ���� �����.
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}