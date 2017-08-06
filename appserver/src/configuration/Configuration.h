#ifndef CONFIGURATION_H_
#define CONFIGURATION_H_

#include "inih/INIReader.h"

#include <string>

namespace configuration {

class Configuration final {

private:

    std::string GetConfigurationFilePath();

    std::string GetConfigurationDirectoryPath();

    bool IsConfigurationDirectoryPathDefined();

    char *ReadConfigurationDirectoryEnvar();

    void LoadServerConfiguration(INIReader &);

    long int server_port;

public:

    /*
     * Initialize INI file reader with provided ini_path.
     */
    explicit Configuration();

    /*
     * Return port on which server should listen.
     */
    long int GetServerPort() const;

};

}

#endif
