#pragma once
#include "GameObjectConstructor.h"

namespace SI
{
	class BulletConstructor :
		public GameObjectConstructor
	{
	public:
		BulletConstructor();
		~BulletConstructor();


		// Inherited via GameObjectConstructor
		GameObject & configureObject(RenderSystem & renderSystem, LevelInputHandler & inputHandler, GameObject & object) override;

	};

}
