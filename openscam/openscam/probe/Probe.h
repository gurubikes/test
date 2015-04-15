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

#ifndef OPENSCAM_PROBE_H
#define OPENSCAM_PROBE_H

#include "ProbeGrid.h"

#include <openscam/gcode/Printer.h>

#include <openscam/sim/Machine.h>
#include <openscam/sim/Controller.h>
#include <openscam/gcode/Interpreter.h>

#include <cbang/SmartPointer.h>
#include <cbang/io/Reader.h>

#include <string>

namespace cb {class Options;}

namespace OpenSCAM {
  class Word;

  class Probe :
    public Machine, public Controller, public Printer, public cb::Reader {
    Interpreter interp;

  public:
    double gridSize;
    double clearHeight;
    double probeDepth;
    double probeFeed;
    bool liftOff;
    double liftOffFeed;
    unsigned minMem;
    unsigned maxMem;
    bool useLastZExpression;
    std::string probePrefix;
    std::string probeSuffix;

  protected:
    unsigned pass;
    bool didOutputProbe;

    cb::Rectangle2D bbox;
    cb::SmartPointer<ProbeGrid> grid;

  public:
    Probe(cb::Options &options, std::ostream &stream);

    // From cb::Reader
    void read(const cb::InputSource &source);

    void outputProbe(ProbePoint &pt, unsigned address, unsigned count);
    void outputProbe();

    // From Controller
    void execute(Word *word, int vars);

    // From Processor
    void operator()(const cb::SmartPointer<Block> &block);
  };
}

#endif // OPENSCAM_PROBE_H

