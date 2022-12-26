#ifndef TEST_HOTEL_H
#define TEST_HOTEL_H
#define QUIT 5
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 255.00
#define HOTEL4 355.00
#define DISCOUNT 0.95
#define STARS "'**********************************'"
// отображает список возможных вариантов
int menu(void);

// возвращает количество суток, на которое бронируется номер
int getnights(void);

// вычисляет стоимость в зависимости от расценок и количества
// забронированных суток и отображает результтат
void showprice(double rate, int night);

#endif //TEST_HOTEL_H
