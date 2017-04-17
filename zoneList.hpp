#include "tb_defines.hpp"

zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}         	, {}    , 1      , {}        , 0      },

{ 1, TEAM_BLUE, 	SPAWN_XRAY,     {3}      	, {}    , 1      , {}        , 0    , "%3" },
{ 2, TEAM_RED, 		SPAWN_XRAY,     {11}			, {}    , 1      , {}        , 0    , "%3" },

{ 3, TEAM_BLUE, 	SPAWN_NEVER,    {1,4}      	, {}   	, 1      , {}        , 0    , "Huts" },
{ 4, TEAM_BLUE, 	SPAWN_NEVER,    {3,5}  		, {}    , 1      , {}        , 0    , "Eagle nest" },
{ 5, TEAM_NEUTRAL, 	SPAWN_NEVER,    {4,6}      	, {}  	, 1      , {}        , 0    , "Overlook" },
{ 6, TEAM_NEUTRAL, 	SPAWN_NEVER,    {5,7}      	, {}   	, 1      , {}        , 0    , "Graveyard" },
{ 7, TEAM_NEUTRAL, 	SPAWN_NEVER,    {6,8}		, {}    , 1      , {}        , 0    , "House" },
{ 8, TEAM_NEUTRAL, 	SPAWN_NEVER,    {7,9}      	, {}    , 1      , {}		 , 0    , "Old chapel" },
{ 9, TEAM_NEUTRAL, 	SPAWN_NEVER,  	{8,10}		, {}    , 1      , {}    	 , 0    , "Barracks" },
{ 10, TEAM_RED, 	SPAWN_NEVER,  	{9,11}		, {}    , 1      , {}    	 , 0    , "Hideout" },
{ 11, TEAM_RED, 	SPAWN_NEVER,  	{10,2}		, {}    , 1      , {}    	 , 0    , "Junkyard" },
{ 12,TEAM_BLUE, 	SPAWN_INSTANT,  {}			, {}    , 1	     , {1,5}     , 2    , "F.O. Eagle" },
{ 13,TEAM_RED, 		SPAWN_INSTANT,  {}			, {}    , 1      , {2,9}   	 , 2    , "F.O. Bear" }
};