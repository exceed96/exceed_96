/*https://www.acmicpc.net/problem/15988*/
// BOJ 9095�� �Ȱ��� dp ����
// 9095�� ������ �����ε� �߰��� ������ n���� 1000000�����̸� �׿� ���� �迭�� �ڷ����� long long���� �ٲ���� �Ѵ�.

#include <iostream>

using namespace std;

long long arr[1000001];
int number = 1000000009;
int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int T;
	cin >> T;
	
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;

	for (int i = 4; i <= 1000000; i++)
	{
		arr[i] = (arr[i - 1] + arr[i - 2] + arr[i - 3]) % number;
	}
	while (T--)
	{
		int n;
		cin >> n;
		cout << arr[n] % number << "\n";
	}
	return 0;
}