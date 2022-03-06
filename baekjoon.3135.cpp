/*https://www.acmicpc.net/problem/3135*/
//  �׸��� ����
// A -> B �� ������ 1�� �����̴� A-B�� ��� �ٿ� �̸� �����Ǿ� �ִ� ���ļ��� �־����� ������ ���ļ����� B�ΰ��µ� ���� ��ư���� �ּڰ��� �񱳸� �Ѵ�.

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int A, B, N;
	cin >> A >> B >> N;
	
	vector <int> arr(N);

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		if (arr[i] == B) // B���� �̸� �����Ǿ� �ִٸ� 1���� ������ �ȴ�.
		{
			cout << 1 << "\n";
			return 0;
		}
	}

	int min = abs(A - B); // A - B�� �������� ��´�.
	
	for (int i = 0; i < N; i++)
	{
		if (min > abs(arr[i] - B)) // �����Ǿ� �ִ� ���ļ��� �񱳸� �Ѵ�.
		{
			min = abs(arr[i] - B) + 1; // ���� �� ������ min�� �����Ǿ� �ִ� ���ļ����� B�� ���ְ� 1�� ���Ѱ��� min���� ����
		}
	}

	cout << min << "\n";
	
	return 0;
}