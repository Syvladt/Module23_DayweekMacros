// После заданий из 20 модуля не отпускает чувство
// что где-то есть подвох.

#include "DayweekMacros.h"
#include <iostream>

#define DAY_1 "Monday"
#define DAY_2 "Tuesday"
#define DAY_3 "Wednesday"
#define DAY_4 "Thursday"
#define DAY_5 "Friday"
#define DAY_6 "Saturday"
#define DAY_7 "Sunday"

#define DAY_OF_WEEK(num) DAY_ ## num

int main() {
    std::cout << DAY_OF_WEEK(7);
    return 0;
}
