#include "Communication_Format.cpp"
#include "Cashless.cpp"

void setup() {
    Serial1.begin(9600, SERIAL_9N1);                 //Set up the UART for MDB appropriate settings.
	settings();
	Particle.function("Reset", reSET);
    Particle.function("Begin", beginSession);
    Particle.function("Cancel", sessionCancelRequest);
    Particle.function("Approve", vendApproved);
    Particle.function("Deny", vendDenied);
    Particle.function("Display", displayRequest);
    //Particle.function("Entry", dataEntryRequest);
}

//int reSET(String data) {
//    rESET();
//    return 1;
//}