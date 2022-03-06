/*https://www.acmicpc.net/problem/1920*/
#include <iostream>
#include <algorithm> //����stl�� �������ؼ� 

using namespace std;

int arr[100001];
int N;

int binary(int x) //����Ž���� ���� �Լ�
{
	int start = 0;
	int end = N - 1;
	while (start <= end) //start �� end�� �Ѿ�� �ش��ϴ� ���ڰ� ���°��̹Ƿ� ���ѷ��� ����, 0�� ��ȯ
	{
		int mid = (start + end) / 2; // �߰����� ����
		if (arr[mid] > x) //�߰������� x�� �۴ٸ� �߰������� ���� ������ Ž��
		{
			end = mid - 1; // end���� mid - 1�� ����
		}
		else if (arr[mid] < x) // �߰������� x�� ũ�ٸ� �߰������� ū ������ Ž��
		{
			start = mid + 1; // start���� mid+1�� ����
		}
		else
		{
			return 1; // ���� ã���� 1�� ��ȯ(arr[mid] == x)
		}
	}
	return 0;
}

int main(void)
{
	cin.tie(0); ios_base::sync_with_stdio(0);
	int M;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + N); //����Ž���� ���ؼ� ������ ���ش�.
	cin >> M;
	while (M--)
	{
		int t;
		cin >> t;
		cout << binary(t) << "\n";
	}
	return 0;
}