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

#ifndef OPENSCAM_PROJECT_H
#define OPENSCAM_PROJECT_H

#include "ResolutionMode.h"
#include "NCFile.h"

#include <openscam/sim/ToolUnits.h>

#include <cbang/config/OptionProxy.h>
#include <cbang/util/OrderedDict.h>

#include <openscam/Geom.h>

#include <list>


namespace OpenSCAM {
  class ToolPath;
  class CutWorkpiece;
  class ToolTable;
  class ToolPath;


  class Project {
    cb::OptionProxy options;
    std::string filename;

    cb::SmartPointer<ToolTable> tools;

    double resolution;

    double workpieceMargin;
    std::string workpieceMin;
    std::string workpieceMax;

    typedef std::list<cb::SmartPointer<NCFile> > files_t;
    files_t files;
    bool watch;
    uint64_t lastWatch;

    bool dirty;

  public:
    Project(cb::Options &options, const std::string &filename = std::string());
    ~Project();

    bool isDirty() const {return dirty;}
    void markDirty();
    void markClean() {dirty = false;}

    const std::string &getFilename() const {return filename;}
    void setFilename(const std::string &filename);
    std::string getDirectory() const;

    const cb::SmartPointer<ToolTable> &getToolTable() const {return tools;}

    void setUnits(ToolUnits units);
    ToolUnits getUnits() const;

    ResolutionMode getResolutionMode() const;
    void setResolutionMode(ResolutionMode x);
    double getResolution() const {return resolution;}
    void setResolution(double x);
    void updateResolution();

    void load(const std::string &filename);
    void save(const std::string &filename = std::string());

    unsigned getFileCount() const {return files.size();}
    typedef files_t::const_iterator iterator;
    iterator begin() const {return files.begin();}
    iterator end() const {return files.end();}
    const cb::SmartPointer<NCFile> &getFile(unsigned index) const;
    cb::SmartPointer<NCFile> findFile(const std::string &filename) const;
    void addFile(const std::string &filename);
    void removeFile(unsigned i);
    bool checkFiles();

    void updateAutomaticWorkpiece(ToolPath &path);
    bool getAutomaticWorkpiece() const;
    void setAutomaticWorkpiece(bool x);

    double getWorkpieceMargin() const {return workpieceMargin;}
    void setWorkpieceMargin(double x);

    void setWorkpieceBounds(const Rectangle3R &bounds);
    Rectangle3R getWorkpieceBounds() const;

    static std::string encodeFilename(const std::string &filename);
    static std::string decodeFilename(const std::string &filename);
  };
}

#endif // OPENSCAM_PROJECT_H

