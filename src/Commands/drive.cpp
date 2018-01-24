#include <Commands/drive.h>

drive::drive() {
	Requires(Drive);
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get())
}

// Called just before this Command runs the first time
void drive::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void drive::Execute() {
	double leftValue = oi->getLeftJoystick()->GetY();
	double rightValue = oi->getRightJoystick()->GetY();
	Drive->tankDrive(leftValue, rightValue);
}

// Make this return true when this Command no longer needs to run execute()
bool drive::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void drive::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void drive::Interrupted() {

}
