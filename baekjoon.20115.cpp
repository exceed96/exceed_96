/*https://www.acmicpc.net/problem/20115*/
// ������ �̿��� �׸��� ����

// �������� �䱸�ϴ� ���ǿ� ���� ������ ������ �帵ũ�� ���� �ִ�� �Ϸ��� �־��� ������ �帵ũ�� ���� ���� ū���� �������� ��ƾ� �Ѵ�.
// �������� ���� �帵ũ ���� ������ �帵ũ���� 2�� ����� �����ָ� ������ �帵ũ�� ���� �ִ밡 �ȴ�.
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	int N;
	cin >> N;

	vector <int> arr(N);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end()); // �������� ����
	double sum = arr[N - 1]; // ���� ���� ���� �帵ũ�� ����

	for (int i = 0; i < N - 1; i++)
	{
		sum += double(arr[i] / 2.0); // 2�� �������� .5���� ����ϱ� ���Ͽ� 2.0���� ����
	}

	cout << sum << "\n";
	return 0;
}