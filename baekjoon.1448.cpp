/*https://www.acmicpc.net/problem/1448*/
// �׸��� ����
// �ﰢ���� �� ���� ���� �亯�� ���̰� �ٸ� �κ��� ������ �պ��� �۾ƾ� �Ѵ�. a <= b + c

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int N, max = 0, sum = 0;
	cin >> N;

	vector <int> arr(N);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end(), greater<int>()); // ������������ ����

	for (int i = 0; i < N - 2; i++)
	{
		if (arr[i] < arr[i + 1] + arr[i + 2])
		{
			sum = arr[i] + arr[i + 1] + arr[i + 2];
			if (sum > max)
			{
				max = sum;
			}
		}
	}
	
	if (max == 0)
	{
		cout << -1 << "\n";
	}
	else
	{
		cout << max << "\n";
	}
	return 0;
}