#pragma once
#include "Component.h"
#include "EntityFactory.h"

namespace SI
{
	class DemoGunComponent :
		public Component
	{
	public:
		DemoGunComponent(EntityFactory &factory) : entityFactory(factory) {};
		~DemoGunComponent();

	private:
		float timeUntilShot = 0.f;
		EntityFactory &entityFactory;

		// Inherited via Component
		void Update(float deltaTime, GameObject & object) override;
	};


}