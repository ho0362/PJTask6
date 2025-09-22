#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MActor.generated.h"

UCLASS()
class PJTASK6_API AMActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AMActor();

private:
	bool bForward = true;
	float CurrentOffset = 0.0f;
	FVector StartLocation;

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MActor|Components")
	USceneComponent* SceneRoot;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MActor|Components")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MActor|Properties")
	float MoveSpeed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MActor|Properties")
	float MoveDistance;


	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime)override;

	UFUNCTION(BlueprintCallable, Category = "MActor|Action")
	void ResetActorPosition();

	UFUNCTION(BlueprintPure, Category = "MActor|Properties")
	float GetRotationSpeed() const;
};
