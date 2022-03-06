/*https://www.acmicpc.net/problem/7983*/
// �׸��� ����
// �������� �׸��� �����̴�. �������� �ִ� ��ĥ ��� �ִ����� �䱸�ϴ� �����̴�.
// �׷��� ���ؼ� �������� �������� ������������ �����Ѵ�.
// �׸��� �������� ���� ���������� �� ������ ��¥�� �ɸ��� �ð��� ���� �� ����϶� �����ִ� �ִ� �ϼ��� ���´�
// ���ҵ��� �������� ���ϸ鼭 ���� �������� ����ִ� �ִ� ��¥���� ������ �� ������ �����ִ� ���� ������ ��ġ�� ���̹Ƿ�
// �ִ� �ϼ��� ������ �ɸ��� �ð��� ���ش�.
// ���� ���� �ִ� �ִ� ��¥���� ���� ������ �������� �۴ٸ� �ִ� ����ִ� ��¥�� �ٽ� �������ش�.
// �������� ���� �׾���� ��¥���� üũ�ϸ� ���ذ� ������̴�.
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
	cin.tie(0); ios_base::sync_with_stdio(0);
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
	}

	cout << b << "\n";
	return 0;
}