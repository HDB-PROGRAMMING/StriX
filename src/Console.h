#pragma once

#ifndef StriX_Console
 #define StriX_Console

 #if (defined(_WIN32) || defined(WIN32) || defined(__MINGW32__) || defined(__BORLANDC__))
  #include <Windows.h>

  #include "consts/console.h"
  #include "prototypes/console.h"
  #include "funcs/console.h"
 #else
  #error "Windows.h is required for the Console plug-in, and therefore Microsoft Windows (XP, Vista, 7, 8 or 10)"
 #endif
#endif