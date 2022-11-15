#include <iostream>
#include <list>

int main() {
	std::list<const char*> stations{
		"Tokyo",
		"Yurakucho",
		"Shimbashi",
		"Hamamatsucho",
		"Tamachi",
		"Shinagawa",
		"Osaki",
		"Gotanda",
		"Meguro",
		"Ebisu",
		"Shibuya",
		"Harajuku",
		"Yoyogi",
		"Shinjuku",
		"Shin - Okubo",
		"Takadanobaba",
		"Mejiro",
		"Ikebukuro",
		"Sugamo",
		"Komagome",
		"Tabata",
		"Nippori",
		"Uguisudani",
		"Ueno",
		"Okachimachi",
		"Akihabara",
		"Kanda"
	};

	//1970年の山手線の駅一覧の出力
	std::cout << "---1970年の駅一覧---" << std::endl;
	for (const char* station : stations) {
		std::cout << station << std::endl;
	}

	//日暮里の前に1971年開業の西日暮里を挿入
	for (std::list<const char*>::iterator itr = stations.begin(); itr != stations.end(); ++itr) {
		if (*itr == "Nippori") {
			itr = stations.insert(itr, "Nishi - Nippori");
			++itr;
		}
	}

	//2019年の山手線の駅一覧の出力
	std::cout << "---2019年の駅一覧---" << std::endl;
	for (const char* station : stations) {
		std::cout << station << std::endl;
	}

	//品川の前に2020年開業の高輪ゲートウェイを挿入
	for (std::list<const char*>::iterator itr = stations.begin(); itr != stations.end(); ++itr) {
		if (*itr == "Shinagawa") {
			itr = stations.insert(itr, "Takanawa - Gateway");
			++itr;
		}
	}

	//2022年の山手線の駅一覧の出力
	std::cout << "---2022年の駅一覧---" << std::endl;
	for (const char* station : stations) {
		std::cout << station << std::endl;
	}

	return 0;
}