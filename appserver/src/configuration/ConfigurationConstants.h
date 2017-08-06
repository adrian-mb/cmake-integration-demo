#ifndef CONFIGURATIONCONSTANTS_H_
#define CONFIGURATIONCONSTANTS_H_

#include <string>
using std::string;

namespace configuration {

    namespace system {
        string const CONFIG_DIRECTORY_ENVAR = "APPSERVER_CFG";
        string const CONFIG_FILENAME = "appserver.ini";
    }

    namespace server {
        string const SECTION_SERVER = "SERVER";
        string const PORT = "port";
        long int const PORT_DEFAULT = 8080;
    }
}

#endif
