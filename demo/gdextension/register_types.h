#ifndef GDEXTENSION_REGISTER_TYPES_H
#define GDEXTENSION_REGISTER_TYPES_H

#include <godot_cpp/godot.hpp>
using namespace godot;

void initialize_gdextension_types(ModuleInitializationLevel p_level);
void uninitialize_gdextension_types(ModuleInitializationLevel p_level);

#endif // GDEXTENSION_REGISTER_TYPES_H
