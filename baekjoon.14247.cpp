/*https://www.acmicpc.net/problem/14247*/
// ����, �׸��� ����

// �Ϸ� ���������� �ڶ�� ������ ���̰� ��Ÿ� ���� ���߿� �ڸ��� ���̰� ���� ª���Ÿ� ���� ���� �ڸ��� �ȴ�.
// �ᱹ ��� ������ �ڸ��°� �ִ밪�� ���´�.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

bool Sort(const pair<int, int>& a, const pair<int, int>& b) // �ڶ�� ���̴�� �������� ����
{
	if (a.second < b.second) return 1;
	else if (a.second == b.second)
	{
		if (a.first < b.first) return 1;
	}
	return 0;
}

int main(void)
{
	int n;
	cin >> n;
	vector <pair<int, int>> arr(n);
	
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].first;
	}

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].second;
	}

	sort(arr.begin(), arr.end(), Sort);

	ll sum = arr[0].first; // sum ���� int���� ������ ����Ƿ� long long���� ����
	int j = 1;

	while (1)
	{
		if (j == n) 
		{
			break;
		}
		for (int i = j; i < n; i++)
		{
			arr[i].first += arr[i].second; // 1�� ���������� ���ڸ� �������� ��� �ڶ���.
		}
		sum += arr[j].first; // �ش����� �Ǹ� �߶��ش�.
		j++;
	}

	cout << sum << "\n";
	return 0;
}