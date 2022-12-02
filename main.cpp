#include <stdio.h>
#include <stdlib.h>

//単方向リストの構造体の定義
typedef struct CELL{
	int num; //int型 セルの値を格納
	struct CELL* next; //自己参照構造体
}CELL;

//関数のプロトタイプ宣言

void Create(CELL* list, int data);
void Index(CELL* list);

int main() {
	int data; //入力された値を格納する変数
	CELL firstCell; //先頭のセルの宣言
	firstCell.next = nullptr; //VisualStudioではnextに何らかの値が入った状態で初期化されるので、nullptrを代入する

	while (true) {
		printf("好きな数字を入力してください\n");
		printf("入力する値: ");
		scanf_s("%d", &data);
		printf("入力された値一覧 : ");
		//単方向リストの生成
		Create(&firstCell, data);
		//表示
		Index(&firstCell);
		//9999と入力されたらwhile文から抜ける(終了)
		if (data == 9999) {
			break;
		}
	}
	return 0;
}

//単方向リストを作る関数
void Create(CELL* list, int data) {
	CELL* newCell; //新規確保用
	newCell = (CELL*)malloc(sizeof(CELL)); //新しいリストの領域を確保
	newCell->num = data; //値を代入
	newCell->next = nullptr; //次の値は末尾と分かるようにnullptrを入れておく
	//最後の項目になるまでlistを移動していく
	while (list->next != nullptr){
		list = list->next;
	}
	//最後の項目の後にnullptrを追加
	list->next = newCell;
}

//単方向リストを表示する関数
void Index(CELL* list) {
	printf("[");
	//項目の中に次へのアドレスが入っているときは表示させる
	while (list->next != nullptr) {
		list = list->next; //main関数で何も入っていないfirstCellを宣言しているので二個目から表示
		printf("%d,", list->num); //表示
	}
	printf("]\n\n");
}