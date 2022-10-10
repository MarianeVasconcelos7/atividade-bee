#include "./Unity/src/unity.h"
#include "./bee_1132.h"

void setUp(void){

};

void tearDown(void){

};

void test_check_bigger(void) {
 
    TEST_ASSERT_FALSE(check_bigger(1,2));
    TEST_ASSERT_TRUE(check_bigger(2,1));
    TEST_ASSERT_EQUAL(0, check_bigger(5,5));
    TEST_ASSERT_EQUAL(0, check_bigger(0,0));

};

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_check_bigger);
    return UNITY_END();
}




