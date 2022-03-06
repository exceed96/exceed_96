/*https://www.acmicpc.net/problem/2232*/
// �׸��� ����
// �ּ� ������ ���ڸ� ��Ʈ������ �¿��� ���ڰ� �ڽŰ� ���ų� �� ���� �����ΰ͵鸸 ��Ʈ���� �ȴ�.

#include <iostream>
#include <vector>

using namespace std;

vector <int> arr;

int main(void)
{
	int N, b, count = 0;
	cin >> N;
	arr.push_back(0); // ù��°�� i - 1��°�� ���ϱ� ���Ͽ� ������ 0�� �־��ش�.
	for (int i = 0; i < N; i++)
	{
		cin >> b;
		arr.push_back(b);
	} 
	arr.push_back(0); // �������� i + 1��°�� ���ϱ� ���Ͽ� ������ 0�� �־��ش�.

	for (int i = 1; i < arr.size() - 1; i++)
	{
		if (arr[i - 1] <= arr[i] && arr[i + 1] <= arr[i])
		{
			cout << i << "\n"; 
		}
	}
	
	return 0;
}