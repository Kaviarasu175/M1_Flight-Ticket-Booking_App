#include "unity.h"
#include "func.h"

void setUp()
{

}
void tearDown()
{
  
}
void test_Reservation()
{
    int c=2;
    TEST_ASSERT_EQUAL(1,Reservation(c));
    
}

int main()
{
  UNITY_BEGIN();
  
  RUN_TEST(test_Reservation);
  return UNITY_END();
}