#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>

#include "configuration/Configuration.h"

int main() {
    configuration::Configuration config;
    std::cout << config.GetServerPort() << std::endl;
}
