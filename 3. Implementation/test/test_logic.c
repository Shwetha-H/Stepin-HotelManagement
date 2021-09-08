#include "logic.h"
#include "unity.h"
#include <stdlib.h>

void setUp()
{
}

void tearDown()
{
}

void logic_add()
{
    addition();   
}

void logic_sub()
{
    subtraction();   
}

void logic_mul()
{
    multiplication();   
}

void logic_div()
{
    division();   
}

void logic_div()
{
    division();   
}

void logic_mod()
{
    modulus();   
}


void logic_fac()
{
    factorial();   
}

void logic_po()
{
    power();   
}
int main(void)
{
  UNITY_BEGIN();

 
  RUN_TEST(logic_add);
  RUN_TEST(logic_sub);
  RUN_TEST(logic_mul);
  RUN_TEST(logic_div);
  RUN_TEST(logic_mod);
  RUN_TEST(logic_fac);
  RUN_TEST(logic_po);

  
  return UNITY_END();
}
