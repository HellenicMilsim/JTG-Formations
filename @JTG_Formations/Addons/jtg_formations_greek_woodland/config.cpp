#include "cfgPatches.hpp"
//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 174.142559 on Stable branch
// Generated with ALiVE version 1.3.6.1706261
//////////////////////////////////////////////////////////////////////////////////

class CfgFactionClasses {
    class JTG_GR {
        displayName = "Greek Army (Woodland)";
        side = 1;
        flag = "\A3\ui_f\data\map\markers\flags\Greece_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\Greece_ca.paa";
        priority = 1;
    };
};

class CfgGroups {
    class WEST {

        class JTG_GR {
            name = "Greek Army (Woodland)";

            class Infantry {
                name = "Infantry";

                class jtggr_infantry_fireteam {
                    name = "Fireteam";
                    side = 1;
                    faction = "JTG_GR";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JTGGR_Rifleman_AT";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JTGGR_Rifleman_AT";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_JTGGR_Rifleman_SAW";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_JTGGR_Rifleman_GL";
                    };
                    class Unit4 {
                        position[] = { -10 , -10 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_JTGGR_Team_Leader";
                    };
                };

                class jtggr_infantry_mg_team {
                    name = "MG Team";
                    side = 1;
                    faction = "JTG_GR";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "B_JTGGR_Machinegunner";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_JTGGR_Machinegunner_Asst";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_JTGGR_Team_Leader";
                    };
                };

            };

            class SpecOps {
                name = "Special Forces";

            };

            class Motorized {
                name = "Motorized Infantry";

                class jtggr_infantry_hmmwv_infantry_squad {
                    name = "HMMWV Infantry Squad";
                    side = 1;
                    faction = "JTG_GR";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_JTGGR_HMMWV_M2";
                    };
                };

            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support Infantry";

            };

            class Mechanized {
                name = "Mechanized Infantry";

            };

            class Armored {
                name = "Armor";

            };

            class Artillery {
                name = "Artillery";

            };

            class Naval {
                name = "Naval";

            };

