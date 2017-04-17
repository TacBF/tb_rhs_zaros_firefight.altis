class TB_vehicleInit {
	class GMGremove {
		Code = "if (local _this) then { _this removeWeaponTurret ['GMG_40mm', [0]]; };";
	};
	class TIGRremove {
		Code = "if (local _this) then { _this removeWeaponTurret ['RHS_weap_Ags30_tigr', [0]]; };";
	};
	class s8remove {
		Code = "if (local _this) then { _this removeWeaponTurret ['rhs_weap_s8', [-1]]; _this removeWeaponTurret ['rhs_weap_s8_df', [-1]]; };";
	};
	class initAUG {
		Code = "[_this] execVM 'functions\OffroadAUG.sqf'; ";
	};
};