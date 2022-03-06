/*https://www.acmicpc.net/problem/10816*/
#include <iostream>
#include <algorithm> 

using namespace std;

int arr[500001];
int N;

int upper(int x, int len) //ã�� �����߿� �������� ã�Ƴ���
{
	int start = 0;
	int end = len;
	while (start < end) //start�� end�� �������� ���ѷ��� ���� 
	{
		int mid = (start + end) / 2;
		if (arr[mid] > x) //x�� mid���� ������� end�� mid�� �ȴ�. �� ���� �������� ���� x
		{
			end = mid;
		}
		else
		{
			start = mid + 1;
		}
	}
	return start;
}

int lower(int x, int len) // ã�� �����߿� ���� ���� ã�Ƴ���
{
	int start = 0;
	int end = len;
	while (start < end)
	{
		int mid = (start + end) / 2;
		if (arr[mid] >= x) 
		{
			end = mid;
		}
		else
		{
			start = mid + 1;
		}
	}
	return start;
}

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int M;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + N);
	cin >> M;
	while (M--)
	{
		int t;
		cin >> t;
		cout << upper(t, N) - lower(t, N) << " "; //ã�Ƴ����߿� ������ �� ū ������ �ε������� ���� ������ �ε������� ���ش�.
	}

	return 0;
}