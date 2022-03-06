/*https://www.acmicpc.net/problem/11256*/
// �ܼ��� ���� ����
// �� ������ ���̸� ������������ �����Ͽ��� J�����ٰ� ��� ���ְ�
// J �� 0�����Ͻ� �ݺ����� �����Ͽ��� ���� ������ ī��Ʈ�ϸ� �ȴ�

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Sort(const pair<int, int>& a, const pair<int, int>& b)
{
	return a.first * a.second > b.first * b.second;
}

int main(void)
{
	int T;
	cin >> T;
	while (T--)
	{
		int J, N, count = 0;
		cin >> J >> N;
		vector <pair<int, int>> arr(N);
		for (int i = 0; i < N; i++)
		{
			cin >> arr[i].first >> arr[i].second;
		}
		sort(arr.begin(), arr.end(), Sort);

		for (int i = 0; i < N; i++)
		{
			J -= arr[i].first * arr[i].second;
			count++;
			if (J <= 0)
			{
				break;
			}
		}
		cout << count << "\n";
	}
	return 0;
}