#pragma once

class game {
public:
	virtual void start() = 0;
	virtual void stop() = 0;
protected:
	virtual void update() = 0;

 };
