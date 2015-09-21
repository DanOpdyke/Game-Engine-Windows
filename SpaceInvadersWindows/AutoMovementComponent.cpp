#include "stdafx.h"
#include "AutoMovementComponent.h"
#include "GameObject.h"

namespace SI
{
	void AutoMovementComponent::Update(float deltaTime, GameObject & object)
	{
		object.position += (direction * (deltaTime / 10000.f));
	}

	AutoMovementComponent::~AutoMovementComponent()
	{
	}

}