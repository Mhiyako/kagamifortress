//====== Copyright © 1996-2005, Valve Corporation, All rights reserved. =======
//
// Purpose: 
//
//=============================================================================

#ifndef TF_WEAPON_BAT_H
#define TF_WEAPON_BAT_H
#ifdef _WIN32
#pragma once
#endif

#include "tf_weaponbase_melee.h"

#ifdef CLIENT_DLL
#define CTFBat C_TFBat
#define CTFAtomizer C_TFAtomizer
#define CTFBatFish C_TFBatFish
#endif

//=============================================================================
//
// Bat class.
//
class CTFBat : public CTFWeaponBaseMelee
{
public:

	DECLARE_CLASS(CTFBat, CTFWeaponBaseMelee);
	DECLARE_NETWORKCLASS();
	DECLARE_PREDICTABLE();

	CTFBat();
	virtual int			GetWeaponID(void) const { return TF_WEAPON_BAT; }

private:

	CTFBat(const CTFBat&) {}
};


//=============================================================================
//
// CTFAtomizer class.
//
class CTFAtomizer : public CTFWeaponBaseMelee
{
public:

	DECLARE_CLASS(CTFAtomizer, CTFWeaponBaseMelee);
	DECLARE_NETWORKCLASS();
	DECLARE_PREDICTABLE();

	CTFAtomizer();
	virtual int			GetWeaponID(void) const { return TF_WEAPON_ATOMIZER; }

private:

	CTFAtomizer(const CTFAtomizer&) {}
};

//=============================================================================
//
// CTFBatFish class.
//
class CTFBatFish : public CTFWeaponBaseMelee
{
public:

	DECLARE_CLASS(CTFAtomizer, CTFWeaponBaseMelee);
	DECLARE_NETWORKCLASS();
	DECLARE_PREDICTABLE();

	CTFBatFish();
	virtual int			GetWeaponID(void) const { return TF_WEAPON_ATOMIZER; }

private:

	CTFBatFish(const CTFBatFish&) {}
};


#endif // TF_WEAPON_BAT_H
