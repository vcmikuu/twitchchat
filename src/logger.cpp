#include "logger.hpp"

Paper::ConstLoggerContext<17UL> getLogger()
{
    static auto fastContext = Paper::Logger::WithContext<"TwitchPlus">();
    return fastContext;
}