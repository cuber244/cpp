#include <iostream>
using namespace std;


void mypair(int a = 1, int b = 2)
{
	cout << "a: " << a << " ";
	cout << "b: " << b << endl;
}
int main()
{
	mypair(3, 4); // 引数全部指定 
	mypair(5); // 最初だけ指定 
	mypair(); // 全く指定しない 
	
}

