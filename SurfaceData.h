//
//  SurfaceData.h
//

#pragma once



const unsigned int SURFACE_TYPE_AIR    = 0;
const unsigned int SURFACE_TYPE_GROUND = 1;
const unsigned int SURFACE_TYPE_BLOCK  = 2;
const unsigned int SURFACE_TYPE_SNOW   = 3;
const unsigned int SURFACE_TYPE_COUNT  = 4;

struct SurfaceData
{
	double max_speed;
	double interpolation_factor;
	double friction;
};

const SurfaceData& getSurfaceData (unsigned int surface_type);
