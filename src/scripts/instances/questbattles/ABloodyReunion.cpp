#include <ScriptObject.h>
#include <Territory/QuestBattle.h>

using namespace Sapphire;

class ABloodyReunion : public Sapphire::ScriptAPI::QuestBattleScript
{
private:
  static constexpr auto BNPC_MERISI_1ST_01 = 6869391;
  static constexpr auto BNPC_INQUIS_1ST_01 = 6869410;
  static constexpr auto BNPC_INQUIS_1ST_02 = 6869411;
  static constexpr auto BNPC_TEMPLEADER_1ST_01 = 6869413;
  static constexpr auto BNPC_TEMP_LNC_1ST_01 = 6869414;
  static constexpr auto BNPC_TEMP_ARC_1ST_01 = 6869415;
  static constexpr auto BNPC_TEMP_ARC_1ST_02 = 6869416;
  static constexpr auto BNPC_MERISI_2ND_01 = 6869453;
  static constexpr auto P_BNPC_HILDA_1ST_01 = 6869371;
  static constexpr auto P_BNPC_ROSTN_1ST_01 = 6869382;
  static constexpr auto P_BNPC_STEP_1ST_01 = 6869393;
  static constexpr auto P_BNPC_HILDA_2ND_01 = 6869451;
  static constexpr auto P_BNPC_MOSC_2ND_01 = 6869454;
  static constexpr auto P_BNPC_ROSTN_2ND_01 = 6869484;
  static constexpr auto P_BNPC_STEP_2ND_01 = 6869485;
  static constexpr auto BNPC_MERISI_POS = 7010124;
  static constexpr auto BNPC_TOUMEI_SCAPEGOAT = 7010130;
  static constexpr auto WARP_01 = 6869448;
  static constexpr auto BGM_LAST_JOB = 316;
  static constexpr auto LOC_ACTOR0 = 1011895;
  static constexpr auto LOC_ACTOR1 = 1021318;
  static constexpr auto LOC_ACTOR2 = 1021311;
  static constexpr auto LOC_ACTOR3 = 1014579;
  static constexpr auto LOC_ACTOR4 = 1014580;
  static constexpr auto LOC_LQ_SECONDHALF_01 = 6913459;
  static constexpr auto LOC_LQ_SECONDHALF_ADD_01 = 6955064;
  static constexpr auto LOC_LQ_SECONDHALF_MELISIE_01 = 6956268;
  static constexpr auto BNPC_FIRE_BALL = 6969504;
  static constexpr auto EOBJ_FIRE_FLOOR = 6969506;
  static constexpr auto STATUS_FIRE_FLOOR = 3295;
  static constexpr auto PR_FRIEND_MOVE_POS01 = 6969508;
  static constexpr auto PR_FRIEND_MOVE_POS02 = 6969510;
  static constexpr auto ACT_FIRE_FLOOR = 9387;
  static constexpr auto ACT_FLAME_SUMMON = 9389;
  static constexpr auto ACT_TP_DAMAGE = 9390;
  static constexpr auto ACT_FORM_CHANGE = 9393;
  static constexpr auto BNPCSTATE_SCARED = 7;

public:
  ABloodyReunion() : Sapphire::ScriptAPI::QuestBattleScript( 173 )
  { }

