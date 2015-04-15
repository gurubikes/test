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

#ifndef OPENSCAM_TOOL_PATH_VIEW_H
#define OPENSCAM_TOOL_PATH_VIEW_H

#include <openscam/Geom.h>
#include <openscam/cutsim/ToolPath.h>
#include <openscam/value/ValueGroup.h>

#include <cbang/SmartPointer.h>
#include <cbang/StdTypes.h>

#include <vector>

namespace OpenSCAM {
  class ToolPathView {
    ValueGroup values;
    cb::SmartPointer<const ToolPath> path;

    bool byRemote;
    double ratio;
    Vector3R position;
    unsigned line;

    double totalTime;
    double totalDistance;

    double currentTime;
    double currentDistance;
    Vector3R currentPosition;
    unsigned currentLine;
    Move currentMove;

    bool dirty;

    std::vector<float> vertices;
    std::vector<float> colors;

    unsigned colorVBuf;
    unsigned vertexVBuf;
    unsigned numVertices;
    unsigned numColors;

  public:
    ToolPathView(ValueSet &valueSet);
    ~ToolPathView();

    cb::SmartPointer<const ToolPath> getPath() const {return path;}
    void setPath(const cb::SmartPointer<const ToolPath> &path);

    Rectangle3R getBounds() const
    {return path.isNull() ? Rectangle3R() : path->getBounds();}

    void setByRatio(double ratio);
    void setByRemote(const Vector3R &position, unsigned line);

    void incTime(double amount = 1);
    void decTime(double amount = 1);

    double getTime() const {return currentTime;}
    double getRemainingTime() const {return totalTime - currentTime;}
    double getTotalTime() const {return totalTime;}
    double getTimeRatio() const {return currentTime / totalTime;}
    double getPercentTime() const {return getTimeRatio() * 100;}

    double getDistance() const {return currentDistance;}
    double getRemainingDistance() const
    {return totalDistance - currentDistance;}
    double getTotalDistance() const {return totalDistance;}
    double getPercentDistance() const
    {return currentDistance / totalDistance * 100;}

    const Vector3R &getPosition() const {return currentPosition;}
    unsigned getProgramLine() const {return currentLine;}
    const Move &getMove() const {return currentMove;}

    unsigned getTool() const {return getMove().getTool();}
    double getFeed() const {return getMove().getFeed();}
    double getSpeed() const {return getMove().getSpeed();}
    const char *getDirection() const;

    void updateState();
    void update();
    void draw();
  };
}

#endif // OPENSCAM_TOOL_PATH_VIEW_H

