#include <ScriptObject.h>
#include <Territory/InstanceContent.h>

using namespace Sapphire;

class EdensVerseFurorSavage : public Sapphire::ScriptAPI::InstanceContentScript
{
public:
  EdensVerseFurorSavage() : Sapphire::ScriptAPI::InstanceContentScript( 30091 )
  { }

  void onInit( InstanceContent& instance ) override
  {
    instance.registerEObj( "Entrance", 2000182, 8250016, 5, { 100.000000f, -0.000001f, 115.000000f }, 1.000000f, -0.000000f); 
    // States -> vf_lock_on (id: 11) vf_lock_of (id: 12) 
    instance.registerEObj( "Exit", 2000139, 0, 4, { 100.000000f, 0.000000f, 84.500000f }, 1.000000f, -0.000000f); 

  }

  void onUpdate( InstanceContent& instance, uint64_t tickCount ) override
  {

  }

  void onEnterTerritory( InstanceContent& instance, Entity::Player& player, uint32_t eventId, uint16_t param1,
                         uint16_t param2 ) override
  {

  }

};

EXPOSE_SCRIPT( EdensVerseFurorSavage );