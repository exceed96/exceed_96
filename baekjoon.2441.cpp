/*https://www.acmicpc.net/problem/2441*/
#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) // N��ŭ ���� �����.
	{
		for (int j = 0; j < i; j++) // ������ŭ ������ ���� ����
		{
			cout << " ";
		}
		for (int k = N - i; k > 0; k--) //N-i ��ŭ�� ���� ���� 
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}