#include <cheat.h>

CHEAT_TEST(mathematics_still_work,
    cheat_assert(2 + 2 == 4);
    cheat_assert_not(2 + 2 == 5);
)
//https://stackoverflow.com/questions/65820/unit-testing-c-code
