#include <Commands/ShootBall.h>

ShootBall::ShootBall() {
	Requires(ballShooter);
	// Use Requires() here to declare subsystem dependencies

}

// Called just before this Command runs the first time
void ShootBall::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void ShootBall::Execute() {
	bool getButton = oi->getShootButton()->Get();
	if(getButton==true)
	{
	ballShooter->ShootBall(.5);
	}
	else
	{
		ballShooter->ShootStop();
	}
}

// Make this return true when this Command no longer needs to run execute()
bool ShootBall::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ShootBall::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShootBall::Interrupted() {

}
