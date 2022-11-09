#include <iostream> 
#include <random> // 乱数生成のためのライブラリ・ヘッダファイル 
using namespace std;
// ランダムな整数を得るための関数。(関数については次回) 
unsigned int get_rand()
{ // 64ビット幅の乱数を生成する関数 
	static std::mt19937_64 mt64(0);
	return mt64();
}
int main()
{
	const int NUM_STUDENTS = 50; //学生数を表す定数。 
	int engs[NUM_STUDENTS], maths[NUM_STUDENTS];
	//engs[0] = 90; 1つ1つ代入してもいいですが、面倒なので 
	//engs[1] = 62; 
	for (int i = 0; i < NUM_STUDENTS; i++) engs[i] = get_rand() % 100;
	for (int i = 0; i < NUM_STUDENTS; i++) maths[i] = get_rand() % 100;
	cout << "英語" << endl;
	for (int i = 0; i < NUM_STUDENTS; i++) cout << i << ": " << engs[i] << endl;
	cout << "数学" << endl;
	for (int i = 0; i < NUM_STUDENTS; i++) cout << i << ": " << maths[i] << endl;
}
