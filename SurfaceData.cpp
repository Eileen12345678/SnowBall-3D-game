//
//  SurfaceData.cpp
//

#include "SurfaceData.h"

#include <cassert>

namespace
{
	const SurfaceData SURFACE_DATA[SURFACE_TYPE_COUNT] =
	{
		//      interpolation
		//  speed   factor  friction
		{	5.0,	0.02,	0.0,	},	// air
		{	5.0,	0.05,	2.0,	},	// ground
		{	5.0,	0.2,	25.0,	},	// block
		{	2.0,	0.5,	25.0,	},	// snow
	};

}  // end of anonymous namespace



const SurfaceData& getSurfaceData (unsigned int surface_type)
{
	assert(surface_type < SURFACE_TYPE_COUNT);

	return SURFACE_DATA[surface_type];
}

