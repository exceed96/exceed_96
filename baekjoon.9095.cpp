/*https://www.acmicpc.net/problem/9095*/
// dp����
// ��ȭ���� �����ϱ� ���� ��Ģ�� ã�ƾ� �Ѵ�.
// ��Ģ�� ã�ƺ��� i��°�� 1,2,3���� ������ִ� ������ ����
// arr[i - 1] + arr[i - 2] + arr[i-3] �ΰ��� �˼��ִ�.(ǥ�� �׷����鼭 �ϸ� ��Ģ�� ���δ�.)
#include <iostream>

using namespace std;

int arr[12];

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int T;
	cin >> T;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;

	while (T--)
	{
		int N;
		cin >> N;
		for (int i = 4; i <= N; i++)
		{
			arr[i] = arr[i - 3] + arr[i - 2] + arr[i - 1];
		}
		cout << arr[N] << "\n";
	}
	return 0;
}