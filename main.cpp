#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct cell
{
	int value;
	struct cell* next;
}CELL;
void create(CELL* list, int data)
{
	CELL* number;
	number = (CELL*)malloc(sizeof(CELL));
	number->value = data;
	number->next = NULL;
	while (list->next != NULL)
	{
		list = list->next;
	}
	list->next = number;
}
void index(CELL* list)
{

	printf("[");
	while (list->next != NULL)
	{
		list = list->next;

		printf("%d", list->value);
		printf(",");
	}
	printf("]\n");
}
int main()
{
	int data;
	CELL head;
	head.next = nullptr;

	while (true)
	{
		printf("D‚«‚È”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
		printf("“ü—Í‚µ‚½’l:");
		scanf_s("%d", &data);
		printf("“ü—Í‚³‚ê‚½’l");
		create(&head, data);

		index(&head);
	}
	return 0;
}
