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

#ifndef OPENSCAM_AABB_H
#define OPENSCAM_AABB_H

#include <openscam/Geom.h>
#include <openscam/cutsim/Move.h>

#include <vector>


namespace OpenSCAM {
  class AABB : public Rectangle3R {
    AABB *left;
    AABB *right;
    const Move *move;

  public:
    AABB(AABB *nodes);
    AABB(const Move *move, const Rectangle3R &bbox) :
      Rectangle3R(bbox), left(0), right(0), move(move) {}
    ~AABB();

    AABB *prepend(AABB *list);
    AABB *split(unsigned count);

    Rectangle3R getBounds() const {return *this;}
    const Move *getMove() const {return move;}
    unsigned getTreeHeight() const;
    unsigned getLeafCount() const;

    void collisions(const Vector3R &p, real time,
                    std::vector<const Move *> &moves);
    void draw(bool leavesOnly = true, unsigned height = 1, unsigned depth = 0);
  };
}

#endif // OPENSCAM_AABB_H

