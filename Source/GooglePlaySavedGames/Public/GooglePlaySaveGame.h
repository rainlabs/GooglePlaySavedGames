// Google Play Saved Games
// Created by Vladimir Ziablitskii
// Copyright 2018 Sibirianit All Rights Reserved.

#pragma once

#include "GooglePlayCloudSaveGame.h"
#include "GooglePlaySaveGame.generated.h"


/** Metadata Struct */
USTRUCT(BlueprintType)
struct FGooglePlaySnapshotMetadata
{
	GENERATED_BODY()
};

/**
 * Save Game class with Google Play snapshot metadata
 */
UCLASS(Blueprintable, BlueprintType)
class GOOGLEPLAYSAVEDGAMES_API UGooglePlaySaveGame : public UGooglePlayCloudSaveGame
{
	GENERATED_BODY()

public:
	// first members initialize (constructor)
	UGooglePlaySaveGame(const class FObjectInitializer& ObjectInitializer);
};
