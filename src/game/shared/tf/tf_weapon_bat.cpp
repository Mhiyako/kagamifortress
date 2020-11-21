//====== Copyright © 1996-2005, Valve Corporation, All rights reserved. =======
//
// Purpose: 
//
//=============================================================================

#include "cbase.h"
#include "tf_weapon_bat.h"
#include "decals.h"

// Client specific.
#ifdef CLIENT_DLL
#include "c_tf_player.h"
// Server specific.
#else
#include "tf_player.h"
#endif

//=============================================================================
//
// Weapon Bat tables.
//

// TFBat --
IMPLEMENT_NETWORKCLASS_ALIASED(TFBat, DT_TFWeaponBat)

BEGIN_NETWORK_TABLE(CTFBat, DT_TFWeaponBat)
END_NETWORK_TABLE()

BEGIN_PREDICTION_DATA(CTFBat)
END_PREDICTION_DATA()

LINK_ENTITY_TO_CLASS(tf_weapon_bat, CTFBat);
PRECACHE_WEAPON_REGISTER(tf_weapon_bat);
// -- TFBat


// TFBonkBat --
IMPLEMENT_NETWORKCLASS_ALIASED(TFAtomizer, DT_TFWeaponAtomizer)

BEGIN_NETWORK_TABLE(CTFAtomizer, DT_TFWeaponAtomizer)
END_NETWORK_TABLE()

BEGIN_PREDICTION_DATA(CTFAtomizer)
END_PREDICTION_DATA()

LINK_ENTITY_TO_CLASS(tf_weapon_atomizer, CTFAtomizer);
PRECACHE_WEAPON_REGISTER(tf_weapon_atomizer);

// -- TFBonkBat

// TFBatFish --
IMPLEMENT_NETWORKCLASS_ALIASED(TFBatFish, DT_TFWeaponFish)

BEGIN_NETWORK_TABLE(CTFBatFish, DT_TFWeaponFish)
END_NETWORK_TABLE()

BEGIN_PREDICTION_DATA(CTFBatFish)
END_PREDICTION_DATA()

LINK_ENTITY_TO_CLASS(tf_weapon_fish, CTFBatFish);
PRECACHE_WEAPON_REGISTER(tf_weapon_fish);
// -- TFBatFish

//=============================================================================
//
// Weapon Bat functions.
//

//-----------------------------------------------------------------------------
// Purpose:
//-----------------------------------------------------------------------------
CTFBat::CTFBat()
{
}

//-----------------------------------------------------------------------------
// Purpose:
//-----------------------------------------------------------------------------
CTFAtomizer::CTFAtomizer()
{
}

//-----------------------------------------------------------------------------
// Purpose:
//-----------------------------------------------------------------------------
CTFBatFish::CTFBatFish()
{
}
