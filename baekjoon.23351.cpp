/*https://www.acmicpc.net/problem/23351*/
// �׸��� ����
// A�� N���� ����̴�. �׷��� ��ü���� ȭ���� ������ N���� ���� �ƴ϶� A�� ��������ŭ ������ ����ȴ�.
// �� ���� ������ ���� �ϳ��ϳ��� ���� �شٰ� �����Ͽ��� �������� 1�� ���̰� �ؼ� 0�� �Ǵ� ���Ҹ� ������ ù Ĺ���� �״� ��¥�̹Ƿ� 
// �׶����� ī��Ʈ�� ���� ����ϸ� �ȴ�.

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int N, K, A, B, count = 0;
	cin >> N >> K >> A >> B;
	vector <int> arr(N / A, K);

	bool c = false;

	int i = 0;

	while (!c)
	{
		arr[i] += B - 1; // ���� �� Ĺ��
		count++;
		for (int j = 0; j < N / A; j++)
		{
			if (i != j) arr[j]--; // ���� ���� ���� Ĺ���� 1�� ����
			if (!arr[j]) // 0�� �����ٸ� C�� TRUE�� �ٲٰ� ���ѷ��� �����
			{
				c = true;
				break;
			}
		}
		i++;
		if (i >= N / A) i = 0;
	}

	cout << count << "\n";
	return 0;
}