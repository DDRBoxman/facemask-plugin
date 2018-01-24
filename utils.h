/*
* Face Masks for SlOBS
*
* Copyright (C) 2017 General Workings Inc
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
*/
#pragma once
#include <string>
#include <fstream>
#include <vector>
#include "base64.h"

// ALIGNED : macro to align a memory address to 16b boundary
#define ALIGNED(XXX) (((size_t)(XXX) & 0xF) ? (((size_t)(XXX) + 0x10) & 0xFFFFFFFFFFFFFFF0ULL) : (size_t)(XXX))


namespace Utils {

	extern const char* GetTempPath();
	extern const char* GetTempFileName();
	extern const char* Base64ToTempFile(std::string base64String);
	extern void DeleteTempFile(std::string filename);
	extern std::vector<std::string> ListFolder(std::string path, std::string glob="*");
	extern std::vector<std::string> split(const std::string &s, char delim);
	extern std::string dirname(const std::string &p);
}
