#define MAINPREFIX z
#define PREFIX flerken
#define QPREFIX "flerken"

#define AUTHOR Ghost
#define QAUTHOR QUOTE(AUTHOR)
#define LOGO_PATH QUOTE(z\ghost\addons\main\images\logo_256.paa)
#define URL "https://www.ghostsofbattle.com/"

#include "script_version.hpp"

#define VERSION MAJOR.MINOR
#define VERSION_AR MAJOR,MINOR,PATCH,BUILD

#define REQUIRED_VERSION 1.88

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(flerken - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(flerken - COMPONENT)
#endif
