#pragma once
namespace SI
{
	class GameObject;
	class Component
	{
	public:
		virtual void Update(float deltaTime, GameObject &object) = 0;
	};
}