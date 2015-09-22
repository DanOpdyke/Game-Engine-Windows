#include "stdafx.h"
#include "DemoGunComponent.h"

namespace SI
{
	DemoGunComponent::~DemoGunComponent()
	{
	}

	void DemoGunComponent::Update(float deltaTime, GameObject & object)
	{
		timeUntilShot -= deltaTime;

		if (timeUntilShot < 0) {
			timeUntilShot = 1000000;
			
			// Add bullet
			auto bullet = &entityFactory.createGameObject("bullet");
			bullet->position = object.position;
		}
	}

}