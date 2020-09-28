#include "gflags/gflags.h"
#include "spdlog/spdlog.h"

DEFINE_string(shared_memory, "", "Shared memory name provided by emulator -share-vid option");
DEFINE_int32(port, 8080, "Port number that will host web socket server (8080 by default)");

int main(int argc, char* argv[]) {

    gflags::ParseCommandLineFlags(&argc, &argv, true);

    spdlog::set_level(spdlog::level::debug);
    return 0;
}











