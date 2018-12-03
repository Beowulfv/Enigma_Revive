class CfgExileCustomCode 
{
	ExileClient_object_player_death_startBleedingOut = "custom\EnigmaRevive\ExileClient_object_player_death_startBleedingOut.sqf";
	ExileClient_object_player_event_onInventoryOpened = "custom\EnigmaRevive\ExileClient_object_player_event_onInventoryOpened.sqf";
};

class CfgInteractionMenus
{
	class Player 
	{
		targetType = 2;
		target = "Exile_Unit_Player";

		class Actions 
		{
			class Revive: ExileAbstractAction
			{
				title = "Perform CPR";
				condition = "(!(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['EnigmaRevivePermitted', true]) && (magazines player find 'Exile_Item_Defibrillator' >= 0))";
				action = "_this spawn Enigma_RevivePlyr";
			}; 
		};
	};
};

class FirstAid
{
	name = "FirstAid";
	icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
	items[] = 
	{
		"Exile_Item_InstaDoc",
		"Exile_Item_Bandage",
		"Exile_Item_Vishpirin",
		"Exile_Item_Heatpack",
		"Exile_Item_Defibrillator"
	};
};

class Exile_Item_Defibrillator				{ quality = 1; price = 7500; };