#pragma once

#include "targetver.h"

#ifndef NOMINMAX
#define NOMINMAX
#endif

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <TlHelp32.h>

#include <spdlog/spdlog.h>
#include <spdlog/fmt/bundled/printf.h>

#include <locale>
#include <codecvt>
#include <string>
#include <fstream>
#include <mutex>
#include <MinHook/MinHook.h>
#include <sstream>
#include "Util.h"
#include "Console.h"
#include "ModuleScan.h"
#include "SigScanning.h"
#include "Squirrel.h"
#include "TTF2SDK.h"
