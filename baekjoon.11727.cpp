/*https://www.acmicpc.net/problem/11727*/
// 11726 dp������ 2 * 2 Ÿ���̶� ������ �߰��� ����
// 11726�� �����ϰ� Ǫ�� ��� 2 * 2 Ÿ�Ͽ� ���� ��ȭ���� �߰��ؾ� �Ѵ�.
// 2 * n ���簢���� �����ڸ� ���� ��ܿ� 2 * 2�� ������ �������� ������ �ִ� ���� 2 * (n - 2)�� �ȴ�.
// �׷��� arr[i - 2] * 2�� ������Ѵ�.

#include <iostream>

using namespace std;

int arr[1001];
int number = 10007;

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	arr[1] = 1;
	arr[2] = 3;

	for (int i = 3; i <= n; i++)
	{
		arr[i] = (arr[i - 1] + (arr[i - 2] * 2)) % number;
	}
	cout << arr[n];
	return 0;
}