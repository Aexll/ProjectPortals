// Fill out your copyright notice in the Description page of Project Settings.


#include "ExedrePortal.h"

AExedrePortal::AExedrePortal(const FObjectInitializer& ObjectInitializer)
{
}


// Called when the game starts or when spawned
void AExedrePortal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AExedrePortal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AExedrePortal::IsActive()
{
	return false;
}

void AExedrePortal::SetActive(bool NewActive)
{
}

void AExedrePortal::ClearRTT()
{
}

void AExedrePortal::SetRTT(UTexture* RenderTexture)
{
}

void AExedrePortal::ForceTick()
{
}

AActor* AExedrePortal::GetTarget()
{
	return nullptr;
}

void AExedrePortal::SetTarget(AActor* NewTarget)
{
}

bool AExedrePortal::IsPointInFrontOfPortal(FVector Point, FVector PortalLocation, FVector PortalNormal)
{
	return false;
}

bool AExedrePortal::IsPointCrossingPortal(FVector Point, FVector PortalLocation, FVector PortalNormal)
{
	return false;
}

void AExedrePortal::TeleportActor(AActor* ActorToTeleport)
{
}

