
#include <iostream> 
#include <string> // string型を使いたい 
#include <vector> 

class Student {
private:
	std::string name;
	int age;
	int no; // 学生証番号 
	public:
	Student(std::string a1, int a2, int a3) : name(a1), age(a2), no(a3) {}
	void show() {
		std::cout << "名前：" << name << std::endl;
		std::cout << "年齢：" << age << std::endl;
		15. std::cout << "番号：" << no << std::endl;
	}
};
int main()
	{
	std::vector<Student> sv;
	// std::vectorr<Student>::iterator it; // ここで書かないで、以下のようなことも・・・ 
	sv.push_back(Student("相田みつ", 22, 1));
	25. sv.push_back(Student("伊藤貞子", 21, 2));
	sv.push_back(Student("上田祥子", 23, 3));
	// 自分のデータを入れてみる。 
	for (std::vector<Student>::iterator it = sv.begin(); it != sv.end(); ++it) // 長いけどよく見るので 30. { 
		it->show();
	// または (*it).show();  
}




