#pragma once
#include "WorldGenerator.h"

class WorldGenWaterlily : public WorldGenerator
{
public:
	bool generate(World* worldIn, pcg32& rand, const BlockPos& position) override;
private:
};