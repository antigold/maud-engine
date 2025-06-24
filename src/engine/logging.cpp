// MAUD ENGINE LOGGING CODE
//
// this code will have debug output log stuff with colors
// "put()"

// FOR NOW COLORS ONLY WORK FOR LINUX I DONT HAVE WINDOWS
#include "logging.h"

void put(LogLevel level, const std::string& message) {
    switch (level) {
        case INFO_CODE:
            std::cout << "[\033[1;36mINFO\033[0m] " << message << std::endl;
            break;
        case WARN_CODE:
            std::clog << "[\033[1;33mWARNING\033[0m] " << message << std::endl;
            break;
        case ERROR_CODE:
            std::cerr << "[\033[1;31mERROR\033[0m] " << message << std::endl;
            break;
        case FOLLOW_CODE:
            std::cout << " └─ " << message << std::endl;
            break;
        default:
            std::cout << "[OUTPUT] " << message << std::endl;
    }
}