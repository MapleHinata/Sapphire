#include <ScriptObject.h>
#include <Territory/QuestBattle.h>

using namespace Sapphire;

class HiredGunblades : public Sapphire::ScriptAPI::QuestBattleScript
{
private:
  static constexpr auto P_BNPC_RADOVAN = 7967537;
  static constexpr auto P_BNPC_YAMITRA = 7967543;
  static constexpr auto P_BNPC_HODDYN = 7967544;
  static constexpr auto P_BNPC_EDITHA = 7967545;
  static constexpr auto BNPC_P1_TRASH_001 = 7967547;
  static constexpr auto BNPC_P1_TRASH_002 = 7967548;
  static constexpr auto BNPC_P1_TRASH_003 = 7967560;
  static constexpr auto BNPC_P1_TRASH_004 = 7967561;
  static constexpr auto BNPC_P1_TRASH_005 = 7967672;
  static constexpr auto BNPC_P1_TRASH_006 = 7967551;
  static constexpr auto BNPC_P1_TRASH_007 = 7967552;
  static constexpr auto BNPC_P2_TRASH_001 = 7967563;
  static constexpr auto BNPC_P2_TRASH_002 = 7967570;
  static constexpr auto BNPC_P2_TRASH_003 = 7967573;
  static constexpr auto BNPC_P2_TRASH_004 = 7967577;
  static constexpr auto BNPC_P2_TRASH_005 = 7967598;
  static constexpr auto BNPC_P2_BOSS_ASSASSINLEADER_001 = 7967587;
  static constexpr auto BNPC_P3_TRASH_001 = 7967602;
  static constexpr auto BNPC_P3_TRASH_002 = 7967603;
  static constexpr auto BNPC_P3_TRASH_003 = 7967604;
  static constexpr auto BNPC_P3_TRASH_004 = 7967606;
  static constexpr auto BNPC_P3_TRASH_005 = 7967924;
  static constexpr auto BNPC_P3_TRASH_006 = 7967927;
  static constexpr auto BNPC_P3_TRASH_007 = 7967929;
  static constexpr auto BNPC_P3_TRASH_008 = 7967926;
  static constexpr auto BNPC_P3_TRASH_009 = 7967923;
  static constexpr auto BNPC_P3_TRASH_010 = 7967930;
  static constexpr auto BNPC_P3_TRASH_011 = 7967925;
  static constexpr auto BNPC_P3_TRASH_012 = 7967931;
  static constexpr auto BNPC_P3_BOSS_COEURL_001 = 7967525;
  static constexpr auto ER_P1_FIRST_BATTLEFLAG = 7970857;
  static constexpr auto PR_P1_TRASH_MOVE_01 = 7970867;
  static constexpr auto PR_P1_TRASH_MOVE_02 = 7970871;
  static constexpr auto PR_P1_EDITHA_MOVE_01 = 7970872;
  static constexpr auto PR_P1_RADOVAN_MOVE_01 = 7970881;
  static constexpr auto P_BNPC_MILLITH = 7971016;
  static constexpr auto P_BNPC_SAETHRYDA = 7974097;
  static constexpr auto P_BNPC_YSHUWAHE = 7974096;
  static constexpr auto P_BNPC_JONATHAS = 7974095;
  static constexpr auto PR_P1_MILLITH_MOVE_01 = 7971017;
  static constexpr auto PR_P1_SAETHRYDA_MOVE_01 = 7974091;
  static constexpr auto PR_P1_YMHITRA_MOVE_01 = 7974092;
  static constexpr auto PR_P1_YSHUWAHE_MOVE_01 = 7974093;
  static constexpr auto PR_P1_JONATHAS_MOVE_01 = 7974094;
  static constexpr auto EOBJ_TALK_MILLITH = 8024752;
  static constexpr auto EOBJ_TALK_SAETHRYDA = 8024753;
  static constexpr auto EOBJ_TALK_YMHITRA = 8024754;
  static constexpr auto EOBJ_TALK_YSHUWAHE = 8024755;
  static constexpr auto EOBJ_TALK_JONATHAS = 8024756;
  static constexpr auto ER_P1_NEAR_APKALLUFALLS = 7971027;
  static constexpr auto BEHAVIOR_EDITHA_PANIC = 30303;
  static constexpr auto BEHAVIOR_NPC_TALK = 30562;
  static constexpr auto EVENT_ACTION_TALK = 64;
  static constexpr auto BGM_BATTLE = 13;
  static constexpr auto BGM_BOSS = 37;
  static constexpr auto PR_P1_TRASH_MOVE_03 = 7978858;
  static constexpr auto PR_P1_TRASH_MOVE_04 = 7978861;
  static constexpr auto PR_P1_TRASH_MOVE_05 = 7978860;
  static constexpr auto PR_P2_RADOVAN_MOVE_01 = 7978876;
  static constexpr auto PR_P2_EDITHA_MOVE_01 = 7978877;
  static constexpr auto PR_P2_RADOVAN_MOVE_02 = 7978881;
  static constexpr auto PR_P2_RADOVAN_MOVE_03 = 7978882;
  static constexpr auto PR_P2_RADOVAN_MOVE_04 = 7978884;
  static constexpr auto ACTION_PLAYER_GUNBREAKER_COMBO3 = 16145;
  static constexpr auto ACTION_PLAYER_GUNBREAKER_MAGICBULLET = 16146;
  static constexpr auto EOBJ_BOSS_ROOM_CONTROL = 7980743;
  static constexpr auto EOBJ_SHARED_CONTROL_3 = 7980758;
  static constexpr auto EOBJ_SHARED_CONTROL_2 = 7980764;
  static constexpr auto EOBJ_SHARED_CONTROL_1 = 7980767;
  static constexpr auto PR_P1_EDITHA_MOVE_02 = 7980831;
  static constexpr auto PR_P1_RADOVAN_MOVE_02 = 7980832;
  static constexpr auto BNPC_P3_THUNDERBOLT_LEFT = 7981191;
  static constexpr auto BNPC_P3_THUNDERBOLT_CENTER = 7981218;
  static constexpr auto BNPC_P3_THUNDERBOLT_RIGHT = 7981219;
  static constexpr auto PR_P3_RADOVAN_MOVE_LEFT = 7981220;
  static constexpr auto PR_P3_RADOVAN_MOVE_CENTER = 7981221;
  static constexpr auto PR_P3_RADOVAN_MOVE_RIGHT = 7981222;
  static constexpr auto PR_P3_EDITHA_MOVE_LEFT = 7981227;
  static constexpr auto PR_P3_EDITHA_MOVE_CENTER = 7981230;
  static constexpr auto PR_P3_EDITHA_MOVE_RIGHT = 7981231;
  static constexpr auto ACTION_BOSS_COEURL_THUNDERBOLT = 17239;
  static constexpr auto ACTION_TOMEI_THUNDERBOLT = 17240;
  static constexpr auto BNPC_P3_THUNDERBALL_LEFT = 7984227;
  static constexpr auto BNPC_P3_THUNDERBALL_CENTER = 7984233;
  static constexpr auto BNPC_P3_THUNDERBALL_RIGHT = 7984234;
  static constexpr auto ACTION_SCRIPT_TRIGGER_01 = 4777;
  static constexpr auto ACTION_TRASH_OVERPOWER = 17245;
  static constexpr auto ACTION_RADOVAN_PROVOKE = 17425;
  static constexpr auto ACTION_RADOVAN_SHIRK = 17426;
  static constexpr auto BEHAVIOR_NPC_CHEERTALK = 30961;
  static constexpr auto BEHAVIOR_NPC_CHEER = 30961;
  static constexpr auto BEHAVIOR_NPC_AWKWARD = 30560;
  static constexpr auto BEHAVIOR_NPC_VERYGLAD = 30712;
  static constexpr auto STATUS_PARAM_KNOCKDOWN = 5059;
  static constexpr auto BEHAVIOR_NPC_OFF = 30417;
  static constexpr auto BEHAVIOR_HODDYN_SCOLD = 31471;
  static constexpr auto ACTION_THUNDERBALL_BURST = 17244;
  static constexpr auto P_ENPC_ONDINE = 8034329;
  static constexpr auto YELL_HODDYN_002 = 8135;
  static constexpr auto YELL_HODDYN_003 = 8136;
  static constexpr auto YELL_HODDYN_004 = 8137;
  static constexpr auto YELL_ASSASSIN_003 = 8138;
  static constexpr auto BGM_NO_MUSIC = 1;
  static constexpr auto ACTION_TIMELINE_FASTBLADE = 310;
  static constexpr auto ACTION_TIMELINE_BATTLE_START = 3778;
  static constexpr auto BNPC_NAME_ONDINE = 598;
  static constexpr auto BNPC_NAME_RADVAN = 826;
  static constexpr auto YELL_YMHITRA_002 = 8555;
  static constexpr auto ACTION_TIMELINE_WELCOME = 738;
  static constexpr auto YELL_RADVAN_005 = 8573;
  static constexpr auto YELL_RADVAN_006 = 8574;
  static constexpr auto YELL_EDITHA_003 = 8575;
  static constexpr auto ACTION_TIMELINE_ANGRY = 691;
  static constexpr auto ACTION_TIMELINE_PANIC = 719;
  static constexpr auto ACTION_TIMELINE_POINT = 720;
  static constexpr auto ACTION_TIMELINE_LOOK = 713;
  static constexpr auto YELL_RADVAN_007 = 8653;
  static constexpr auto YELL_RADVAN_008 = 8654;
  static constexpr auto YELL_RADVAN_009 = 8655;
  static constexpr auto YELL_RADVAN_010 = 8656;
  static constexpr auto YELL_EDITHA_004 = 8657;
  static constexpr auto ACTION_TIMELINE_TOUCH_LOOP = 4194;
  static constexpr auto ACTION_TIMELINE_SHOCKED = 707;
  static constexpr auto YELL_MILLITH_002 = 8658;
  static constexpr auto YELL_SAETHRYDA_002 = 8659;
  static constexpr auto YELL_YSHUWAHE_002 = 8660;
  static constexpr auto YELL_JONATHAS_002 = 8661;
  static constexpr auto YELL_RADVAN_011 = 8662;
  static constexpr auto YELL_EDITHA_005 = 8663;
  static constexpr auto YELL_RADVAN_012 = 8664;
  static constexpr auto YELL_EDITHA_006 = 8665;
  static constexpr auto YELL_EDITHA_007 = 8666;
  static constexpr auto YELL_RADVAN_013 = 8667;
  static constexpr auto YELL_EDITHA_008 = 8668;
  static constexpr auto YELL_RADVAN_014 = 8669;
  static constexpr auto ACTION_TIMELINE_SOOTHE = 732;
  static constexpr auto ACTION_TIMELINE_WORRY = 737;
  static constexpr auto ACTION_TIMELINE_REQUEST = 694;
  static constexpr auto ACTION_TIMELINE_HYSTERIC = 724;
  static constexpr auto BGM_NOMAL = 6;
  static constexpr auto STATUS_PARAM_TERROR_NOLIMIT = 3331;
  static constexpr auto STATUS_TERROR_NOLIMIT = 1400;
  static constexpr auto LOC_ACTOR0 = 1029048;
  static constexpr auto LOC_ACTOR1 = 1031417;
  static constexpr auto LOC_MARKER_00 = 8032721;
  static constexpr auto ACTION_TIMELINE_HUMMING = 6271;
  static constexpr auto PR_P2_RADOVAN_MOVE_05 = 8035499;
  static constexpr auto PR_P2_RADOVAN_MOVE_06 = 8035501;

public:
  HiredGunblades() : Sapphire::ScriptAPI::QuestBattleScript( 193 )
  { }

