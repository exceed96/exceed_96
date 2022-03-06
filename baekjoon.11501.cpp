/*https://www.acmicpc.net/problem/11501*/
// �ְ��� ���� ������ �Ȱ� �ٽ� �������� �ż��ϸ� �ȴ�.
// �� ���� �ݺ������� ������ ���� �����ϴ� �κ��� ������ �� �κп����� �ٽ� �ż��ϴ� �ڵ带 ¥�� �ȴ�.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int T;
	cin >> T;
	while (T--)
	{
		int N;
		long long sum = 0;
		cin >> N;
		vector <long long> arr(N);
		for (int i = 0; i < N; i++)
		{
			cin >> arr[i];
		}
		reverse(arr.begin(), arr.end()); //���͸� reverse�ص� ������ ���ϰ� �ݺ����� ���������� ������ �������.

		long long max = arr[0];

		for (int i = 1; i < N; i++)
		{
			if (max < arr[i]) //max���� ū ���� ���ð�� ������ �ٲ��ش�. �� �ٽ� �ż�
			{
				max = arr[i];
			}
			else //max���� �������� �� ���̸�ŭ �̵��̹Ƿ� sum�� ��� ������ �����ش�
			{
				sum += max - arr[i];
			}
		}
		cout << sum << "\n";
	}

	return 0;
}