
#include <iostream>
#include <vector> 

int main()
{
	struct Student {// 構造体を定義 
		char name[20];
		int math;
		int eng;
		
	};
	Student sarray[55]; // 今年は55名。来年は？転入転出があったら？ 
	Student chiba_u[3210]; // 全学だとこうなるかも。こんなの考えたくない 

	std::vector<int> iv; //vectorはstdの名前空間にある 
	std::vector<int>::iterator p; //pはポインタと同等。アスタリスク(*)はないけど 
	iv.push_back(10);
    iv.push_back(20);
	iv.push_back(30); // 以下同様に何個でも追加できる。 
	for (p = iv.begin(); p != iv.end(); ++p) {
		std::cout << *p << std::endl;
	}
	// もちろん配列と同じようにも書ける(sizeについては後述) 
	for (int i = 0; i < iv.size(); ++i) {
		std::cout << iv[i] << std::endl;
	}

}

