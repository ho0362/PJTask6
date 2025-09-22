#include "MActor.h"

AMActor::AMActor()
{
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);

 	PrimaryActorTick.bCanEverTick = true;
	
	MoveSpeed = 200.0f; //이동 속도
	MoveDistance = 200.0f; // 왕복거리
}

void AMActor::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();
}

void AMActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	

	if (!FMath::IsNearlyZero(MoveSpeed))
	{
		float DeltaRotation = MoveSpeed * DeltaTime * (bForward ? 1.0f : -1.0f);
		CurrentOffset += DeltaRotation;

		if (CurrentOffset >= 200.f)
		{
			CurrentOffset = 200.f;
			bForward = false;
		}
		else if (CurrentOffset <= -200.f)
		{
			CurrentOffset = -200.f;
			bForward = true;
		}

		SetActorLocation(StartLocation + FVector(CurrentOffset, 0.0f, 0.0f));
	
	}
}

void AMActor::ResetActorPosition()
{
	SetActorLocation(StartLocation);
	CurrentOffset = 0.0f;
	bForward = true;
}

float AMActor::GetRotationSpeed() const
{
	return MoveSpeed;
}