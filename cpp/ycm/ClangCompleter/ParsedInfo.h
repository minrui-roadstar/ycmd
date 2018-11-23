// Author: Minrui(hustminrui@126.com)

#ifndef YCMD_PARSEDINFO_H
#define YCMD_PARSEDINFO_H

#include "Highlight.h"
#include "Diagnostic.h"

#include <string>

namespace YouCompleteMe{
    struct ParsedInfo 
    {
        std::vector<Diagnostic> diags_;
        std::vector<Highlight> highlights_;
    };
}

#endif
