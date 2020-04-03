#ifdef UNIT_TEST

#include <Arduino.h>
#include <unity.h>
#include "../lib/testing/inc/testing.hpp"


void setup()
{
    delay(2000); // To establish serial connection to the device
    
    UNITY_BEGIN();
    RUN_TEST(sample_test1);
    RUN_TEST(sample_test2);
    RUN_TEST(sample_test3);
    RUN_TEST(extended_test1);
    RUN_TEST(extended_test2);
    RUN_TEST(extended_test3);
    RUN_TEST(extended_test4);
    RUN_TEST(extended_test5);
    RUN_TEST(extended_test6);
    RUN_TEST(random_tests);
    RUN_TEST(evaluation_tests);
    UNITY_END();
}

void loop()
{
}

#endif