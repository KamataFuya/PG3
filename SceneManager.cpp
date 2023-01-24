#include "SceneManager.h"
#include <stdio.h>

SceneManager::SceneManager() {}

SceneManager::~SceneManager() {}

SceneManager* SceneManager::GetInstance() {
	//関数内static変数として宣言する
	static SceneManager instance;
	//ポインタを返す
	return &instance;
}

void SceneManager::ChangeScene(int &sceneNo) {
	if (sceneNo < 3) { //シーン3まで進める
		sceneNo += 1;
	}
	else {//3以降になったらループ
		sceneNo = 0;
	}
	//デバッグ用
	printf("sceneNo : %d\n", sceneNo);
}
