#include <stdio.h>
#include "struc.h"
#include "print_list.h"

int main(void) {
    Gift list[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("이름 입력 : ");
        scanf("%s", list[i].name);
        printf("품목 선택(1.계란 2.우유 3.고기) : ");
        scanf("%d", &list[i].kind);

        switch (list[i].kind)
        {
        case EGG:
            list[i].amount.ea = 30;
            break;
        case MILK:
            list[i].amount.liter = 4.5;
            break;
        case MEAT:
            list[i].amount.kg = 0.6;
            break;
        }
    }

    printf("\n# 당첨자 출력 #\n");

    for (i = 0; i < 5; i++)
    {
        print_list(list[i]);
    }

    return 0;
}
