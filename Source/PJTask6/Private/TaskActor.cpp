#include "TaskActor.h"


ATaskActor::ATaskActor()
{
    SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    SetRootComponent(SceneRoot);

    StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    StaticMeshComp->SetupAttachment(SceneRoot);

    PrimaryActorTick.bCanEverTick = true;

    RotationSpeed = 180.0f;
}

void ATaskActor::BeginPlay()
{
    Super::BeginPlay();

   

}

void ATaskActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if  (!FMath::IsNearlyZero(RotationSpeed))
    {
        AddActorLocalRotation(FRotator(0.0f, RotationSpeed * DeltaTime, 0.0f));
    }
}

void ATaskActor::ResetActorPosition()
{
    SetActorLocation(FVector::ZeroVector);

}

float ATaskActor::GetRotationSpeed() const
{
    return RotationSpeed;
}
