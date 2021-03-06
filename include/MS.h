#ifndef MS_H
#define MS_H

#include "JGeometry.h"
#include "types.h"

using namespace JGeometry;

// a bunch of functions starting with "Ms" that I feel are important to document
f32 MsVECMag2(Vec *);
void MsVECNormalize(Vec *, Vec *);
bool MsIsInSight(TVec3<f32> const &, f32, TVec3<f32> const &, f32, f32, f32);
void MsMtxSetTRS(f32 *[4], f32, f32, f32, f32, f32, f32, f32, f32, f32);
void MsMtxSetXYZRPH(f32 *[4], f32, f32, f32, u16, u16, u16);
void MsMtxSetRotRPH(f32 *[4], f32, f32, f32);
void MsGetRotFromZaxis(TVec3<f32> const &);

#endif // MS_H