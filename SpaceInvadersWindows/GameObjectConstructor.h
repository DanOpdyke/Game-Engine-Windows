#pragma once
#include "GameObject.h"
#include "RenderSystem.h"
#include "LevelInputHandler.h"

namespace SI {
	class GameObjectConstructor {
	public:
		virtual GameObject *createObject(RenderSystem &renderSystem, LevelInputHandler &inputHandler) = 0;
	};
}