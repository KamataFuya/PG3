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

	//1970�N�̎R����̉w�ꗗ�̏o��
	std::cout << "---1970�N�̉w�ꗗ---" << std::endl;
	for (const char* station : stations) {
		std::cout << station << std::endl;
	}

	//���闢�̑O��1971�N�J�Ƃ̐����闢��}��
	for (std::list<const char*>::iterator itr = stations.begin(); itr != stations.end(); ++itr) {
		if (*itr == "Nippori") {
			itr = stations.insert(itr, "Nishi - Nippori");
			++itr;
		}
	}

	//2019�N�̎R����̉w�ꗗ�̏o��
	std::cout << "---2019�N�̉w�ꗗ---" << std::endl;
	for (const char* station : stations) {
		std::cout << station << std::endl;
	}

	//�i��̑O��2020�N�J�Ƃ̍��փQ�[�g�E�F�C��}��
	for (std::list<const char*>::iterator itr = stations.begin(); itr != stations.end(); ++itr) {
		if (*itr == "Shinagawa") {
			itr = stations.insert(itr, "Takanawa - Gateway");
			++itr;
		}
	}

	//2022�N�̎R����̉w�ꗗ�̏o��
	std::cout << "---2022�N�̉w�ꗗ---" << std::endl;
	for (const char* station : stations) {
		std::cout << station << std::endl;
	}

	return 0;
}