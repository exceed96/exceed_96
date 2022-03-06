/*https://www.acmicpc.net/problem/11497*/
#include <iostream>
#include <vector>
#include <algorithm>
// ���Ժ��� ���¸� ����� ���̵��� ���� �迭�� ���� ���ִ�.
// ���̵��� ������������ �����ؼ� �ε����� ���̰� 2�� ���¿��ҵ� �� ū ���Ҹ� ���� ���ҷ� ���ָ�
// ���ϰ��� �ϴ� ���̵��� ���´�. �� �߿� ���� ū ���� ������ ���̵��̴�.
using namespace std;

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int T;
	cin >> T;
	while (T--)
	{
		int N, max = 0;
		cin >> N;
		vector <int> arr(N);

		for (int i = 0; i < N; i++)
		{
			cin >> arr[i];
		}
		sort(arr.begin(), arr.end());

		for (int i = 0; i < N - 2; i++)
		{
			if (max < arr[i + 2] - arr[i])
			{
				max = arr[i + 2] - arr[i];
			}
		}
		cout << max << "\n";
	}
	return 0;
}