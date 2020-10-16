#ifndef __CORE_APP_HPP
#define __CORE_APP_HPP

#include <SFML/Graphics.hpp>
#include <entt/entt.hpp>
#include <glm/glm.hpp>

#include "../System/RenderSystem.hpp"
#include "../System/TransformSystem.hpp"

class App
{
private:
	sf::RenderWindow m_Window;
	sf::Clock m_DeltaClock;
	entt::registry m_Registry;

	sf::Color m_ClearColor;

	// GUI value
	// Should be refactored
	float m_GUISphereRadius;
	int m_GUISphereLongitude;
	int m_GUISphereLatitude;
	float m_GUISphereTranslateX;
	float m_GUISphereTranslateY;
	float m_GUISphereTranslateZ;
	int m_GUISphereRotationAxis;
	float m_GUISphereRotationDegree;
	bool m_GUISphereBackfaceCulling;

	// System
	RenderSystem m_SystemRender;
	TransformSystem m_SystemTransform;
public:
	App();
	~App();

	void Run();
	void UpdateInterface();
	void Update();
	void Render();
};

#endif