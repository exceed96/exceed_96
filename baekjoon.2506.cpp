/*https://www.acmicpc.net/problem/2506*/
#include <iostream>

using namespace std;

int arr[100];

int main(void)
{
	int N, count = 0, result= 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		if (arr[i])
		{
			count++;
			result += count; //�������� �������� count++�� ���� ����
		}
		if (!arr[i]) // 0 �� ���ð�� count�� 0���� �ʱ�ȭ
		{
			count = 0;
		}
	}
	cout << result << "\n";
	return 0;
}