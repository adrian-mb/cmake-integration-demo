#include "Logger.h"

#include <string>

namespace logging {

explicit Logger::Logger(std::string const &tag) : tag(tag) {
}

explicit void Logger::info(std::string const &message) const {
}

explicit void Logger::info(char *message) const {
}

}
