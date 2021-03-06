#ifndef TGRAPHWEB_H
#define TGRAPHWEB_H

#include "JGeometry.h"
#include "types.h"
#include "node/TRailNode.h"
#include "node/TSplineRail.h"

using namespace JGeometry;

class TGraphWeb
{
    public:
    TGraphWeb(TRailNode *, char const *railName, u32 nodeCount);
    ~TGraphWeb();

    u32 getNeighborNodeIndexByFlag(u32, u32, u32) const;
    TVec3<f32> getNearestPosOnGraphLink(TVec3<f32> const &) const;
    bool isDummy() const;
    u32 indexToPoint(u32) const;
    bool startIsEnd() const;
    void initGoalIndex(Vec const &);
    void calcGraphDirection(u32);
    u32 findNearestVisibleIndex(TVec3<f32> const &, f32, f32, f32, u32) const;
    u32 findNearestNodeInde(TVec3<f32> const &, u32) const;
    u16 getEscapeDirLimited(u32, u32, TVec3<f32> const &, TVec3<f32> const &, f32, u32) const;
    u16 getEscapeFromMarioIndex(u32, u32, TVec3<f32> const &, u32) const;
    u16 getRandomNextIndex(u32, u32, u32) const;
    u16 getu16estNextIndex(u32, u32, u32) const;
    void translateNodes(TRailNode *);
    u16 filterRailNode(u32, TRailNode const *, TRailNode const *, TRailNode *) const;

    u32* _0; // some array
    TRailNode* railNode; // _4
    u32 nodeCount; //  _8
    u8* railName; // _C
    u32 nearestNodeIndex; // _10
    TSplineRail* splineRail; // _14
    u32* vtable; // _18
};

#endif // TGRAPHWEB_H