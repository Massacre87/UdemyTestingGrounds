// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UdemyTestingGroundsHUD.generated.h"

UCLASS()
class AUdemyTestingGroundsHUD : public AHUD
{
	GENERATED_BODY()

public:
	AUdemyTestingGroundsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

