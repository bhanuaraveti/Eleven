#pragma once

#include "Core.h"

namespace Eleven {
	
	class ELEVEN_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run() const;

	};

	// To be defined in CLIENT
	Application* CreateApplication();

}

