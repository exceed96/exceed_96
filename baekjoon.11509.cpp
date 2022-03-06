/*https://www.acmicpc.net/problem/11509*/
// �ε����� �����ؾ� �ϴ� �׸��� ����
// ȭ���� ���ʿ��� ���������� ���ư��µ� �ε����� ���̶�� �����Ͽ� Ǯ��
// ȭ���� ���ƿͼ� ǳ���� ������ ȭ���� �� ���� ������ �ڸ����� 1 ���� �ڸ��� ��ġ�ϰ� �ִ�.
// �׷� �� ���� �ε����� ���� 1�Ͻÿ��� ȭ���� ����ͼ� ǳ���� ��Ʈ���� ���̴�.
// ���� �� ���� �ڸ��� 0 �Ͻÿ��� ȭ���� ������� �ʴ°��̹Ƿ� �� �ڸ��� +1 ���ְ� ȭ���� ������ +1 ���ָ� �ȴ�.

#include <iostream>

using namespace std;

int arr[1000001];

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int N, count = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		if (arr[a + 1])
		{
			arr[a]++;
			arr[a + 1]--;
		}
		else
		{
			arr[a]++;
			count++;
		}
	}
	cout << count << "\n";
	return 0;
}