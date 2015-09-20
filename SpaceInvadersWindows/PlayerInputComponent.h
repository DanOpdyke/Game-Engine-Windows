#pragma once
#include "Component.h"
#include "LevelInputHandler.h"

namespace SI
{
	class PlayerInputComponent :
		public Component
	{
	public:
		PlayerInputComponent(const LevelInputHandler &inputHandler);
		void Update(float deltaTime, GameObject &object) override;
		~PlayerInputComponent();
	private:
		const LevelInputHandler &inputHandler;
	};


}