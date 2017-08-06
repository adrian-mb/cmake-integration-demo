#ifndef PROPERTIES_H_
#define PROPERTIES_H_

#include "inih/INIReader.h"

#include <string>

namespace configuration {

class Properties {
private:
    static string const CFG_DIR_ENVAR;

    INIReader reader;

    std::string GetConfigurationFilePath(std::string const &filename);

    string GetConfigurationDirectoryPath();

    bool IsConfigurationDirectoryPathDefined();

    char *ReadConfigurationDirectoryEnvar();

public:

    Properties(std::string const &filename);

    std::string Get(std::string const &key, std::string const &default_value);

    bool GetBool(std::string const &key, bool default_value);

    long int GetLongInt(std::string const &key, long int default_value);

};

}

#endif
