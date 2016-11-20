#include <signal.h>
#include <iostream>
#include <pthread.h>
#include <unistd.h>
#include <vector>

#include "Example.h"

bool amWorking = true;
void sig_handler (int signo);

int 
main (int argc, char ** argv) {
	std::vector<IStamp *> plan;

	plan.push_back (new Spoon(1));

	signal (SIGINT, sig_handler);
	while (amWorking) {
		usleep (1000);
	}

	return 0;
}

void
sig_handler (int signo) {
	if (signo == SIGINT) {
		amWorking = false;
	}
}

