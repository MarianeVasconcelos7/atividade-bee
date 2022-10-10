#include "./Unity/src/unity.h"
#include "./bee_1143.h"

void setUp(void){

};
void tearDown(void){

};
void test_check_bigger(void)
{
    TEST_ASSERT_EQUAL(16, check_bigger_quadrado(4));
    TEST_ASSERT_EQUAL(25, check_bigger_quadrado(5));
    TEST_ASSERT_EQUAL(27, check_bigger_cubo(3));
    TEST_ASSERT_EQUAL(8, check_bigger_cubo(2));
};
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_check_bigger);
    return UNITY_END();
}