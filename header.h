#include <iostream>
#include <stdlib.h>

struct node {
    int value;
    node* next;
};

int size;
int number;
const std::string italic = "\033[3m";
const std::string reset = "\033[0m";
const std::string bold = "\033[1m";
const std::string underline = "\033[4m";
const std::string color_cyan = "\033[36m";
const std::string yellow = "\033[33m";