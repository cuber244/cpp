
#include <iostream>
#include <vector> 

int main()
 {
	std::vector<int> iv;
	std::vector<int>::iterator it; //イテレータの変数名としてはitは定番
	iv.push_back(10);
	iv.push_back(20);
	iv.push_back(30);
	iv.push_back(40);// vectorは基本末尾にデータを追加する 
		for (it = iv.begin(); it != iv.end(); ++it)
			std::cout << *it << std::endl;
			for (int i = 0; i < (int)iv.size(); ++i) // size()要素数を返す 
			std::cout << iv.at(i) << std::endl; // at(n) n番目の要素を返す iv[n]と同義 
		
	iv.insert(iv.begin(), -10); // 挿入 
		for (it = iv.begin(); it != iv.end(); ++it)
			std::cout << *it << std::endl;
		iv.erase(iv.end() - 1); // 末端の要素を削除 end()位置には要素はないので -1  for(it=iv.begin(); it != iv.end(); ++it) 
			std::cout << *it << std::endl;
		iv.clear();
		for (it = iv.begin(); it != iv.end(); ++it) // このループは回らない（要素がない）  std::cout << *it << std::endl; 
			std::cout << "cleared!\n";
}


