// Copyright Epic Games, Inc. All Rights Reserved.

#include "DemoMultiPlayerHUD.h"
#include "Engine/Canvas.h"
#include "Engine/Texture2D.h"
#include "TextureResource.h"
#include "CanvasItem.h"
#include "UObject/ConstructorHelpers.h"

ADemoMultiPlayerHUD::ADemoMultiPlayerHUD()
{
	// Set the crosshair texture
	//static ConstructorHelpers::FObjectFinder<UTexture2D> CrosshairTexObj(TEXT("/Game/FirstPerson/Textures/FirstPersonCrosshair"));
	//CrosshairTex = CrosshairTexObj.Object;
}


void ADemoMultiPlayerHUD::DrawHUD()
{
	Super::DrawHUD();

}
