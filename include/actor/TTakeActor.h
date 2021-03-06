#ifndef TTAKEACTOR_H
#define TTAKEACTOR_H

#include "JGeometry.h"
#include "types.h"
#include "actor/THitActor.h"

using namespace JGeometry;

/* Size -- 0x70 */
class TTakeActor : public THitActor
{
	public:
	~TTakeActor();
	
	void ensureTakeSituation();
	u32 moveRequest(TVec3<f32> const &);
	f32 getRadiusAtY(f32) const;
	bool isTaken() const;
	
	TTakeActor* takenActor; // _68
	THitActor* hitActor; // _6C
};

#endif // TTAKEACTOR_H