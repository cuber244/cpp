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
	/*

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

	//int data[5]; // 整数リテラルで指定する場合。 
	//data[0] = 1;
	//data[1] = 2;
	//data[2] = 3;
	//data[3] = 4;
	//data[4] = 5;
	int data[] = { 1,2,3,4,5 };
	// 初期化は、こうも書ける。この場合個数は自動で設定される。 
	 // int data[] = {1,2,3,4,5}; 
	for (int i = 0; i < 1; i++) {// ①ここの数値を変えてみると… 
		cout << i << ": " << data[i] << endl;

	//キーボードからの入力
/*
* const int NUM_DATA = 5;
		int data[NUM_DATA];
		for (int i = 0; i < NUM_DATA; i++) {
			 cout << i + 1 << "番目の値を入力してください\n";
			cin >> data[i];
		}
		for (int i = 0; i < NUM_DATA ; i++) cout << i + 1 << ": " << data[i] << endl;
		
		

    
		const int NUM_STUDENDS = 50;
		int engs[NUM_STUDENTS];

		for (int i = 0; i < NUM_STUDENTS; i++) engs[i] = get_rand() % 100;

		int total = 0;
		for (int i = 0; i < NUM_STUDENDS; i++) total  += engs[i];
		cout << "合計点:" << total<< "点" << endl;
		cout << "英語の平均点:" << total / (double)NUM_STUDENDS << endl;

		
		//コード5-6 多次元配列の定義、代入、初期化
		int student[2][50]; // ２次元の配列 student[i][j] は j 番目の学生の i 番目の科目の得点 
		student[0][0] = 80;
		student[1][0] = 76; // 代入の様子は次元が増えても同じ 
		int a[5][2] = { {0,0},{1,1},{2,2},{3,3},{4,4} }; // 初期化は {} を入れ子にする 
		int kuku[9][9];
		 for (int i = 0; i < 9; i++)
			for (int j = 0; j < 9; j++) kuku[i][j] = (i + 1) * (j + 1);
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++)
				cout << kuku[i][j] / 10 << kuku[i][j] % 10 << " ";
			cout << endl;
		}
		//3次元配列
		// int score[2][3][5]; // 普通に宣言するとこんな感じ 
		int score[2][3][5] = {
		{
		 { 111, 112, 113, 114, 115},{ 121, 122, 123, 124, 125},{ 131, 132, 133, 134, 135} },{
		{ 211, 212, 213, 214, 215},{ 221, 222, 223, 224, 225},{ 231, 232, 233, 234, 235} }
		};
		*/

		//⽂字の配列 あるいは ⽂字列 
		char str[20]; // char str[] = "initialize"; // もあり。こちらはサイズを自動で決めてくれる 
		str[0] = 'i';
		str[1] = 'n';
		int i = 0;
			str[9] = 'e'; // ここまでなら単なる文字の配列 
		str[10] = '\0'; // これを付けると 文字列 になる。終端を表す特別な値（文字）。NULL文字 
		// 中身の確認 
		//int i = 0;
		while (str[i]) // str[i] != '\0' と書いても良い、けど普通書かない 
		{
			cout << str[i++] << " ";
		}
		 cout << endl;



	}


		

