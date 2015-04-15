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

#ifndef OPENSCAM_MOVE_H
#define OPENSCAM_MOVE_H

#include "MoveType.h"

#include <tplang/Axes.h>

#include <openscam/Geom.h>
#include <openscam/sim/Tool.h>
#include <openscam/view/Color.h>

#include <ostream>

namespace OpenSCAM {
  class Move : public Segment3R, public MoveType {
  protected:
    MoveType type;
    tplang::Axes start;
    tplang::Axes end;
    unsigned tool;
    real feed;
    real speed;
    unsigned line;

    real dist;
    real time;
    real startTime;

  public:
    Move() : type(MoveType::MOVE_RAPID), tool(0), feed(0), speed(0), line(0),
             dist(0), time(0), startTime(0) {}
    Move(MoveType type, const tplang::Axes &start, const tplang::Axes &end,
         real startTime, unsigned tool, real feed, real speed, unsigned line);

    MoveType getType() const {return type;}
    const tplang::Axes &getStart() const {return start;}
    const tplang::Axes &getEnd() const {return end;}
    const Vector3R &getStartPt() const {return Segment3R::getStart();}
    const Vector3R &getEndPt() const {return Segment3R::getEnd();}
    unsigned getTool() const {return tool;}
    real getFeed() const {return feed;}
    real getSpeed() const {return speed;}
    unsigned getLine() const {return line;}

    real getDistance() const {return dist;}
    real getTime() const {return time;}
    real getStartTime() const {return startTime;}
    real getEndTime() const {return startTime + time;}

    Color getColor() const;

    Vector3R getEndPtAtTime(real time) const;

    void print(std::ostream &stream) const;
  };


  static inline
  std::ostream &operator<<(std::ostream &stream, const Move &m) {
    m.print(stream);
    return stream;
  }
}

#endif // OPENSCAM_MOVE_H