  void onInit( QuestBattle& instance ) override
  {
    instance.registerEObj( "Companychest", 2000470, 4255829, 4, { 135.732803f, 14.529310f, -87.463547f }, 0.991760f, 0.298639f);
    instance.registerEObj( "Archonegg", 2007011, 0, 4, { -26.664301f, 10.000000f, -254.842804f }, 1.000000f, 0.000000f);
    instance.registerEObj( "Archonegg_1", 2007011, 0, 4, { -22.078381f, 9.999974f, -260.825012f }, 1.000000f, 1.063008f);
    instance.registerEObj( "Archonegg_2", 2007011, 0, 4, { -12.353240f, 10.051390f, -255.138504f }, 1.000000f, -0.727024f);
    instance.registerEObj( "Archonegg_3", 2007011, 0, 4, { -25.218170f, 10.092880f, -245.264801f }, 1.000000f, -0.922137f);
    instance.registerEObj( "Archonegg_4", 2007011, 0, 4, { -36.444431f, 10.524530f, -248.501694f }, 1.000000f, 1.423291f);
    instance.registerEObj( "Archonegg_5", 2007011, 0, 4, { -24.441339f, 10.135810f, -236.868195f }, 1.000000f, 1.125902f);
    instance.registerEObj( "Archonegg_6", 2007011, 0, 4, { -10.961320f, 9.999931f, -262.043610f }, 1.000000f, 0.105701f);
    instance.registerEObj( "Archonegg_7", 2007011, 0, 4, { -30.154921f, 10.421960f, -259.289307f }, 1.000000f, 1.304837f);
    instance.registerEObj( "Archonegg_8", 2007011, 0, 4, { 21.591101f, -0.638428f, -138.610397f }, 1.000000f, 0.924912f);
    instance.registerEObj( "Archonegg_9", 2007011, 0, 4, { 20.448650f, 0.215235f, -129.057800f }, 1.000000f, 0.000000f);
    instance.registerEObj( "Archonegg_10", 2007011, 0, 4, { 12.465450f, -0.870980f, -135.085205f }, 1.000000f, -0.113112f);
    instance.registerEObj( "Archonegg_11", 2007011, 0, 4, { 30.311211f, -0.974455f, -142.602295f }, 1.000000f, 1.430648f);
    instance.registerEObj( "Archonegg_12", 2007011, 0, 4, { 26.105280f, -0.963380f, -149.447403f }, 1.000000f, -1.065016f);
    instance.registerEObj( "Archonegg_13", 2007011, 0, 4, { 33.699551f, 0.000000f, -133.230194f }, 1.000000f, -0.336762f);
    instance.registerEObj( "Archonegg_14", 2007011, 0, 4, { 16.868271f, -0.851810f, -150.447006f }, 1.000000f, 1.355682f);
    instance.registerEObj( "Archonegg_15", 2007011, 0, 4, { 25.823750f, -0.925134f, -158.087402f }, 1.000000f, 0.442603f);
    instance.registerEObj( "Archonegg_16", 2007011, 0, 4, { 83.534828f, 9.055751f, -263.697601f }, 1.000000f, -0.087840f);
    instance.registerEObj( "Archonegg_17", 2007011, 0, 4, { 87.406349f, 9.129570f, -259.628693f }, 1.000000f, 1.333452f);
    instance.registerEObj( "Archonegg_18", 2007011, 0, 4, { 83.835564f, 12.879630f, -248.515594f }, 1.000000f, 0.000000f);
    instance.registerEObj( "Archonegg_19", 2007011, 0, 4, { 74.209587f, 9.059146f, -252.983597f }, 1.000000f, 1.189073f);
    instance.registerEObj( "Archonegg_20", 2007011, 0, 4, { 70.231956f, 9.067257f, -247.714203f }, 1.000000f, -0.552592f);
    instance.registerEObj( "Archonegg_21", 2007011, 0, 4, { 79.412529f, 9.035533f, -258.659790f }, 1.000000f, 0.904307f);
    instance.registerEObj( "Archonegg_22", 2007011, 0, 4, { 77.725761f, 13.834650f, -251.317398f }, 1.000000f, -0.637241f);
    instance.registerEObj( "Archonegg_23", 2007011, 0, 4, { 65.047127f, 9.041698f, -250.792496f }, 1.000000f, 0.532712f);
    instance.registerEObj( "Freshlylaidegg", 2011524, 0, 4, { -458.010590f, 0.004735f, -172.501297f }, 0.991760f, 0.000000f);
    instance.registerEObj( "Freshlylaidegg_1", 2011524, 0, 4, { -447.880188f, -0.015320f, -187.628799f }, 0.991760f, 0.000000f);
    instance.registerEObj( "Freshlylaidegg_2", 2011524, 0, 4, { -458.182709f, 0.004735f, -193.386795f }, 0.991760f, 0.000000f);
    instance.registerEObj( "Freshlylaidegg_3", 2011524, 0, 4, { -462.617096f, 0.004735f, -182.419403f }, 0.991760f, 1.273190f);
    instance.registerEObj( "Freshlylaidegg_4", 2011524, 0, 4, { -473.968994f, 0.004735f, -171.940094f }, 0.991760f, 0.000000f);
    instance.registerEObj( "Freshlylaidegg_5", 2011524, 0, 4, { -444.144409f, 0.003193f, -166.205994f }, 0.991760f, 0.000000f);
    instance.registerEObj( "Freshlylaidegg_6", 2011524, 0, 4, { -475.823303f, 0.004735f, -191.245804f }, 0.991760f, 0.000000f);
    instance.registerEObj( "Freshlylaidegg_7", 2011524, 0, 4, { -481.868988f, 0.003417f, -178.139999f }, 0.991760f, 0.000000f);
    instance.registerEObj( "Freshlylaidegg_8", 2011524, 0, 4, { -453.177704f, 0.002757f, -159.118301f }, 0.991760f, 0.000000f);
    instance.registerEObj( "Freshlylaidegg_9", 2011524, 0, 4, { -470.175293f, 0.002911f, -159.082703f }, 1.000000f, 0.000000f);
    instance.registerEObj( "Freshlylaidegg_10", 2011524, 0, 4, { -442.699402f, -0.015320f, -178.947906f }, 0.991760f, 1.273141f);
    instance.registerEObj( "Townsperson", 2005851, 0, 4, { 144.431198f, 13.571400f, -96.034798f }, 0.991760f, 0.511447f);
    instance.registerEObj( "Townsperson_1", 2005851, 0, 4, { 144.431198f, 13.571400f, -96.034798f }, 0.991760f, 0.511447f);
    instance.registerEObj( "Townsperson_2", 2005851, 0, 4, { 144.431198f, 13.571400f, -96.034798f }, 0.991760f, 0.511639f);
    instance.registerEObj( "Townsperson_3", 2005851, 0, 4, { 144.431198f, 13.571400f, -96.034798f }, 0.991760f, 0.511543f);
    instance.registerEObj( "sgvf_w_lvd_b1199", 2008277, 7990523, 4, { -49.973331f, 6.759644f, -132.127899f }, 0.991760f, 0.000048f);
    // States -> circle_off (id: 3) circle_off (id: 4) circle_on (id: 5) circle_on (id: 6)
    instance.registerEObj( "sgbg_w_qic_004_03a", 2007457, 7980750, 4, { -41.977600f, 11.245850f, -205.706894f }, 0.991760f, 0.000048f);
    instance.registerEObj( "sgbg_w_qic_004_03a_1", 2007457, 7980763, 4, { -41.636509f, 10.710820f, -245.356003f }, 1.000000f, 0.179653f);
    instance.registerEObj( "sgbg_w_qic_004_03a_2", 2007457, 7980766, 4, { 144.431198f, 13.571400f, -96.034798f }, 0.991760f, 1.070975f);
    instance.registerEObj( "Townsperson_4", 2005851, 0, 4, { 144.431198f, 13.571400f, -96.034798f }, 0.991760f, 0.511543f);
    instance.registerEObj( "MillithIronheart", 2010642, 0, 4, { -24.002501f, 10.177730f, -258.014801f }, 0.991760f, 0.511447f);
    instance.registerEObj( "Saethryda", 2010643, 0, 4, { -20.340330f, 10.177730f, -256.122711f }, 0.991760f, 0.511447f);
    instance.registerEObj( "Ymhitra", 2010644, 0, 4, { -21.011721f, 10.177730f, -252.521606f }, 0.991760f, 0.511447f);
    instance.registerEObj( "Yshuwahe", 2010645, 0, 4, { -24.368710f, 10.200000f, -250.141205f }, 0.991760f, 0.511447f);
    instance.registerEObj( "Jonathas", 2010646, 0, 4, { -27.176331f, 10.200000f, -250.660004f }, 0.991760f, 0.511543f);
    instance.registerEObj( "unknown_0", 2008538, 0, 4, { 84.806763f, -0.000154f, -122.912498f }, 1.000000f, 0.254525f);
    instance.registerEObj( "unknown_1", 2008539, 0, 4, { 50.413849f, 7.978796f, -159.539993f }, 0.991760f, 0.527406f);
    instance.registerEObj( "unknown_2", 2010239, 0, 4, { 73.676521f, 13.994150f, -270.820801f }, 1.000000f, 0.817452f);
    instance.registerEObj( "Destination", 2011139, 0, 4, { 129.485397f, 12.918690f, -101.999298f }, 0.991760f, 0.000000f);
    instance.registerEObj( "MarkoftheMatron", 2004588, 0, 4, { -160.591400f, 4.982750f, -18.484079f }, 1.000000f, 0.744750f);
    instance.registerEObj( "???", 2004120, 0, 4, { 39.566650f, 0.604051f, -132.158401f }, 0.991760f, 0.000048f);
    instance.registerEObj( "unknown_3", 2004669, 0, 4, { 97.591248f, 13.162170f, -213.884995f }, 1.000000f, 0.000000f);
    instance.registerEObj( "unknown_4", 2004671, 0, 4, { -91.002548f, 7.048923f, -177.080704f }, 0.991760f, 0.000048f);
    instance.registerEObj( "unknown_5", 2004672, 0, 4, { 85.438347f, 8.000000f, -81.518631f }, 1.000000f, 0.000000f);
    instance.registerEObj( "Carline", 2004268, 0, 4, { 123.938202f, 14.170800f, -275.821808f }, 1.000000f, 0.000000f);
    instance.registerEObj( "Carline_1", 2004269, 0, 4, { -141.249893f, 7.843656f, -190.537598f }, 1.000000f, 0.000000f);
    instance.registerEObj( "unknown_6", 2004640, 0, 4, { 171.426498f, 15.671020f, -129.700302f }, 0.991760f, 1.230898f);
    instance.registerEObj( "unknown_7", 2006991, 0, 4, { -271.641815f, -0.000000f, -198.941101f }, 0.991760f, 0.000144f);
    instance.registerEObj( "Trampledground", 2006992, 0, 4, { -162.006500f, 8.189398f, -150.245102f }, 0.991760f, 0.553440f);
    instance.registerEObj( "Shinystonesplinter", 2006820, 0, 4, { -233.052200f, 5.989927f, -159.454803f }, 0.991760f, 0.000144f);
    instance.registerEObj( "Destination_1", 2009427, 0, 4, { 54.062618f, 12.680240f, -264.545685f }, 0.991760f, 0.000048f);
    instance.registerEObj( "Destination_2", 2009428, 0, 4, { 71.087723f, 14.000000f, -280.364990f }, 1.000000f, 0.000000f);
    instance.registerEObj( "unknown_8", 2009429, 0, 4, { 54.112610f, 12.700190f, -264.232391f }, 1.000000f, 0.807757f);
    instance.registerEObj( "Brokencrate", 2008105, 0, 4, { -271.621796f, 0.411380f, -198.917694f }, 1.000000f, 0.000000f);
    instance.registerEObj( "Destination_3", 2011011, 0, 4, { 14.597380f, 6.955675f, -109.421700f }, 0.991760f, 0.000000f);
    instance.registerEObj( "Destination_4", 2011012, 0, 4, { 33.065380f, -0.000004f, -132.789093f }, 0.991760f, 0.000000f);
    instance.registerEObj( "Destination_5", 2011013, 0, 4, { 69.079849f, 6.160040f, -103.795799f }, 0.991760f, 0.000000f);
    instance.registerEObj( "Destination_6", 2011538, 0, 4, { -289.607391f, 7.714389f, -169.791504f }, 1.000000f, 0.000000f);
    instance.registerEObj( "unknown_9", 2011539, 0, 4, { -46.221531f, 6.841889f, -123.558701f }, 0.991760f, -1.551122f);
    instance.registerEObj( "Destination_7", 2007532, 0, 4, { 73.013474f, 7.980469f, -135.438293f }, 0.991760f, -0.573986f);
    instance.registerEObj( "unknown_10", 2007556, 0, 4, { -55.997601f, 6.499980f, -92.498413f }, 1.000000f, 0.000000f);
    instance.registerEObj( "unknown_11", 2009243, 0, 4, { -54.642578f, 6.485046f, -91.355766f }, 0.991760f, -0.648548f);
    instance.registerEObj( "Destination_8", 2009631, 0, 4, { -94.916458f, 6.687383f, -139.800507f }, 0.991760f, 0.000048f);
    instance.registerEObj( "unknown_12", 2009639, 0, 4, { -54.642578f, 6.485046f, -91.355766f }, 0.991760f, -0.648548f);
    instance.registerEObj( "Destination_9", 2009645, 0, 4, { -50.104359f, 6.753676f, -130.723007f }, 1.000000f, 0.000000f);
    instance.registerEObj( "unknown_13", 2010740, 0, 4, { -54.629639f, 6.499986f, -91.349739f }, 1.000000f, -0.648631f);
    instance.registerEObj( "Destination_10", 2011283, 0, 4, { 34.496399f, 0.000000f, -129.471802f }, 0.500000f, -0.177523f);
    instance.registerEObj( "unknown_14", 2011288, 0, 4, { -49.958511f, 6.500000f, -89.784683f }, 0.991760f, 0.000000f);
    instance.registerEObj( "unknown_15", 2013090, 0, 4, { -41.810421f, 6.401711f, -101.998703f }, 0.991760f, -0.301887f);
    instance.registerEObj( "Mysteriousconcoction", 2013091, 0, 4, { -45.142559f, 6.606130f, -101.938599f }, 0.991760f, 0.000000f);
    instance.registerEObj( "Mysteriousconcoction_1", 2013092, 0, 4, { -43.392208f, 6.576599f, -102.015900f }, 0.991760f, 0.000000f);
    instance.registerEObj( "Mysteriousconcoction_2", 2013093, 0, 4, { -40.808899f, 6.606130f, -101.699600f }, 0.991760f, 0.000000f);
    instance.registerEObj( "Mysteriousconcoction_3", 2013094, 0, 4, { -39.144470f, 6.606130f, -101.089798f }, 0.991760f, 0.000000f);
    instance.registerEObj( "Destination_11", 2013103, 0, 4, { 63.065552f, -0.015320f, -116.472099f }, 0.991760f, 0.000000f);
    instance.registerEObj( "Mysteriousconcoction_4", 2013116, 0, 4, { -45.142601f, 6.606100f, -101.938599f }, 0.991800f, -0.000000f);
    instance.registerEObj( "Mysteriousconcoction_5", 2013117, 0, 4, { -43.392200f, 6.576600f, -102.015900f }, 0.991800f, -0.000000f);
    instance.registerEObj( "Mysteriousconcoction_6", 2013118, 0, 4, { -40.808899f, 6.606100f, -101.699600f }, 0.991800f, -0.000000f);
    instance.registerEObj( "Mysteriousconcoction_7", 2013119, 0, 4, { -39.144501f, 6.606100f, -101.089798f }, 0.991800f, -0.000000f);
    instance.registerEObj( "unknown_16", 2007583, 0, 4, { 83.225731f, 8.000000f, -79.119362f }, 1.000000f, -0.111582f);
    instance.registerEObj( "unknown_17", 2009457, 0, 4, { -45.944950f, 6.851257f, -122.880997f }, 1.000000f, 0.205077f);
    instance.registerEObj( "unknown_18", 2009711, 0, 4, { -46.555359f, 6.485046f, -92.729057f }, 0.991760f, 0.929463f);
    instance.registerEObj( "unknown_19", 2010852, 0, 4, { -44.479519f, 5.633699f, -99.484802f }, 0.991760f, 0.929559f);
    instance.registerEObj( "Destination_12", 2010940, 0, 4, { -115.918800f, 5.152543f, -170.617401f }, 0.991760f, -1.534121f);
    instance.registerEObj( "Destination_13", 2010943, 0, 4, { -125.916100f, 6.954108f, -123.455002f }, 1.000000f, 0.000000f);
    instance.registerEObj( "Destination_14", 2010941, 0, 4, { -22.938700f, 7.021600f, -141.422501f }, 1.000000f, 0.000000f);
    instance.registerEObj( "unknown_20", 2013097, 0, 4, { 43.111549f, 8.500000f, -119.836304f }, 0.550000f, 0.516327f);
    instance.registerEObj( "unknown_21", 2013098, 0, 4, { 136.064697f, 13.571390f, -96.203918f }, 0.473000f, -0.000000f);
    instance.registerEObj( "unknown_22", 2013099, 0, 4, { 107.930298f, 11.093400f, -235.028397f }, 0.500000f, -0.000000f);
    instance.registerEObj( "unknown_23", 2013088, 0, 4, { -44.479500f, 5.633700f, -99.484802f }, 1.000000f, 0.929559f);
    instance.registerEObj( "Destination_15", 2009642, 0, 4, { 73.240402f, 7.980469f, -143.871902f }, 0.991760f, 0.521226f);
    instance.registerEObj( "unknown_24", 2011310, 0, 4, { -129.442307f, 8.550307f, -113.359299f }, 0.991760f, 0.694417f);
    instance.registerEObj( "Indecorousdecoration", 2011311, 0, 4, { -154.162003f, 6.978340f, -80.766052f }, 0.991760f, 0.942445f);
    instance.registerEObj( "Indecorousdecoration_1", 2011312, 0, 4, { -155.520996f, 4.000000f, -38.213291f }, 0.991760f, 0.000000f);
    instance.registerEObj( "Indecorousdecoration_2", 2011313, 0, 4, { -169.176804f, 3.952019f, -14.053590f }, 0.991760f, -1.142690f);
    instance.registerEObj( "unknown_25", 2011314, 0, 4, { 142.534500f, 13.534730f, -99.321037f }, 0.991760f, 1.369923f);
    instance.registerEObj( "unknown_26", 2011315, 0, 4, { 143.205795f, 13.534730f, -92.210327f }, 0.991760f, 1.288995f);
    instance.registerEObj( "unknown_27", 2011316, 0, 4, { 137.560104f, 13.534730f, -89.280579f }, 0.991760f, 0.723730f);
    instance.registerEObj( "Strangeseemingsnowman", 2011317, 0, 4, { 142.046097f, 13.823650f, -99.259949f }, 0.991760f, 1.465682f);
    instance.registerEObj( "Strangeseemingsnowman_1", 2011318, 0, 4, { 142.748901f, 13.925060f, -92.401482f }, 0.991760f, 1.228240f);
    instance.registerEObj( "Strangeseemingsnowman_2", 2011319, 0, 4, { 137.224396f, 13.854050f, -89.646790f }, 0.991760f, 0.699168f);
    instance.registerEObj( "Scintillatingsnowman", 2011321, 0, 4, { 28.929939f, 18.064550f, -352.928192f }, 1.000000f, 0.000000f);
    instance.registerEObj( "Scintillatingsnowman_1", 2011322, 0, 4, { 34.714230f, 17.879080f, -352.450012f }, 0.991760f, 0.000000f);
    instance.registerEObj( "unknown_28", 2011323, 0, 4, { -42.152500f, 7.211300f, -120.596901f }, 0.991800f, 0.361327f);
    instance.registerEObj( "unknown_29", 2011324, 0, 4, { -44.176300f, 7.170400f, -120.685303f }, 0.991760f, -0.550824f);
    instance.registerEObj( "Smilingsnowman", 2011325, 0, 4, { -42.130192f, 7.736328f, -121.690697f }, 0.991760f, -0.068695f);
    instance.registerEObj( "Beamingsnowman", 2011326, 0, 4, { -44.113831f, 8.041443f, -121.934898f }, 0.991760f, -0.111114f);
    instance.registerEObj( "Scintillatingsnowman_2", 2011320, 0, 4, { 26.025480f, 16.840059f, -335.764313f }, 1.000000f, 0.000000f);
    instance.registerEObj( "unknown_30", 2011448, 0, 4, { -44.205379f, 7.156433f, -120.744698f }, 0.991760f, -0.550824f);
    instance.registerEObj( "unknown_31", 2011449, 0, 4, { -42.160709f, 7.186951f, -120.622597f }, 0.991760f, 0.361327f);
    instance.registerEObj( "unknown_32", 2011450, 0, 4, { 142.534500f, 13.534730f, -99.321037f }, 0.991760f, 1.369923f);
    instance.registerEObj( "unknown_33", 2011451, 0, 4, { 143.175400f, 13.534730f, -92.210327f }, 0.991760f, 1.288996f);
    instance.registerEObj( "unknown_34", 2011452, 0, 4, { 137.560104f, 13.534700f, -89.250099f }, 0.991760f, 0.717770f);
    instance.registerEObj( "unknown_35", 2011454, 0, 4, { -44.176331f, 7.170406f, -120.685303f }, 0.991760f, -0.550824f);
    instance.registerEObj( "unknown_36", 2011455, 0, 4, { -42.160709f, 7.186951f, -120.653099f }, 0.991760f, 0.361327f);
    instance.registerEObj( "unknown_37", 2012043, 0, 4, { -21.180830f, 10.135810f, -242.468399f }, 0.700000f, 0.000000f);
    instance.registerEObj( "unknown_38", 2012044, 0, 4, { 60.282051f, 8.200001f, -160.070908f }, 0.700000f, 0.000000f);
    instance.registerEObj( "unknown_39", 2012045, 0, 4, { -116.208397f, 4.980800f, -163.586304f }, 0.686646f, -0.000000f);
    instance.registerEObj( "unknown_40", 2012046, 0, 4, { 172.867294f, 15.671030f, -113.284599f }, 0.700000f, 0.000000f);
    instance.registerEObj( "unknown_41", 2012047, 0, 4, { -250.436905f, -0.000600f, -192.146393f }, 0.686646f, -0.000000f);
    instance.registerEObj( "unknown_42", 2012048, 0, 4, { -163.445999f, 4.072523f, -28.553230f }, 1.000000f, 0.000000f);
    instance.registerEObj( "unknown_43", 2012541, 0, 4, { 155.657196f, 16.220280f, -280.109894f }, 0.700000f, 0.000000f);
    instance.registerEObj( "unknown_44", 2012561, 0, 4, { -21.180799f, 10.135800f, -242.468399f }, 1.000000f, -0.000000f);
    instance.registerEObj( "unknown_45", 2012562, 0, 4, { 60.282101f, 8.200000f, -160.070908f }, 1.000000f, -0.000000f);
    instance.registerEObj( "unknown_46", 2012563, 0, 4, { -116.208397f, 4.980767f, -163.586304f }, 0.991760f, -0.000000f);
    instance.registerEObj( "unknown_47", 2012564, 0, 4, { 172.867294f, 15.671000f, -113.284599f }, 0.991800f, -0.000000f);
    instance.registerEObj( "unknown_48", 2012565, 0, 4, { -250.436905f, -0.000600f, -192.146393f }, 0.991760f, -0.000000f);
    instance.registerEObj( "unknown_49", 2012566, 0, 4, { 155.657196f, 16.220301f, -280.109894f }, 0.991800f, -0.000000f);
    instance.registerEObj( "Destination_16", 2013111, 0, 4, { -32.405041f, 10.752550f, -262.248413f }, 0.991760f, -1.008752f);
    instance.registerEObj( "unknown_50", 2013424, 0, 4, { 20.512880f, 8.383688f, -91.016861f }, 0.991760f, -0.295029f);
    instance.registerEObj( "unknown_51", 2013425, 0, 4, { 88.303833f, 12.069820f, -232.990005f }, 0.991760f, -0.173549f);
    instance.registerEObj( "unknown_52", 2013426, 0, 4, { -42.479771f, 10.964670f, -222.486404f }, 0.991760f, 1.458713f);
    instance.registerEObj( "unknown_53", 2013427, 0, 4, { -242.023407f, 1.194107f, -200.061096f }, 0.991760f, 0.000000f);
    instance.registerEObj( "unknown_54", 2013428, 0, 4, { -239.052597f, 1.194797f, -198.873306f }, 0.991760f, 1.208590f);
    instance.registerEObj( "unknown_55", 2013429, 0, 4, { 114.876999f, 14.171670f, -271.759094f }, 0.991760f, -1.331010f);
    instance.registerEObj( "unknown_56", 2013430, 0, 4, { 116.502998f, 11.771870f, -93.807716f }, 0.991760f, 0.175747f);
    instance.registerEObj( "unknown_57", 2013431, 0, 4, { 144.762299f, 13.770000f, -155.474197f }, 0.991760f, -0.153050f);
    instance.registerEObj( "unknown_58", 2013436, 0, 4, { 56.443119f, -0.000000f, -125.993797f }, 0.991760f, 0.537145f);
    instance.registerEObj( "unknown_59", 2013422, 0, 4, { -55.372379f, 6.705438f, -133.459702f }, 0.991760f, 0.000000f);

  }

  void onUpdate( QuestBattle& instance, uint64_t tickCount ) override
  {

  }

  void onEnterTerritory( QuestBattle& instance, Entity::Player& player, uint32_t eventId, uint16_t param1,
                         uint16_t param2 ) override
  {

  }

};

EXPOSE_SCRIPT( HiredGunblades );