  void onInit( QuestBattle& instance ) override
  {
    instance.registerEObj( "unknown_0", 2006038, 5891863, 4, { -103.765701f, 394.988708f, -312.957214f }, 1.000000f, 0.000000f); 
    instance.registerEObj( "unknown_1", 2006039, 5891860, 4, { -102.201103f, 394.988708f, -278.118988f }, 1.000000f, 0.000000f); 
    instance.registerEObj( "unknown_2", 2006040, 5855034, 4, { 230.235901f, -96.457947f, -181.102600f }, 1.000000f, 0.000000f); 
    instance.registerEObj( "Exit", 2000139, 0, 4, { 230.936203f, -456.457886f, 65.952606f }, 1.000000f, 0.000000f); 
    instance.registerEObj( "unknown_3", 2007177, 6268147, 4, { 230.075500f, -456.357605f, 58.431438f }, 1.000000f, 0.000000f); 
    instance.registerEObj( "unknown_4", 2007178, 6275911, 4, { 230.467407f, -456.457886f, 79.306190f }, 1.000000f, 0.000000f); 
    instance.registerEObj( "unknown_5", 2007168, 0, 4, { 248.035400f, 225.116302f, 271.869995f }, 0.991760f, 0.000048f); 
    instance.registerEObj( "unknown_6", 2005295, 5698524, 4, { -232.841797f, 402.044098f, -353.718689f }, 1.000000f, 0.000000f); 
    instance.registerEObj( "unknown_7", 2005296, 5698521, 4, { -177.212006f, 398.044098f, -361.393311f }, 1.000000f, 0.000000f); 
    instance.registerEObj( "unknown_8", 2005297, 5698523, 4, { -162.152802f, 398.044098f, -369.069885f }, 1.000000f, 0.000000f); 
    instance.registerEObj( "unknown_9", 2005298, 5698522, 4, { -176.852295f, 398.044098f, -382.745087f }, 1.000000f, 0.000000f); 
    instance.registerEObj( "unknown_10", 2005299, 5886628, 4, { -168.304993f, 394.044098f, -296.534088f }, 1.000000f, 0.000000f); 
    instance.registerEObj( "unknown_11", 2005300, 5686456, 4, { 28.763180f, 209.979401f, 211.474701f }, 0.991760f, 0.000048f); 
    instance.registerEObj( "unknown_12", 2005301, 5686457, 4, { 100.159401f, 220.000000f, 272.267090f }, 1.000000f, 0.000000f); 
    instance.registerEObj( "unknown_13", 2005293, 5889119, 4, { 28.122299f, 209.979401f, 220.050293f }, 1.000000f, 0.000000f); 
    instance.registerEObj( "unknown_14", 2005294, 5889137, 4, { 111.924896f, 219.958694f, 271.931000f }, 1.000000f, 0.000000f); 
    instance.registerEObj( "Liftterminal", 2005308, 0, 4, { 203.525803f, -28.163019f, 195.849503f }, 0.991760f, -1.570451f); 
    instance.registerEObj( "Liftterminal_1", 2005309, 0, 4, { 229.755005f, -59.269020f, 94.956909f }, 0.991760f, -1.570451f); 
    instance.registerEObj( "unknown_15", 2005306, 5815811, 4, { -359.609406f, -299.984009f, -249.805496f }, 0.991760f, 0.000048f); 
    instance.registerEObj( "Liftterminal_2", 2005307, 0, 4, { -351.717102f, -299.983887f, -250.003098f }, 0.991760f, -1.570451f); 
    instance.registerEObj( "unknown_16", 2002735, 0, 4, { -133.497498f, 394.924286f, -295.299713f }, 1.400000f, -1.570451f); 
    instance.registerEObj( "sgpl_w_lvd_b0118_col_char", 2002872, 5786705, 4, { -140.602203f, 394.529388f, -295.997314f }, 1.000000f, 0.000000f); 
    // States -> vf_bextwall_on (id: 3) vf_bextwall_of (id: 4) 
    instance.registerEObj( "unknown_17", 2005310, 5698551, 4, { -81.047653f, 394.430786f, -296.243713f }, 0.991760f, 0.000048f); 
    instance.registerEObj( "sgpl_w_lvd_b0118_col_char_1", 2002872, 5786715, 4, { 265.170685f, 225.066895f, 271.760712f }, 1.000000f, 0.000000f); 
    // States -> vf_bextwall_on (id: 3) vf_bextwall_of (id: 4) 
    instance.registerEObj( "sgpl_w_lvd_b0118_col_char_2", 2002872, 5786711, 4, { 220.192200f, 224.639603f, 271.691895f }, 1.000000f, 0.000000f); 
    // States -> vf_bextwall_on (id: 3) vf_bextwall_of (id: 4) 
    instance.registerEObj( "unknown_18", 2002735, 0, 4, { 228.611694f, 225.066895f, 272.124695f }, 1.400000f, -1.570451f); 
    instance.registerEObj( "unknown_19", 2002735, 0, 4, { 230.175598f, -96.457947f, -160.689804f }, 1.400000f, 0.000000f); 
    instance.registerEObj( "sgpl_w_lvd_b0118_col_char_3", 2002872, 5786724, 4, { 231.302200f, -96.512398f, -143.853394f }, 1.000000f, 0.000000f); 
    // States -> vf_bextwall_on (id: 3) vf_bextwall_of (id: 4) 
    instance.registerEObj( "unknown_20", 2002735, 0, 4, { 229.505203f, -456.329193f, 99.828033f }, 1.000000f, 0.000000f); 
    instance.registerEObj( "sgpl_w_lvd_b0118_col_char_4", 2002872, 5859273, 4, { 229.632996f, -456.457886f, 93.179420f }, 1.000000f, 0.000000f); 
    // States -> vf_bextwall_on (id: 3) vf_bextwall_of (id: 4) 
    instance.registerEObj( "Shortcut", 2000700, 0, 4, { -309.444885f, 400.000000f, -287.942108f }, 0.991760f, 0.000048f); 
    instance.registerEObj( "Entrance", 2000182, 5782651, 5, { -332.999207f, 400.000000f, -297.435211f }, 1.000000f, 0.000000f); 
    // States -> vf_lock_on (id: 11) vf_lock_of (id: 12) 
    instance.registerEObj( "sgpl_w_lvd_colwithnavi", 2012976, 9702512, 4, { 192.227295f, -26.801500f, 207.931793f }, 1.000000f, 0.000000f); 
    instance.registerEObj( "sgpl_w_lvd_colwithnavi_1", 2012976, 9702513, 4, { 209.654907f, -59.133320f, 98.078720f }, 1.000000f, 0.000000f); 
    instance.registerEObj( "sgpl_w_lvd_colwithnavi_2", 2012976, 9728707, 4, { 216.517502f, -59.133320f, 110.048897f }, 1.000000f, 0.000000f); 
    instance.registerEObj( "sgpl_w_lvd_colwithnavi_3", 2012976, 9728709, 4, { 216.779297f, -59.133320f, 110.602501f }, 1.000000f, 0.000000f); 

  }

  void onUpdate( QuestBattle& instance, uint64_t tickCount ) override
  {

  }

  void onEnterTerritory( QuestBattle& instance, Entity::Player& player, uint32_t eventId, uint16_t param1,
                         uint16_t param2 ) override
  {

  }

};

EXPOSE_SCRIPT( ABloodyReunion );