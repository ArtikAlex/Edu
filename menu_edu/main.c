#include "main.h"

int main() {
    int rez;
    menu();
    while ((rez = number(1, 4) != 4)) {
        printf("Вы выбрали вариант %d\n", rez);
        menu();
    }
    printf("Программа завершена.\n");
    return 0;
}

void menu(void)
{
    printf("Выберите один из следующих вариантов:\n");
    printf("1) копировать файлы     2) переместить файлы\n"
                   "3) удалить файлы        4) выйти из программы\n");
    printf("Введите номер выбранного варианта:\n");
}

int number(int low, int up) {
    int ans;
    int good;
    good = scanf("%d", &ans);
    while (good == 1 && (ans < low || ans > up)) {
        printf("%d является недопустимым вариантом,"
               "повтороите попытку\n", ans);
        menu();
        scanf("%d", &ans);
    }
    if (good != 1)
    {
        printf("Нечисловой ввод.\n");
        ans = 4;
    }
return ans;
}