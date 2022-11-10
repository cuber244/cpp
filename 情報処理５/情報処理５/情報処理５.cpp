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

	int data[5]; // 整数リテラルで指定する場合。 
	data[0] = 1;
	data[1] = 2;
	data[2] = 3;
	data[3] = 4;
	data[4] = 5;
	// 初期化は、こうも書ける。この場合個数は自動で設定される。 
	 // int data[] = {1,2,3,4,5}; 
	for (int i = 0; i < 5; i++) {// ①ここの数値を変えてみると… 
		cout << i << ": " << data[i] << endl;

	//キーボードからの入力
	/*
    const int NUM_DATA = 5;
		int data[NUM_DATA];
		for (int i = 0; i < NUM_DATA; i++) {
			 cout << i + 1 << "番目の値を入力してください\n";
			cin >> data[i];
		}
		for (int i = 0; i < NUM_DATA; i++) cout << i + 1 << ": " << data[i] << endl;

    */
		
		const int NUM_STUDENDS = 50;
		int engs[NUM_STUDENTS];

		for (int i = 0; i < NUM_STUDENTS; i++) engs[i] = get_rand() % 100;

		int total = 0;
		for (int i = 0; i < NUM_STUDENDS; i++) total  += engs[i];

		cout << "英語の平均点:" << total / (double)NUM_STUDENDS << endl;

		

	}


	

}
