#include <iostream>
using namespace std;
namespace denis
{
	struct data
	{
		int a, b, c;
		int difirent(data & second) {
			int v = 0;
			int k = 0;
			int f = 0;
			int h = 0;
			int j;
			v = second.c - c;
			if (v > 4) {
				k = v / 4;
			}
			v = v * 365 + k;
			f = second.b - b;
			f = f * 31;
			h = second.a - a;
			j = v + f + h+2;

			return j;


			
		}

	};

}
void input(denis::data& A) {
	cin >> A.a >> A.b >> A.c;

}
void print(int j) {
	cout << j;
}
int main() {
	int j = 0;
	denis::data A, B;
	input(A);
	input(B);
	j = A.difirent(B);
	print(j);
}