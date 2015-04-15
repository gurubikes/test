/******************************************************************************\

    OpenSCAM is an Open-Source CAM software.
    Copyright (C) 2011-2014 Joseph Coffland <joseph@cauldrondevelopment.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

\******************************************************************************/

#ifndef CBANG_ENUM_EXPAND
#ifndef MODAL_GROUP_H
#define MODAL_GROUP_H

#define CBANG_ENUM_NAME ModalGroup
#define CBANG_ENUM_NAMESPACE OpenSCAM
#define CBANG_ENUM_PATH openscam/gcode
#define CBANG_ENUM_PREFIX 3
#include <cbang/enum/MakeEnumeration.def>

#endif // MODAL_GROUP_H
#else // CBANG_ENUM_EXPAND

CBANG_ENUM_EXPAND(MG_ZERO,               0)
CBANG_ENUM_EXPAND(MG_MOTION,             1 << 0)
CBANG_ENUM_EXPAND(MG_PLANE,              1 << 1)
CBANG_ENUM_EXPAND(MG_LATHE,              1 << 2)
CBANG_ENUM_EXPAND(MG_DISTANCE,           1 << 3)
CBANG_ENUM_EXPAND(MG_FEED_RATE,          1 << 4)
CBANG_ENUM_EXPAND(MG_UNITS,              1 << 5)
CBANG_ENUM_EXPAND(MG_CUTTER_RADIUS,      1 << 6)
CBANG_ENUM_EXPAND(MG_TOOL_OFFSET,        1 << 7)
CBANG_ENUM_EXPAND(MG_RETURN_MODE,        1 << 8)
CBANG_ENUM_EXPAND(MG_COORD_SYSTEM,       1 << 9)
CBANG_ENUM_EXPAND(MG_STOPPING,           1 << 10)
CBANG_ENUM_EXPAND(MG_TOOL_CHANGE,        1 << 11)
CBANG_ENUM_EXPAND(MG_SPINDLE,            1 << 12)
CBANG_ENUM_EXPAND(MG_COOLANT,            1 << 13)
CBANG_ENUM_EXPAND(MG_OVERRIDE,           1 << 14)

#endif // CBANG_ENUM_EXPAND
