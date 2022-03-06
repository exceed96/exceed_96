/*https://www.acmicpc.net/problem/2501*/
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int N, M;
	vector <int> arr;
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			arr.push_back(i); //����̸� arr���Ϳ� ���ҵ��� ����
		}
	}

	if (M > arr.size()) // arr������ ũ�⺸�� ū �����̸� 0�� ���
	{
		cout << "0" << "\n";
	}
	else
	{
		cout << arr[M - 1] << "\n";
	}
	return 0;
}