#pragma once
#include "GameObject.h"
#include "RenderSystem.h"
#include "LevelInputHandler.h"

namespace SI {
	class GameObjectConstructor {
	public:
		virtual GameObject &configureObject(RenderSystem &renderSystem, LevelInputHandler &inputHandler, GameObject &object) = 0;
	};
}