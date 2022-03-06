/*https://www.acmicpc.net/problem/14651*/
// BOJ 14650���� �ڷ����� ���� ������ DP����
// ó������ ���ڸ����� ���� ���� 3���� ���ؼ� ���������� ���ػ�Ƽ� �������迭�� �����Ͽ� Ǯ���� ������ ��Ǯ�ȴ�.
// �׷��� ��Ģ�� ã�ƺ��� arr[i]�� arr[i - 1] * 3�̶� ��Ģ�� ã�Ƴ´�.
// �ʱⰪ�� arr[2] = 2�� ��� ��ȭ���� arr[i - 1] * 3���� ������ �ȴ�.

#include <iostream>

using namespace std;

int arr[33334];
int number = 1000000009;

int main(void)
{
	int N;
	cin >> N;

	arr[2] = 2;
	for (int i = 3; i <= N; i++)
	{
		arr[i] = (arr[i - 1] * 3) % number;
	}
	cout << arr[N];
	return 0;
}