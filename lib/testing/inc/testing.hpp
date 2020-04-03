#ifndef TESTING_H
#define TESTING_H

#include <unity.h>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "../../challenge/inc/challenge.hpp"

std::vector<int> solution(std::vector<int> array);

void sample_test1();
void sample_test2();
void sample_test3();

void extended_test1();
void extended_test2();
void extended_test3();
void extended_test4();
void extended_test5();
void extended_test6();

void random_tests();

void evaluation_tests();

#endif