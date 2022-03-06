/*https://www.acmicpc.net/problem/5911*/
// �׸���, ����, ���Ʈ������ ����� ����

// ������ ���� �����ź��� ������������ ����, ���� ������ ������ ������������ �����Ͽ��� �ִ�� �����Ҽ��ִ� �ο����� �����ָ� �ȴ�.
// �� ���� Ǯ�̰� �������̴�. �ʹ� ���Ƶ��ư��� �����̴�.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Sort(const pair<int, int>& a, const pair<int, int>& b) // ������ ���� ������������ ����
{
	int a_ = a.first + a.second;
	int b_ = b.first + b.second;
	if (a_ < b_) return 1;
	else if (a_ == b_)
	{
		if (a.first < b.first) return 1;
	}
	return 0;
}


int main(void)
{
	int N, B, count = 0, count2 = 0;
	cin >> N >> B;
	
	int B_2 = B; // ������ ������ ���������϶��� �������� B��
	vector <pair<int, int>> arr(N);

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i].first >> arr[i].second;
	}

	sort(arr.begin(), arr.end(), Sort);
	
	for (int i = 0; i < N; i++)
	{
		int sum = arr[i].first + arr[i].second;
		if (sum <= B) // ���� �����ź��� B�� ���Ͽ��� B���� �۰ų� ������ B���� ���̳ʽ� ���ְ� �ο����� 1 �����ش�.
		{
			B -= sum;
			count++;
		}
		else
		{
			if (arr[i].first / 2 + arr[i].second <= B) // 
			{
				count++;
				break;
			}
		}
	}

	sort(arr.begin(), arr.end());
	
	for (int i = 0; i < N; i++)
	{
		int sum = arr[i].first + arr[i].second;
		if (sum <= B_2) // �������� �����ź��� B�� ���Ͽ��� B���� �۰ų� ������ B���� ���̳ʽ� ���ְ� �ο����� 1 �����ش�.
		{
			B_2 -= sum;
			count2++;
		}
		else
		{
			if (arr[i].first / 2 + arr[i].second <= B)
			{
				count2++;
				break;
			}
		}
	}

	if (count > count2) cout << count << "\n"; // �ΰ��� ����� ū ���� ����Ѵ�.
	else cout << count2 << "\n";
	
	return 0;
}