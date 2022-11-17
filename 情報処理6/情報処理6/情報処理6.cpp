#include <iostream>
#include <random> // 乱数生成のためのライブラリ・ヘッダファイル 

using namespace std;

unsigned int get_rand(); // プロトタイプ宣言（宣言だけで中身なし） 
int main()
{
	const int NUM_STUDENTS = 50;
	int eng[NUM_STUDENTS], math[NUM_STUDENTS];
	for (int i = 0; i < NUM_STUDENTS; i++) eng[i] = get_rand() % 100;
	for (int i = 0; i < NUM_STUDENTS; i++) math[i] = get_rand() % 100;
	cout << "英語" << endl;
	for (int i = 0; i < NUM_STUDENTS; i++) cout << i << ": " << eng[i] << endl;
	cout << "数学" << endl;
	for (int i = 0; i < NUM_STUDENTS; i++) cout << i << ": " << math[i] << endl;
}

unsigned int get_rand() // 実装はここで 
{ // 64ビット幅の乱数を生成する関数 
	static std::mt19937_64 mt64(0);
	return mt64();
	
}



