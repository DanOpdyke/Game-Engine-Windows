#pragma once
#include <string>
namespace SI {
	class GameObject;
	class Spawner {
	public:
		virtual void addGameObject(std::string identifier) = 0;
	};
}