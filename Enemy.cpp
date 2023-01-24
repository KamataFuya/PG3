#include "Enemy.h"
#include <stdio.h>

//メンバ関数ポインタテーブルの用意
void (Enemy::* Enemy::pFuncTable[])() = {
	&Enemy::Approach, // [0]
	&Enemy::Shoot,    // [1]
	&Enemy::GetAway   // [2]
};

Enemy::Enemy(){
	phase_ = 0;
}

Enemy::~Enemy(){}

void Enemy::Approach(){
	printf("近づく\n");
}

void Enemy::Shoot(){
	printf("弾を撃つ\n");
}

void Enemy::GetAway(){
	printf("離脱する\n");
}

void Enemy::Update(){
	//デバッグ用
	printf("phase_ : %d\n", phase_);
	//現在の行動フェーズを実行する
	(this->*pFuncTable[phase_])();
	//次の行動フェーズに移行する
	phase_++;
	if (phase_ > 2) {
		phase_ = 0;
	}
}

void Enemy::Draw(){
	printf("(enemy draw)\n");
}
