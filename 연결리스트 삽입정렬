//연결리스트를 이용하여 양의 정수들을 삽입정렬하는 프로그램을 작성하라. 데이터의 맨 마지막에 음수를 멓는 방법을 이용하라.
// 매 정수가 삽입될 때 마다 현재 리스트에 있는 모든 노드의 값과 주소(괄호 안의 수)를 출력하라. 첫번째 정수가 음수이면 종료
//Enter integers>> 5 7 1 3 9 -5
//  5(000002C51CE7E8E0)
//  5(000002C51CE7E8E0) 7(000002C51CE7E520)
//  1(000002C51CE7EA70) 5(000002C51CE7E8E0) 7(000002C51CE7E520)
//  1(000002C51CE7EA70) 3(000002C51CE7E750) 5(000002C51CE7E8E0) 7(000002C51CE7E520)
//  1(000002C51CE7EA70) 3(000002C51CE7E750) 5(000002C51CE7E8E0) 7(000002C51CE7E520) 9(000002C51CE7E890)
//Enter integers>> -1
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node {
	int num;
	struct node* next;
}*fst,*pre,*cur,*new;
int main(void)
{
	while (1)
	{
		int count = 0, n = 0;
		fst = NULL;
		printf("Enter integers>> ");
		while (1) {
			scanf("%d", &n);
			if (n < 0) break;
			count++;
			new = malloc(sizeof(struct node));
			new->num = n;
			new->next = NULL;
			if (fst == NULL) {
				fst = new;
			}
			else {
				pre = NULL;
				cur = fst;
				while (new->num > cur->num) {
					pre = cur;
					cur = cur->next;
					if (cur == NULL) break;
				}
				if (pre == NULL) {
					fst = new;
					new->next = cur;
				}
				else {
					pre->next = new;
					new->next = cur;
				}
			}
			printf("  ");
			cur = fst;
			while (cur != NULL) {
				printf("%d(%p) ", cur->num, cur);
				cur = cur->next;
			}
			printf("\n");

		}
		if (count == 0) return 0;
		printf("\n");
	}
	return 0;
}
