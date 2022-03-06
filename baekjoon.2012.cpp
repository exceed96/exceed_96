/*https://www.acmicpc.net/problem/2012*/
#include <iostream>
#include <vector>
#include <algorithm>
// �־��� �������� ������������ �����Ͽ��� ������ �ε����� 1�� ���Ѱ��� ���ָ� �ȴ�.
// �־��� ��츦 �������� �ʴ� �׸��� ���� ����

using namespace std;

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int N;
	long long count = 0;
	cin >> N;
	vector <long long> arr(N);

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());

	for (int i = 1; i <= N; i++)
	{
		count += abs(arr[i - 1] - i);
	}

	cout << count << "\n";
	return 0;
}