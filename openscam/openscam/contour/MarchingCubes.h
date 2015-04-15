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

#ifndef OPENSCAM_MARCHING_CUBES_H
#define OPENSCAM_MARCHING_CUBES_H

#include "ContourGenerator.h"
#include "FieldFunction.h"
#include "ElementSurface.h"

#include <openscam/Geom.h>


namespace OpenSCAM {
  class MarchingCubes : public ContourGenerator {
    bool tetrahedrons;
    cb::SmartPointer<ElementSurface> surface;

    unsigned totalCells;
    unsigned completedCells;

  public:
    MarchingCubes(bool tetrahedrons) : tetrahedrons(tetrahedrons) {}

    // From ContourGenerator
    cb::SmartPointer<Surface> getSurface() {return surface;}
    void run(FieldFunction &func, const Rectangle3R &bbox, real step);

  protected:
    void march(FieldFunction &func, const Vector3R &p,
               const Vector3R &scale, const cb::Vector3U &steps);
    void marchCube(FieldFunction &func, const Vector3R &p,
                   const Vector3R &scale);
    void marchTetrahedron(FieldFunction &func, Vector3R *position,
                          bool *inside);
    void marchTetrahedrons(FieldFunction &func, const Vector3R &p,
                           const Vector3R &scale);
  };
}

#endif // OPENSCAM_MARCHING_CUBES_H
