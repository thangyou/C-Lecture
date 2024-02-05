#include <stdio.h>

void print_list(Gift a);

void print_list(Gift a) {
    printf("이름 : %s, 선택품목 : ", a.name);

    switch (a.kind)
    {
    case EGG:
        printf("계란 %d개\n", a.amount.ea);
        break;
    case MILK:
        printf("우유 %.1lf리터\n", a.amount.liter);
        break;
    case MEAT:
        printf("고기 %.1lfkg\n", a.amount.kg);
        break;
    }
}