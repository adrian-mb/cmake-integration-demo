#include "Configuration.h"
#include "ConfigurationConstants.h"
#include "inih/INIReader.h"

#include <string>
#include <sstream>
#include <cstdlib>

using std::stringstream;
using std::string;

namespace configuration {

Configuration::Configuration() {
    INIReader reader(GetConfigurationFilePath());
    LoadServerConfiguration(reader);
}

string Configuration::GetConfigurationFilePath() {
    stringstream ss;
    ss << GetConfigurationDirectoryPath();
    ss << system::CONFIG_FILENAME;
    return ss.str();
}

string Configuration::GetConfigurationDirectoryPath() {
    stringstream ss;

    if (IsConfigurationDirectoryPathDefined()) {
        ss << ReadConfigurationDirectoryEnvar() << "/";
    }

    return ss.str();
}

bool Configuration::IsConfigurationDirectoryPathDefined() {
    return ReadConfigurationDirectoryEnvar() != nullptr;
}

char *Configuration::ReadConfigurationDirectoryEnvar() {
    return getenv(system::CONFIG_DIRECTORY_ENVAR.c_str());
}

void Configuration::LoadServerConfiguration(INIReader &reader) {
    this->server_port = reader.GetInteger(
            server::SECTION_SERVER,
            server::PORT,
            server::PORT_DEFAULT);
}

long int Configuration::GetServerPort() const {
    return this->server_port;
}

}
