/*https://www.acmicpc.net/problem/10824*/
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string A, B, C, D; // �� ���� ��ġ�� ���ؼ� ���ڿ��� ���ڸ� �Է¹޴´�.
	cin >> A >> B >> C >> D;
	
	cout << stoll(A + B) + stoll(C + D) << "\n"; //���ڿ��� long long���� �ٲ��༭ ���Ѵ�
	return 0;
}