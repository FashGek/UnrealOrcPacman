// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BaseStateComponent.h"
#include "PinkChaseStateComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ORCVSHUMAN_API UPinkChaseStateComponent : public UBaseStateComponent
{
	GENERATED_BODY()
	
public:
   UPinkChaseStateComponent();

   UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Orc Pathfinding")
      float repathTimer;

   // Called when the game starts
   virtual void InitializeComponent() override;

   // Called every frame
   virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

   virtual void enter(UFSMComponent* _fsm) override;
   virtual void execute(float deltaTime) override;
   virtual void exit() override;

private:
   float currentRepathTimer;
	
};
