#pragma once

#include "config-utils/shared/config-utils.hpp"

DECLARE_CONFIG(ModConfig,
    CONFIG_VALUE(SendTwitchMessages, bool, "Send Twitch Messages", true, "Allow that the mod can use ur Twitch Token to send messages when someone requests an Song.");
    CONFIG_VALUE(TwitchToken, std::string, "Twitch Token", "INSERTHERE", "Required");
    CONFIG_VALUE(MaxNPS, float, "Max NPS", 30, "The maximal NPS for an request.");
)