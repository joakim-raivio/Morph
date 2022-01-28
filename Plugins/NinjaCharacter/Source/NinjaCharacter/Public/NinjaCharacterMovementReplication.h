// "Ninja Character" plugin, by Javier 'Xaklse' Osset; Copyright 2020


#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementReplication.h"


/**
 * Structured data sent from the server to the client about a move that is being
 * acknowledged.
 */
struct NINJACHARACTER_API FNinjaCharacterMoveResponseDataContainer : public FCharacterMoveResponseDataContainer
{
public:
	/**
	 * Copy the FClientAdjustment and set a few flags relevant to that data.
	 */
	virtual void ServerFillResponseData(const class UCharacterMovementComponent& CharacterMovement, const FClientAdjustment& PendingAdjustment) override
	{
		FCharacterMoveResponseDataContainer::ServerFillResponseData(CharacterMovement, PendingAdjustment);

		bHasRotation = true;
	}
};
