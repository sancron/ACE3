#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_common", "ace_missileguidance"};
        author = ECSTRING(common,ACETeam);
        authors[] = {"tcvm"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "ACE_GuidanceConfig.hpp"

class RscText;
class RscControlsGroupNoScrollbars;
class RscPictureKeepAspect;

#include "RscTitles.hpp"
