#include "SceneManager.h"
#include <stdio.h>

int main() {
	SceneManager* sceneManager = nullptr;
	sceneManager = SceneManager::GetInstance();
	int input;
	int sceneNum = 0;

	while (true) {
		//入力処理
		printf("Press to 1 Change ==> ");
		scanf_s("%d", &input);
		//1を押すとシーンが進む
		if (input == 1) {
			sceneManager->ChangeScene(sceneNum);
		}
		//0を押すとループから抜ける(終了)
		if (input == 0) {
			break;
		}
	}

	return 0;
}