#include "library.h"

int main(void) {
    int urns[5] = {100, 200, 300, 400, 500};
    int *ptr1, *ptr2, *ptr3;
    ptr1 = urns;
    ptr2 = &urns[2];

    printf("Значение указателя, разыменованный указатель, адрес указателя:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p", ptr1, *ptr1, &ptr1);
    ptr3 = ptr1 + 4;
    printf("\nсложение значения int с указателем:\n");
    printf("ptr1 + 4 = %p, *(ptr4 + 3) = %d\n", ptr1 + 4, *(ptr1 +3));
    ptr1++;
    printf("\nзначения после выполнения операции ptr1++:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptrl = %p\n", ptr1, *ptr1, &ptr1);
    ptr2--;
    printf("Значения полсе выполнения операции --ptr2:\n");
    printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);
    --ptr1;
    ++ptr2;
}
