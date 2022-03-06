/*https://www.acmicpc.net/problem/11508*/
#include <iostream>
#include <vector>
#include <algorithm>
// ����ǰ�� ������ ������������ �������� sum���ٰ� ��� �������ش�.
// �� �� ����ǰ�� ������ 3���� ������ �������� ������ �׿� �ش��ϴ� �ε����� ����ǰ ���ݵ��� ��� ����ϹǷ� ���ݿ� ����
// i + 1 %  3 �� 0 �� ���� 3���� ������ �� ���� �� ������ ����ǰ�̹Ƿ� �� ����ǰ�� sum���� ���ش�.
using namespace std;

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int N, sum = 0;
	cin >> N;
	vector <int> arr(N);

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr.begin(), arr.end(), greater<int>());

	for (int i = 0; i < N - N % 3; i++)
	{
		if ((i + 1) % 3 == 0)
		{
			sum -= arr[i];
		}
	}

	cout << sum << "\n";
	return 0;
}