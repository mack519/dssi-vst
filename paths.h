
// -*- c-basic-offset: 4 -*-

/*
  dssi-vst: a DSSI plugin wrapper for VST effects and instruments
  Copyright 2012-2013 Filipe Coelho
  Copyright 2010-2011 Kristian Amlie
  Copyright 2004-2010 Chris Cannam
*/

#ifndef _PATHS_H_
#define _PATHS_H_

#include <string>
#include <vector>

class Paths
{
public:
    static std::vector<std::string> getPath(std::string envVar,
					    std::string deflt,
					    std::string defltHomeRelPath);
};

int shm_mkstemp(char *fileBase);

#endif
