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

#ifndef OPENSCAM_SURFACE_H
#define OPENSCAM_SURFACE_H

#include <openscam/Geom.h>


namespace OpenSCAM {
  class STL;

  class Surface {
    bool finalized;
    unsigned vbuf;
    std::vector<float> normalLines;
    uint64_t normalsCount;

  public:
    Surface() : finalized(false), vbuf(0), normalsCount(0) {}
    virtual ~Surface();

    void finalize();
    void addNormalLine(const Vector3R &vertex, const Vector3R &normal);

    virtual uint64_t getCount() const = 0;
    virtual Rectangle3R getBounds() const = 0;
    virtual void draw() = 0;
    virtual void drawNormals();
    virtual void exportSTL(STL &stl) = 0;
    virtual void smooth() = 0;
  };
}

#endif // OPENSCAM_SURFACE_H
