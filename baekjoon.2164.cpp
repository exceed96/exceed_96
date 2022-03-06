/*https://www.acmicpc.net/problem/2164*/
#include <iostream>
#include <queue>

using namespace std;

queue <int> arr;

int main(void)
{
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		arr.push(i); // 1~N������ ���ڸ� arrť�� ����
	}

	while (arr.size() != 1) //ť�� ũ�Ⱑ 1�϶����� �ݺ�
	{
		arr.pop(); // �� �� ���ڸ� �����ش� ex) N = 4  -> 2,3,4
		arr.push(arr.front()); // ������ ���� �������ڸ� �ǵڿ� �߰� 2,3,4,2
		arr.pop(); // �� �� ���ڸ� �����ش� 3,4,2
	}
	cout << arr.front() << "\n";
 	return 0;
}