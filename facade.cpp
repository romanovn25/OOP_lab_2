#include "facade.h"

std::string Facade::read_operation(const std::string& fp) {
    return file_worker.parse_file(fp);
}

void Facade::check_operation(const std::string& ft) {
    json_cheker.check_json(ft);
}
