#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TaskActor.generated.h"




UCLASS()
class PJTASK6_API ATaskActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ATaskActor();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="TaskActor|Components")
	USceneComponent* SceneRoot;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TaskActor|Components")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "TaskActor|Properties")
	float RotationSpeed;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime)override;

	UFUNCTION(BlueprintCallable, Category = "TaskActor|Action")
	void ResetActorPosition();
	
	UFUNCTION(BlueprintPure, Category="TaskActor|Properties")
	float GetRotationSpeed() const;

	
};


