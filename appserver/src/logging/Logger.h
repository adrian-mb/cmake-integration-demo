#include <string>

namespace logging {

class Logger {
private:
    const std::string tag;

public:
    explicit Logger(std::string const &tag);

    explicit void info(std::string const &message) const;
    explicit void info(char *message) const;
};

}
