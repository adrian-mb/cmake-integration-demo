#include "configuration/Properties.h"

#include <iostream>

int main() {
    configuration::Properties p("test.properties");
    std::cout << p.Get("key", "default") << std::endl;
}
