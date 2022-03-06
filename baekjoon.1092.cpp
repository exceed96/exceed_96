/*https://www.acmicpc.net/problem/1092*/
// ���� + �׸��� ����
// ���� ������ ū ũ���� ������ ���ſ� ���ڵ��� �ű�� Ǯ��
// ���� Ǯ�̸� �ϱ� ���ؼ� ũ������ �������Ѱ��� ������ ������ �������� or �������� �ؾ��Ѵ�.
// �� ���� ���� ������ ���� ū ũ���� ������� ���ſ� ���ڵ��� ������� �ű��.
// �̹� �ű� ���ڴ� �迭 ���� 0���� ���� ���� ������ �������� �н��ϵ��� �Ѵ�.
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int N, M;
	cin >> N;
	vector <int> arr(N);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end(), greater<int>());
	
	cin >> M;
	vector <int> arr2(M);
	for (int i = 0; i < M; i++)
	{
		cin >> arr2[i];
	}
	sort(arr2.begin(), arr2.end(), greater<int>());

	if (arr[0] < arr2[0]) //�������� ���Ľ� �� ������ �� �� ���Ұ��� ������ ���԰� ũ�� �� ���ű�Ƿ� -1 ���
	{
		cout << -1 << "\n";
		return 0;
	}
	else
	{
		int b = 0, time = 0;
		while (b != M)
		{
			time++;
			int N_ = 0;
			for (int i = 0; i < M; i++)
			{
				if (!arr2[i]) //���Ͱ��� 0�Ͻ� �н�
				{
					continue;
				}
				if (N_ == N) // N_���� N�� �ȴٸ� N_�� �ٽ� 0���� �����ؾ��ϹǷ� break;
				{
					break;
				}
				if (arr[N_] >= arr2[i])
				{
					b++; //b�� �� �ڽ��� ����, b�� M�� �ȴٸ� �� �ű���̹Ƿ� ���ѷ����� ����ȴ�.
					N_++;
					arr2[i] = 0;
				}
			}
		}
		cout << time << "\n";
	}

	return 0;
}