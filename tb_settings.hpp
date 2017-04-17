class ICE
{
    class vehicles
    {
		class armaments
        {
			startFullyRearmed = 1;
        };
    };
	class zones
	{
    #include "zoneList.hpp"
	};
	class mission
	{
		gameMode = "A&S";
		missionScale = "small";
		recommendedTotalPlayers = 20;

        class briefings
        {
			class west
			{
				original = "briefing_blue.hpp";
			};
			class east
			{
				original = "briefing_red.hpp";
			};
        };
		class factions // or sides
		{
			class faction
			{
				bluFor = "TB_faction_USA";
				opFor = "TB_faction_RUS";
			};
		};
		class scoring
		{
			class tickets
			{
				// In A&S, specify the tickets per hour
				// In A&D, Attacker = starting tickets, Defender = tickets per zone
				// In S&D, Attacker = starting tickets, Defender = # of caches
				bluFor = 75;
				opFor = 75;
			};
		};
	};
	class respawn
	{
        class vehicles
        {
            class respawnDelay
            {
                //'globalOverride' takes precedence over 'multiplier'
                //globalOverride = -1; // Value is in minutes. set to >= 0 to override scaled "vehicle category" values.
                multiplier = 0.5; // set to > 0 to override scaled "vehicle category" values. Eg: 0.5 to halve all values. 1.5 to increase all values.
                //(<= 0 uses default multiplier), (> 0, < 1 scales down), (> 1 scales up), (== 1 uses 1 for all vehicles, regardless of missionScale)
            };
        };
		class FO
		{
			minSpacingDist = 500;
			maxFriendlySiteDist = 750;
		};
		class SRP
		{
			maxFriendlySiteDist = 300;
		};
		class HO
		{
			minSpacingDist = 250;
			maxFriendlySiteDist = 750;
		};
        class infantry
        {
            baseDuration = 60;
            class unevenTeamsPenaltyTime
            {
                ratioDuration = 30; // "pivot value" where low player count differences result in small time penalties,
                // but large differences result in exponential time penalties
                maxDuration = 60;
            };
        };
	};
	class gameModes
	{
	    class objectives
        {
            class zones
            {
                class captureRates
                {
                    heldZoneMultiplier = 1.0; // Decimal value between 0 and N - <1 reduces capture rate, >1 increases capture rate
					neutralZoneMultiplier = 1.5; // This is a cumulative multiplier with 'heldZoneMultiplier'
					negateNeutral = 1; // set to 1 to make both Multipliers totally independent, not a "cumulative multiplier"
                };
            };
		};
        class AAS
		{
			class ticketBleedRate
			{
				bluFor = 100;
				opFor = 100;
			};
		};
	};
    class gear
    {
        #include "tb_kitDefines.sqh" 
        #include "tb_magazineExclusions.hpp"
	    class NVGogglesForAll
        {
            west = 1;
            east = 1;
            resistance = 1;
        };
        class roles
        {
			#define __unlimited -99
            kits[] =
            {
                #include "factions\BLU_F_roleRatio.hpp"
                #include "factions\OPF_F_roleRatio.hpp"
            };
		};
	    class armaments
		{
			class TB_faction_USA
			{
				defaultGear = "factions\BLU_F.sqh";
				#include "factions\_common_smallItems.sqh"
				#include "factions\BLU_F_gear.sqh"
				#include "factions\BLU_F_uniforms.sqh"
			};
			class TB_faction_RUS
			{
				defaultGear = "factions\OPF_F.sqh";
				#include "factions\_common_smallItems.sqh"
				#include "factions\OPF_F_gear.sqh"
				#include "factions\OPF_F_uniforms.sqh"
			};
		};
	};
};
