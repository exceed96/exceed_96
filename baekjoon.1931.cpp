/*https://www.acmicpc.net/problem/1931*/
// ȸ�ǰ� ������ �ð��� ������������ �����ϰ� ������ �ð��� ���缭
// �����ϴ½ð��� ���� ���� ȸ�Ǹ� ã���ָ� ȸ���� �ִ밹���� �� �� �ִ�.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Sort(const pair<int, int> &a, const pair<int, int> &b)
// ȸ�ǰ� ������ �ð��� ������������ ����
{
	if (a.second < b.second)
	{
		return 1;
	}
	else if (a.second == b.second) //������ �ð��� ������� �����ϴ½ð��� ���Ͽ��� �������� ����
	{
		if (a.first < b.first)
		{
			return 1;
		}
	}
	return 0;
}
int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);

	int N, s = 0, count = 0;
	cin >> N;
	vector <pair<int, int>> arr(N); // 2�������� N�� 

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i].first >> arr[i].second;
	}
	sort(arr.begin(), arr.end(), Sort); // ������ �ð��� ������������ ����

	for (int i = 0; i < N; i++)
	{
		if (s <= arr[i].first) // �����ϴ� �ð��� s�� ���ų� ũ�ٸ� 
		{
			s = arr[i].second; //������ �ð��� s�� ����
			count++; 
		}
	}
	cout << count << "\n";
	return 0;
}