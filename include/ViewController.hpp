
#pragma once
#include "bsml/shared/BSML.hpp"
#include "UnityEngine/Transform.hpp"


namespace BSML {
    void Init();
    
    std::shared_ptr<BSMLParser> parse(std::string_view str);
    std::shared_ptr<BSMLParser> parse_and_construct(std::string_view str, UnityEngine::Transform* parent, Il2CppObject* host);
}

void DidActivate(HMUI::ViewController* self, bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
    // Create our UI elements only when shown for the first time.
    if(firstActivation) {
        // Create a container that has a scroll bar
        UnityEngine::GameObject* container = BSML::Lite::CreateScrollableSettingsContainer(self->get_transform());

        // Create a text that says "Hello World!" and set the parent to the container.
        BSML::Lite::CreateText(container->get_transform(), "Hello World!");
    }
}

