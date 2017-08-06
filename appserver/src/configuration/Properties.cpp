#include "Properties.h"
#include "inih/INIReader.h"

#include <string>
#include <sstream>

namespace configuration {

std::string const Properties::CFG_DIR_ENVAR = "APPSERVER_CFG";

Properties::Properties(std::string const &filename) :
    reader(GetConfigurationFilePath(filename)) {
}

string Properties::GetConfigurationFilePath(std::string const &filename) {
    std::stringstream ss;
    ss << GetConfigurationDirectoryPath();
    ss << filename;
    return ss.str();
}

string Properties::GetConfigurationDirectoryPath() {
    std::stringstream ss;

    if (IsConfigurationDirectoryPathDefined()) {
        ss << ReadConfigurationDirectoryEnvar() << "/";
    }

    return ss.str();
}

bool Properties::IsConfigurationDirectoryPathDefined() {
    return ReadConfigurationDirectoryEnvar() != nullptr;
}

char *Properties::ReadConfigurationDirectoryEnvar() {
    return getenv(CFG_DIR_ENVAR.c_str());
}

std::string Properties::Get(std::string const &key, std::string const &default_value) {
    return reader.Get("", key, default_value);
}

bool Properties::GetBool(std::string const &key, bool default_value) {
    return reader.GetBoolean("", key, default_value);
}

long int Properties::GetLongInt(std::string const &key, long int default_value) {
    return reader.GetInteger("", key, default_value);
}

}
