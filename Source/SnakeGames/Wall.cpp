// Fill out your copyright notice in the Description page of Project Settings.


#include "Wall.h"
#include "Engine/Classes/Components/StaticMeshComponent.h"

// Sets default values
AWall::AWall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*UStaticMeshComponent* */WallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallMesh"));
	//RootComponent = WallMesh;

	WallMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	WallMesh->SetCollisionResponseToAllChannels(ECR_Overlap);
}

// Called when the game starts or when spawned
void AWall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

