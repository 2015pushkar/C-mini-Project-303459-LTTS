/**
 * @file test_TIC-TAC-TOE.c
 * @author Pushkar Pramod Wani (pushkarwani2015@gmail.com)
 * @brief Test file for Unity check
 * @version 0.1
 * @date 2021-07-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "unity.h"
#include "Header_for_TIC.h"
void setUp()
{
}
void tearDown()
{
}

/*void test_check_horiziontal(void)
{
    TEST_ASSERT_EQUAL(1,Win_Lose_CHECK(box[1]==box[2] && box[2]==box[3]));
    TEST_ASSERT_EQUAL(1,Win_Lose_CHECK(box[4]==box[5] && box[5]==box[6]));
    TEST_ASSERT_EQUAL(1,Win_Lose_CHECK(box[7]==box[8] && box[8]==box[9]));
}
void test_check_vertical(void)
{
 
  TEST_ASSERT_EQUAL(1,Win_Lose_CHECK(box[1]==box[4] && box[4]==box[7]));
  TEST_ASSERT_EQUAL(1,Win_Lose_CHECK(box[2]==box[5] && box[5]==box[8]));
  TEST_ASSERT_EQUAL(1,Win_Lose_CHECK(box[3]==box[6] && box[6]==box[9]));
}
void test_check_diagonal(void)
{
  TEST_ASSERT_EQUAL(1,Win_Lose_CHECK(box[1]==box[5] && box[5]==box[9]));
  TEST_ASSERT_EQUAL(1,Win_Lose_CHECK(box[3]==box[5] && box[5]==box[7]));
}*/

int main(void)
{

  UNITY_BEGIN();
  /*RUN_TEST(test_check_horiziontal);
  RUN_TEST(test_check_vertical);
  RUN_TEST(test_check_diagonal);*/
  return UNITY_END();

}