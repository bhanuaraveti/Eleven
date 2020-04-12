#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Eleven {
	class ELEVEN_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define ELVN_CORE_TRACE(...)    ::Eleven::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define ELVN_CORE_INFO(...)     ::Eleven::Log::GetCoreLogger()->info(__VA_ARGS__)
#define ELVN_CORE_WARN(...)     ::Eleven::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define ELVN_CORE_ERROR(...)    ::Eleven::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ELVN_CORE_FATAL(...)    ::Eleven::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define ELVN_TRACE(...)         ::Eleven::Log::GetClientLogger()->trace(__VA_ARGS__)
#define ELVN_INFO(...)          ::Eleven::Log::GetClientLogger()->info(__VA_ARGS__)
#define ELVN_WARN(...)          ::Eleven::Log::GetClientLogger()->warn(__VA_ARGS__)
#define ELVN_ERROR(...)         ::Eleven::Log::GetClientLogger()->error(__VA_ARGS__)
#define ELVN_FATAL(...)         ::Eleven::Log::GetClientLogger()->fatal(__VA_ARGS__)


