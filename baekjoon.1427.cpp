#include <iostream>
#include <algorithm> //���������� ���� ȣ��

using namespace std;

int main(void)
{
	string a;
	cin >> a;
	int* arr = new int[a.length()]; //���ڿ��� ������ŭ �迭 �����Ҵ�

	for (int i = 0; i < a.length(); i++)
	{
		arr[i] = a[i]; //���ڿ��� ���ڸ� ��Ʈ������ �ٲ� �״�� arr�迭�� ����
	}

	sort(arr, arr + a.length(), greater<>()); // greater<>()�� ����� ��������

	for (int i = 0; i < a.length(); i++)
	{
		cout << char(arr[i]); //��Ʈ������ �ٲ� ���ڸ� �ٽ� ���ڷ� �ٲ㼭 ���
	}
	return 0;
}