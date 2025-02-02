#include <stdio.h>
#include <electrostatic/electronetsoft/comm/comm.h>

comm_protocol serial;
comm_protocol parallel;

int main() {
    init_protocol_default(&serial, SERIAL_RS232, NULL);
    init_protocol_default(&parallel, IEEE_1284, NULL);
    parallel.open(0);
    serial.open(0);
    return 0;
}
