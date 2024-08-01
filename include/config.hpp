#pragma once

#include "config-utils/shared/config-utils.hpp"

DECLARE_CONFIG(ModConfig,
    CONFIG_VALUE(SendTwitchMessages, bool, "Send Twitch Messages", true, "Allow that the mod can use ur Twitch Token to send messages when someone requests an Song.");
    CONFIG_VALUE(SendTwitchMessages, string, "Twitch Token", "INSERT HERE", "Required");
    CONFIG_VALUE(MaxNPS, int, "Max Note Per Second", 2, "Change the NPS for requests.");
)