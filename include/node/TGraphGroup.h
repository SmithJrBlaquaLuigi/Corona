#ifndef TGRAPHGROUP_H
#define TGRAPHGROUP_H

#include "JDrama.h"
#include "types.h"
#include "node/TGraphWeb.h"

using namespace JDrama;

class TGraphGroup
{
    public:
    TGraphGroup(void *);

    void perform(u32, TGraphics *);
    TGraphWeb* getGraphByName(char const *graphName);
    void initGraphGroup();

    void* _0;
    u32 _4;
    u32* _8;
    TGraphWeb* graphWeb; // _C
};

#endif // TGRAPHGROUP_H