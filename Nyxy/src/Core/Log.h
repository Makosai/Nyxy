#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Nyxy {
	class NYXY_API Log {
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
#define NE_CORE_TRACE(...)     ::Nyxy::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define NE_CORE_INFO(...)      ::Nyxy::Log::GetCoreLogger()->info(__VA_ARGS__)
#define NE_CORE_WARN(...)      ::Nyxy::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define NE_CORE_ERROR(...)     ::Nyxy::Log::GetCoreLogger()->error(__VA_ARGS__)
#define NE_CORE_WARN(...)      ::Nyxy::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define NE_Core_FATAL(...)     ::Nyxy::Log::GetCoreLogger()->fatal(__VA_ARGS__)


// Client log macros
#define NE_CLIENT_TRACE(...)   ::Nyxy::Log::GetClientLogger()->trace(__VA_ARGS__)
#define NE_CLIENT_INFO(...)    ::Nyxy::Log::GetClientLogger()->info(__VA_ARGS__)
#define NE_CLIENT_WARN(...)    ::Nyxy::Log::GetClientLogger()->warn(__VA_ARGS__)
#define NE_CLIENT_ERROR(...)   ::Nyxy::Log::GetClientLogger()->error(__VA_ARGS__)
#define NE_CLIENT_FATAL(...)   ::Nyxy::Log::GetClientLogger()->fatal(__VA_ARGS__)