/*https://www.acmicpc.net/problem/11004*/
#include <iostream>
#include <algorithm>
//sort�� ����ϸ� ���� Ǯ�� ������ �����Ͱ� 5000000������ ���� ������ �ð��� ���̰ɸ��� �ڵ�
using namespace std;

int arr[5000001];

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int N, K;
	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr+N);
	
	cout << arr[K - 1] << "\n";
	return 0;
}