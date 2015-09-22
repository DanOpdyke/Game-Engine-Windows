#pragma once
#include "Component.h"

namespace SI
{
	class LifeTimerComponent :
		public Component
	{
	public:
		LifeTimerComponent(float lifeTime) : timeToLive(lifeTime) {};
		~LifeTimerComponent();
	private:
		// Life time, in seconds
		float timeToLive = 0;

		// Inherited via Component
		void Update(float deltaTime, GameObject & object) override;
	};

}
