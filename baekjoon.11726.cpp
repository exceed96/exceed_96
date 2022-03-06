/*https://www.acmicpc.net/problem/11726*/
#include <iostream>
// dp����
// ���ʰ����ڸ� ����� 1 * 2�� ä��� 2 * (n - 1)�� ä�����ϰ�
// ���ʰ����ڸ� ����� 2 * 1�� ä��� 2 * (n - 2)�� ä�����Ѵ�
// �׷��Ƿ� ��ȭ���� arr[i] = arr[i - 1] + arr[i - 2]�� ���´�.
// 10007�� �ݺ��� �������� ����� �����÷ο찡 �߻����� �ʴ´�.
// �ʱⰪ�� 1�� 2�� ��´�. �׷� �Ǻ���ġ ������ ������ ������ �����.
using namespace std;

int arr[1001];
int number = 10007;

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	arr[1] = 1;
	arr[2] = 2;
	int n;
	cin >> n;
	for (int i = 3; i <= n; i++)
	{
		arr[i] = (arr[i - 1] + arr[i - 2]) % number;
	}
	cout << arr[n];

	return 0;
}