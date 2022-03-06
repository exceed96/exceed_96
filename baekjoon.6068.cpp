/*https://www.acmicpc.net/problem/6068*/
// 7983�� ������ ���� �׸��� ����
// 7983���� �Ȱ��� �����̴� �ٸ� �߰��� ������ �� �ð��� ���� ������ ���ٸ� -1�� ����ϴ� ���̴�.
// �� �ð��� ���� ������ ���ٴ� ���� �� �Ͼ�� �ð��� 0 �̸��϶��� ���ϴ� ���̴�.
// ���� ���Ǹ� �߰����ָ� �ȴ�.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Sort(const pair<int, int>& a, const pair<int, int>& b)
{
	return a.second > b.second;
}

int main(void)
{
	int n;
	cin >> n;
	vector <pair<int, int>> arr(n);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].first >> arr[i].second;
	}

	sort(arr.begin(), arr.end(), Sort);

	int b = arr[0].second - arr[0].first;

	for (int i = 1; i < n; i++)
	{
		if (arr[i].second > b)
		{
			b -= arr[i].first;
		}
		else
		{
			b = arr[i].second - arr[i].first;
		}
		if (b < 0)
		{
			cout << -1;
			return 0;
		}
	}

	cout << b << "\n";
	return 0;
}