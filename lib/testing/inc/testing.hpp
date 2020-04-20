#ifndef TESTING_H
#define TESTING_H

#include <unity.h>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "../../challenge/inc/challenge.hpp"

std::vector<int> solution(std::vector<int> array);

void fixed_tests();

void random_tests();

void evaluation_tests();

#endif