            class Air {
                name = "Air";

            };


        };

    };
};


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class rhssaf_army_m93_oakleaf_summer_rifleman_m70;
    class rhssaf_army_m93_oakleaf_summer_rifleman_m70_OCimport_01 : rhssaf_army_m93_oakleaf_summer_rifleman_m70 { scope = 0; class EventHandlers; };
    class rhssaf_army_m93_oakleaf_summer_rifleman_m70_OCimport_02 : rhssaf_army_m93_oakleaf_summer_rifleman_m70_OCimport_01 { class EventHandlers; };


    class jtg_gr_infantry_rifleman : rhssaf_army_m93_oakleaf_summer_rifleman_m70_OCimport_02 {
        author = "+= rath";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "JTG_GR";

        identityTypes[] = { "Head_Euro" , "LanguageENG_F" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['rhs_weap_m16a4_carryhandle','','','',['rhs_mag_30Rnd_556x45_Mk262_Stanag',30],[],''],[],['rhsusf_weap_m1911a1','','','',['rhsusf_mag_7x45acp_MHP',7],[],''],['jtg_u_gr_fatigue_01',[['FirstAidKit',1],['rhs_mag_30Rnd_556x45_Mk262_Stanag',3,30],['rhsusf_mag_7x45acp_MHP',1,7]]],[],[],'jtg_h_6b27m_ess_gr','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class jtg_grd_infantry_rifleman : jtg_gr_infantry_rifleman {
        author = "+= rath";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "JTG_GR";

        identityTypes[] = { "Head_Euro" , "LanguageENG_F" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['rhs_weap_m16a4_carryhandle','','','',['rhs_mag_30Rnd_556x45_Mk262_Stanag',30],[],''],[],['rhsusf_weap_m1911a1','','','',['rhsusf_mag_7x45acp_MHP',7],[],''],['jtg_u_grd_fatigue_01',[['FirstAidKit',1],['rhs_mag_30Rnd_556x45_Mk262_Stanag',3,30],['rhsusf_mag_7x45acp_MHP',1,7]]],[],[],'jtg_h_6b27m_ess_grd','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_JTGGR_Rifleman : jtg_gr_infantry_rifleman {
        author = "+= rath";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "JTG_GR";

        identityTypes[] = { "Head_Greek" , "LanguageENG_F" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['hlc_rifle_g3a3v','','','',['hlc_20rnd_762x51_b_G3',20],[],''],[],[],['jtg_u_gr_fatigue_01',[['ACE_fieldDressing',4],['ACE_morphine',2],['ACE_CableTie',1],['ACE_Flashlight_XL50',1],['ACE_epinephrine',1],['ACE_EarPlugs',1],['hlc_20rnd_762x51_b_G3',1,20]]],['jtg_v_6b5_gr',[['ACE_IR_Strobe_Item',1],['SmokeShell',2,1],['MiniGrenade',2,1],['SmokeShellRed',2,1],['SmokeShellGreen',2,1]]],['B_AssaultPack_rgr',[['ACE_EntrenchingTool',1],['hlc_20rnd_762x51_T_G3',10,20]]],'jtg_h_6b27m_gr','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_JTGGR_Rifleman_AT : B_JTGGR_Rifleman {
        author = "+= rath";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 1;
        faction = "JTG_GR";

        identityTypes[] = { "Head_Greek" , "LanguageENG_F" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['hlc_rifle_g3a3v','','','',['hlc_20rnd_762x51_b_G3',20],[],''],['rhs_weap_rpg26','','','',['rhs_rpg26_mag',1],[],''],[],['jtg_u_gr_fatigue_01',[['ACE_fieldDressing',4],['ACE_morphine',2],['ACE_CableTie',1],['ACE_Flashlight_XL50',1],['ACE_epinephrine',1],['ACE_EarPlugs',1],['hlc_20rnd_762x51_b_G3',1,20]]],['jtg_v_6b5_gr',[['ACE_IR_Strobe_Item',1],['SmokeShell',2,1],['MiniGrenade',2,1],['SmokeShellRed',2,1],['SmokeShellGreen',2,1],['rhs_rpg26_mag',1,1]]],['B_AssaultPack_rgr',[['ACE_EntrenchingTool',1],['hlc_20rnd_762x51_T_G3',10,20]]],'jtg_h_6b27m_gr','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_JTGGR_Machinegunner : B_JTGGR_Rifleman {
        author = "+= rath";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machinegunner";
        side = 1;
        faction = "JTG_GR";

        identityTypes[] = { "Head_Greek" , "LanguageENG_F" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['hlc_lmg_MG3','','','',['hlc_50Rnd_762x51_B_MG3',50],[],''],[],['rhsusf_weap_m1911a1','','','',['rhsusf_mag_7x45acp_MHP',7],[],''],['jtg_u_gr_fatigue_01',[['ACE_fieldDressing',4],['ACE_morphine',2],['ACE_CableTie',1],['ACE_Flashlight_XL50',1],['ACE_epinephrine',1],['ACE_EarPlugs',1],['rhsusf_mag_7x45acp_MHP',3,7]]],['jtg_v_md99',[['ACE_IR_Strobe_Item',1],['SmokeShell',2,1],['MiniGrenade',2,1],['SmokeShellRed',2,1],['SmokeShellGreen',2,1]]],['B_AssaultPack_rgr',[['ACE_EntrenchingTool',1],['hlc_100Rnd_762x51_Barrier_MG3',3,100]]],'jtg_h_6b27m_gr','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_JTGGR_Machinegunner_Asst : B_JTGGR_Rifleman {
        author = "+= rath";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machinegunner Asst";
        side = 1;
        faction = "JTG_GR";

        identityTypes[] = { "Head_Greek" , "LanguageENG_F" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['hlc_rifle_g3a3v','','','',['hlc_20rnd_762x51_b_G3',20],[],''],[],['rhsusf_weap_m1911a1','','','',['rhsusf_mag_7x45acp_MHP',7],[],''],['jtg_u_gr_fatigue_01',[['ACE_fieldDressing',4],['ACE_morphine',2],['ACE_CableTie',1],['ACE_Flashlight_XL50',1],['ACE_epinephrine',1],['ACE_EarPlugs',1],['hlc_20rnd_762x51_b_G3',1,20],['rhsusf_mag_7x45acp_MHP',2,7]]],['jtg_v_md99_od',[['ACE_IR_Strobe_Item',1],['SmokeShell',2,1],['MiniGrenade',2,1],['SmokeShellRed',2,1],['SmokeShellGreen',2,1],['rhsusf_mag_7x45acp_MHP',1,7],['hlc_20rnd_762x51_T_G3',2,20]]],['B_Kitbag_rgr',[['ACE_EntrenchingTool',1],['hlc_20rnd_762x51_T_G3',6,20],['hlc_50Rnd_762x51_M_MG3',6,50]]],'jtg_h_6b27m_gr','',['Binocular','','','',[],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_JTGGR_Rifleman_SAW : B_JTGGR_Rifleman {
        author = "+= rath";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (SAW)";
        side = 1;
        faction = "JTG_GR";

        identityTypes[] = { "Head_Greek" , "LanguageENG_F" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['hlc_lmg_minimi','','','',['hlc_200rnd_556x45_M_SAW',200],[],''],[],[],['jtg_u_gr_fatigue_01',[['ACE_fieldDressing',4],['ACE_morphine',2],['ACE_CableTie',1],['ACE_Flashlight_XL50',1],['ACE_epinephrine',1],['ACE_EarPlugs',1]]],['jtg_v_6b5_gr',[['ACE_IR_Strobe_Item',1],['SmokeShell',2,1],['MiniGrenade',2,1],['SmokeShellRed',2,1],['SmokeShellGreen',2,1]]],['B_AssaultPack_rgr',[['200Rnd_556x45_Box_Tracer_F',3,200]]],'jtg_h_6b27m_ess2_gr','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_JTGGR_Team_Leader : B_JTGGR_Rifleman {
        author = "+= rath";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "JTG_GR";

        identityTypes[] = { "Head_Greek" , "LanguageENG_F" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['HLC_Rifle_g3ka4_GL','','','',['hlc_20rnd_762x51_b_G3',20],['1Rnd_HE_Grenade_shell',1],''],[],[],['jtg_u_gr_fatigue_01',[['ACE_fieldDressing',4],['ACE_morphine',2],['ACE_CableTie',1],['ACE_Flashlight_XL50',1],['ACE_epinephrine',1],['ACE_EarPlugs',1],['hlc_20rnd_762x51_b_G3',1,20]]],['jtg_v_6b5_gr',[['ACE_IR_Strobe_Item',1],['SmokeShell',2,1],['MiniGrenade',2,1],['SmokeShellRed',2,1],['SmokeShellGreen',2,1],['hlc_20rnd_762x51_T_G3',2,20],['rhs_mag_M441_HE',1,1]]],['tf_rt1523g_black',[['ACE_EntrenchingTool',1],['ACE_microDAGR',1],['hlc_20rnd_762x51_T_G3',4,20],['1Rnd_HE_Grenade_shell',4,1],['1Rnd_Smoke_Grenade_shell',3,1]]],'jtg_h_6b27m_ess_gr','',['Binocular','','','',[],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_JTGGR_Rifleman_GL : B_JTGGR_Team_Leader {
        author = "+= rath";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (GL)";
        side = 1;
        faction = "JTG_GR";

        identityTypes[] = { "Head_Greek" , "LanguageENG_F" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['HLC_Rifle_g3ka4_GL','','','',['hlc_20rnd_762x51_b_G3',20],['1Rnd_HE_Grenade_shell',1],''],[],[],['jtg_u_gr_fatigue_01',[['ACE_fieldDressing',4],['ACE_morphine',2],['ACE_CableTie',1],['ACE_Flashlight_XL50',1],['ACE_epinephrine',1],['ACE_EarPlugs',1],['hlc_20rnd_762x51_b_G3',1,20]]],['jtg_v_6b5_gr',[['ACE_IR_Strobe_Item',1],['SmokeShell',2,1],['MiniGrenade',2,1],['SmokeShellRed',2,1],['SmokeShellGreen',2,1],['hlc_20rnd_762x51_T_G3',2,20],['rhs_mag_M441_HE',1,1]]],['B_Kitbag_rgr',[['ACE_EntrenchingTool',1],['ACE_microDAGR',1],['hlc_20rnd_762x51_T_G3',10,20],['1Rnd_HE_Grenade_shell',10,1],['1Rnd_Smoke_Grenade_shell',4,1],['1Rnd_SmokeRed_Grenade_shell',2,1],['1Rnd_SmokeGreen_Grenade_shell',2,1],['UGL_FlareWhite_F',2,1]]],'jtg_h_6b27m_gr','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_JTGGR_Pilot : jtg_gr_infantry_rifleman {
        author = "+= rath";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 1;
        faction = "JTG_GR";

        identityTypes[] = { "Head_Greek" , "LanguageENG_F" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [[],[],['hlc_Pistol_M11A1','','','',['hlc_13Rnd_9x19_B_P228',13],[],''],['jtg_u_gr_pilot_fatigue',[['ACE_fieldDressing',4],['ACE_morphine',2],['ACE_IR_Strobe_Item',2],['ACE_microDAGR',1],['ACE_epinephrine',1],['hlc_13Rnd_9x19_B_P228',3,13],['SmokeShellPurple',2,1],['SmokeShell',2,1]]],[],[],'H_PilotHelmetHeli_B','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_JTGGR_Crewman : B_JTGGR_Rifleman {
        author = "+= rath";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 1;
        faction = "JTG_GR";

        identityTypes[] = { "Head_Greek" , "LanguageENG_F" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['hlc_smg_mp5k_PDW','','','',['hlc_30Rnd_9x19_B_MP5',30],[],''],[],[],['jtg_u_grod_fatigue_01',[['ACE_fieldDressing',4],['ACE_morphine',2],['ACE_CableTie',1],['ACE_Flashlight_XL50',1],['ACE_epinephrine',1],['ACE_EarPlugs',1],['hlc_30Rnd_9x19_B_MP5',2,30]]],['jtg_v_md99_od',[['ACE_IR_Strobe_Item',1],['SmokeShell',2,1],['MiniGrenade',2,1],['SmokeShellRed',2,1],['SmokeShellGreen',2,1],['hlc_30Rnd_9x19_GD_MP5',3,30]]],[],'rhsusf_ach_bare_headset','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_JTGGR_Officer : B_JTGGR_Team_Leader {
        author = "+= rath";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "JTG_GR";

        identityTypes[] = { "Head_Greek" , "LanguageENG_F" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['HLC_Rifle_g3ka4_GL','','','',['hlc_20rnd_762x51_b_G3',20],['1Rnd_HE_Grenade_shell',1],''],[],['rhsusf_weap_m1911a1','','','',['rhsusf_mag_7x45acp_MHP',7],[],''],['jtg_u_gr_fatigue_01',[['ACE_fieldDressing',4],['ACE_morphine',2],['ACE_CableTie',1],['ACE_Flashlight_XL50',1],['ACE_epinephrine',1],['ACE_EarPlugs',1],['hlc_20rnd_762x51_b_G3',1,20]]],['jtg_v_6b5_gr',[['ACE_IR_Strobe_Item',1],['SmokeShell',2,1],['MiniGrenade',1,1],['SmokeShellRed',1,1],['rhsusf_mag_7x45acp_MHP',1,7],['hlc_20rnd_762x51_T_G3',3,20]]],['tf_rt1523g_black',[['ACE_EntrenchingTool',1],['ACE_microDAGR',1],['1Rnd_HE_Grenade_shell',3,1],['1Rnd_Smoke_Grenade_shell',3,1],['rhsusf_mag_7x45acp_MHP',1,7],['hlc_20rnd_762x51_T_G3',4,20]]],'jtg_h_booniehat_gr','',['Binocular','','','',[],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};