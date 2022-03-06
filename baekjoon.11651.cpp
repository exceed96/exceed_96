/*https://www.acmicpc.net/problem/11651*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool Sort(const pair<int, int>& a, const pair<int, int>& b) // y��ǥ�� ��������
{
	if (a.second < b.second) 
	{
		return 1;
	}
	else if (a.second == b.second) //y��ǥ�� ������ ��찡 ������� x��ǥ�� �� ū���� ������ ������
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
	vector <pair<int, int>> arr;

	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int x, y;
		cin >> x >> y;
		arr.push_back(make_pair(x, y)); //���� 2���� �Է¹ޱ�
	}
	sort(arr.begin(), arr.end(), Sort); // �������� ����
	
	for (int i = 0; i < N; i++)
	{
		cout << arr[i].first << " " << arr[i].second << "\n"; //x��ǥ�� y��ǥ ���
	}
	
	return 0;
}
