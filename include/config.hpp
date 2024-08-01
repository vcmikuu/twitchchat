#pragma once

#include "config-utils/shared/config-utils.hpp"

DECLARE_CONFIG(ModConfig,
    CONFIG_VALUE(SendTwitchMessages, bool, "Send Twitch Messages", true);
)