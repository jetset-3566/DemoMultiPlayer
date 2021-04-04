// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "DemoMultiPlayerHUD.generated.h"

UCLASS()
class ADemoMultiPlayerHUD : public AHUD
{
	GENERATED_BODY()

public:
	ADemoMultiPlayerHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

};

