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

/*
  This file was derived from JSEdit from the Ofi Labs X2 project.

  Copyright (C) 2011 Ariya Hidayat <ariya.hidayat@gmail.com>
  Copyright (C) 2010 Ariya Hidayat <ariya.hidayat@gmail.com>

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are met:

  * Redistributions of source code must retain the above copyright
  notice, this list of conditions and the following disclaimer.
  * Redistributions in binary form must reproduce the above copyright
  notice, this list of conditions and the following disclaimer in the
  documentation and/or other materials provided with the distribution.
  * Neither the name of the <organization> nor the
  names of its contributors may be used to endorse or promote products
  derived from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
  DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
  ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
  THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef OPENSCAM_GCODEHIGHLIGHTER_H
#define OPENSCAM_GCODEHIGHLIGHTER_H

#include "Highlighter.h"

#include <openscam/gcode/Tokenizer.h>


namespace OpenSCAM {
  class Tokenizer;

  class GCodeHighlighter : public Highlighter {
    QSet<QString> ops;
    QSet<QString> functions;
    QSet<QString> ocodes;

  public:
    GCodeHighlighter(QTextDocument *parent = 0);

    typedef Tokenizer::Token_T Token;
    using Highlighter::setFormat;
    void setFormat(const Token &start, const Token &end, ColorComponent cc);
    void setFormat(const Token &token, ColorComponent cc);

  protected:
    // From QSyntaxHighlighter
    void highlightBlock(const QString &text);

    void comment(Tokenizer &tokenizer);
    void word(Tokenizer &tokenizer);
    void assign(Tokenizer &tokenizer);
    void ocode(Tokenizer &tokenizer);

    void numberRefOrExpr(Tokenizer &tokenizer);
    void expression(Tokenizer &tokenizer);
    void unaryOp(Tokenizer &tokenizer);

    void primary(Tokenizer &tokenizer);

    void quotedExpr(Tokenizer &tokenizer);
    void functionCall(Tokenizer &tokenizer);
    void number(Tokenizer &tokenizer);
    void reference(Tokenizer &tokenizer);
  };
}

#endif // OPENSCAM_GCODEHIGHLIGHTER_H

