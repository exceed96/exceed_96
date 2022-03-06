/*https://www.acmicpc.net/problem/18310*/
#include <iostream>
#include <vector>
#include <algorithm>
// �߰����� ��ġ�� ���� �ᱹ���� �Ÿ��� �� ���� �ּҰ� �ȴ�.
// ������ �� ���¿��� ���� Ȧ������ ��쿡�� 2�� ������ �߰����̰�
// ������ �� ���¿��� ���� ¦������ ��쿡�� 2������ �����µ� �� �߿� ���� ���̹Ƿ� -1�� �ϸ� �ȴ�.
using namespace std;

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int N;
	cin >> N;
	vector <int> arr(N);

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());

	if (arr.size() % 2)
	{
		cout << arr[arr.size() / 2] << "\n";
	}
	else
	{
		cout << arr[arr.size() / 2 - 1] << "\n";
	}
	return 0;
}