/*
 * Copyright (C) 2023 Debayan Sutradhar (rnayabed) (debayansutradhar3@gmail.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef TARGETPROPERTIES_H
#define TARGETPROPERTIES_H

#include <string>

struct TargetProperties
{
    std::string path;
    bool parity = false;
    int32_t stopBits = -1;
    bool rtsCts = false;
    int32_t bits = -1;
    int32_t baud = -1;
};

#endif // TARGETPROPERTIES_H
