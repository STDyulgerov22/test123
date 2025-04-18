#include "manager.h"
#include "../timeline_static_library/namespace_utility.h"
#include <iostream>

void scene_manager()
{
    // Switch based on the current scene
    while (!utility::exit)
    {
        switch (utility::scene.current_scene)
        {
        case utility::scene.menu:
            mainMenu();
            break;
        }
    }
}