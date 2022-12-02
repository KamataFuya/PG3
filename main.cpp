#include <stdio.h>
#include <stdlib.h>

//�P�������X�g�̍\���̂̒�`
typedef struct CELL{
	int num; //int�^ �Z���̒l���i�[
	struct CELL* next; //���ȎQ�ƍ\����
}CELL;

//�֐��̃v���g�^�C�v�錾

void Create(CELL* list, int data);
void Index(CELL* list);

int main() {
	int data; //���͂��ꂽ�l���i�[����ϐ�
	CELL firstCell; //�擪�̃Z���̐錾
	firstCell.next = nullptr; //VisualStudio�ł�next�ɉ��炩�̒l����������Ԃŏ����������̂ŁAnullptr��������

	while (true) {
		printf("�D���Ȑ�������͂��Ă�������\n");
		printf("���͂���l: ");
		scanf_s("%d", &data);
		printf("���͂��ꂽ�l�ꗗ : ");
		//�P�������X�g�̐���
		Create(&firstCell, data);
		//�\��
		Index(&firstCell);
		//9999�Ɠ��͂��ꂽ��while�����甲����(�I��)
		if (data == 9999) {
			break;
		}
	}
	return 0;
}

//�P�������X�g�����֐�
void Create(CELL* list, int data) {
	CELL* newCell; //�V�K�m�ۗp
	newCell = (CELL*)malloc(sizeof(CELL)); //�V�������X�g�̗̈���m��
	newCell->num = data; //�l����
	newCell->next = nullptr; //���̒l�͖����ƕ�����悤��nullptr�����Ă���
	//�Ō�̍��ڂɂȂ�܂�list���ړ����Ă���
	while (list->next != nullptr){
		list = list->next;
	}
	//�Ō�̍��ڂ̌��nullptr��ǉ�
	list->next = newCell;
}

//�P�������X�g��\������֐�
void Index(CELL* list) {
	printf("[");
	//���ڂ̒��Ɏ��ւ̃A�h���X�������Ă���Ƃ��͕\��������
	while (list->next != nullptr) {
		list = list->next; //main�֐��ŉ��������Ă��Ȃ�firstCell��錾���Ă���̂œ�ڂ���\��
		printf("%d,", list->num); //�\��
	}
	printf("]\n\n");
}