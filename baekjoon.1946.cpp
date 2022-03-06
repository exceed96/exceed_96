/*https://www.acmicpc.net/problem/1946*/
#include <iostream>
#include <vector>
#include <algorithm>
// A�� �����̳� B ������ ���������� �����ϰ� ���ʴ�� ���ϴ� Ǯ��
// �������� �ٲ�� ��츦 �����ؼ� �������� ���� ����
using namespace std;

bool Sort(const pair<int, int> &a, const pair<int, int> &b) // 2���� ������ first���� �������� ����
{
	return a.first < b.first;
}

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int T;
	cin >> T;
	while (T--)
	{
		int N;
		cin >> N;
		int count = N;
		vector <pair<int, int>> arr(N);

		for (int i = 0; i < N; i++)
		{
			cin >> arr[i].first >> arr[i].second; 
		}

		sort(arr.begin(), arr.end(), Sort);
		
		int x = arr[0].first, y = arr[0].second;

		for (int i = 1; i < N; i++)
		{
			if (x < arr[i].first && y < arr[i].second) //x,y���� ���� Ŭ ��� Ż������̹Ƿ� count���� -1
			{
				count--;
			}
			else if (y > arr[i].second) // second���� y������ ���� ���� ���ð�� ������ �ٲ��ش�.
			{
				x = arr[i].first;
				y = arr[i].second;
			}
		}
		cout << count << "\n";
	}

	return 0;
}