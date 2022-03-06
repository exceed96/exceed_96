/*https://www.acmicpc.net/problem/14241*/
// �ܼ��� ���Ĺ���
// ���� ū ���ڴ� ���߿� �����ִ°� �ִ밪�� ������ �ִ�.
// ������������ ������ �� �ݺ����� ������ 1���� �Ͽ��� �ٷ� ���� ���ҿ� ����� ���ش�.
// �� ���Ҹ� �� �� ���� i�� �ʱ�ȭ���ش�.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int N, sum = 0, score = 0;
	cin >> N;
	vector <int> arr(N);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());

	for (int i = 1; i < N; i++)
	{
		sum = arr[i] + arr[i - 1];
		score += arr[i] * arr[i - 1];
		arr[i] = sum;
	}
	cout << score << "\n";
	return 0;
}