/*https://www.acmicpc.net/problem/13305*/
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);

	int N;
	long long sum = 0; //sum���� int�� ������ �����Ҽ��� �־ long long���� ����
	cin >> N;
	vector <long long> arr(N - 1);
	vector <long long> arr2(N);

	for (int i = 0; i < N - 1; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++)
	{
		cin >> arr2[i];
	}

	sum += arr[0] * arr2[0]; //ó������ ������ �������÷� ���� �Ÿ���ŭ ù��° �����ҿ��� ������ �ؾ��Ѵ�
	long long s = arr2[0]; //ù��° �������� ������ ���� ��´�
	for (int i = 1; i < N - 1; i++)
	{
		if (s > arr2[i]) // �ι�° �����ҿ� ���Ͽ��� �� ���������� ������ ����ش�.
		{
			s = arr2[i];
		}
		sum += s * arr[i]; //���� �Ÿ���ŭ ���ؼ� �����ش�.
	}
	cout << sum << "\n";
	return 0;
}