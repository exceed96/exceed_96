/*https://www.acmicpc.net/problem/5545*/
// �������� �׸��� ����
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int N, A, B, D_C, result = 0, T_C = 0;

	cin >> N >> A >> B >> D_C;

	vector <int> arr(N);
	for (int i = 0; i < N; i++) cin >> arr[i];

	sort(arr.begin(), arr.end(), greater<int>()); //������ ������ ������������ ����

	int max = D_C / A; //���츸 �Ծ����� �ִ��� ������ ���

	for (int i = 0; i < N; i++)
	{
		D_C = D_C + arr[i];
		T_C = A + (B * (i + 1));
		result = D_C / T_C; // ������ ���� �������
		if (result > max) // ������ �ִ��Ͻ� max���� result�� 
		{
			max = result;
		}
	}

	cout << max << "\n";
	return 0;
}