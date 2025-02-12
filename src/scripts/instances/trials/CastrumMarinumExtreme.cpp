#include <ScriptObject.h>
#include <Territory/InstanceContent.h>

using namespace Sapphire;

class CastrumMarinumExtreme : public Sapphire::ScriptAPI::InstanceContentScript
{
public:
  CastrumMarinumExtreme() : Sapphire::ScriptAPI::InstanceContentScript( 20074 )
  { }

  void onInit( InstanceContent& instance ) override
  {
    instance.registerEObj( "Entrance", 2007457, 8531963, 5, { 99.992310f, -0.015320f, 119.981598f }, 0.991760f, 0.000000f); 
    // States -> vf_lock_on (id: 11) vf_lock_of (id: 12) 
    instance.registerEObj( "Exit", 2000139, 0, 4, { 99.992310f, -0.015320f, 88.487061f }, 0.991760f, 0.000000f); 
    instance.registerEObj( "unknown_0", 2007457, 8508763, 4, { 100.000000f, 0.000000f, 100.000000f }, 1.000000f, 0.000000f); 
    instance.registerEObj( "ExittowesternThanalan", 2011309, 0, 4, { 78.507927f, 4.976858f, 21.419600f }, 1.000000f, 0.000000f); 

  }

  void onUpdate( InstanceContent& instance, uint64_t tickCount ) override
  {

  }

  void onEnterTerritory( InstanceContent& instance, Entity::Player& player, uint32_t eventId, uint16_t param1,
                         uint16_t param2 ) override
  {

  }

};

EXPOSE_SCRIPT( CastrumMarinumExtreme );