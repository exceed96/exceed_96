/*https://www.acmicpc.net/problem/4159*/
// ������ ����� �׸��� ����
// �������� �䱸�ϴ� ������ �� ���� �����Ұ� �־����� �� �� �����ϸ� 200������ �̵��Ҽ� �ִٴ� ����
// �� �����Ұ��� �Ÿ��� 200���� �̻��� ��� IMPOSSIBLE, ���� ������ �����ҿ��� 1422���� ������ �Ÿ��� ���� �ٽ� ���ƿ;� �ϹǷ� 
// ���� ������ �����ҿ��� ��Ÿ ������ ��ġ�� �ٽ� ������ �����ҷ� �ͼ� �����ؾ��ϴµ� �� �Դٰ��� �պ��ϴµ� 200���Ͽ� ����ġ�� ��쵵 IMPOSSIBLE�̴�

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	while (1)
	{
		bool c = true;
		int N;
		cin >> N;
		if (!N)
		{
			break;
		}

		vector <int> arr(N);

		for (int i = 0; i < N; i++) cin >> arr[i];
		sort(arr.begin(), arr.end());

		for (int i = 1; i < N; i++)
		{
			if (arr[i] > arr[i - 1] + 200) c = false; // �����Ұ��� �Ÿ��� 200������ �ȵɽ� false
			if (arr[N - 1] + 200 < 1522) c = false; // ������ �����ҿ��� 200������ �� ���Ḧ �����ϰ� 1522���Ϻ��� ������ false
		}

		if (c == true) cout << "POSSIBLE" << "\n";
		else cout << "IMPOSSIBLE" << "\n";
	}

	return 0;
}