/*https://www.acmicpc.net/problem/1920*/
#include <iostream>
#include <algorithm> //����Ž���� �����ϱ� ���ؼ�

using namespace std;

int arr[100001];

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int N, M;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + N);
	cin >> M;

	while (M--)
	{
		int t;
		cin >> t;
		cout << binary_search(arr, arr + N, t) << "\n"; //�Լ��� �̿��ؼ� ����
		// arr�迭�� N������ �������� t���� ã���� 1�� ��ȯ, ��ã���� 0�� ��ȯ
	}
	return 0;
}