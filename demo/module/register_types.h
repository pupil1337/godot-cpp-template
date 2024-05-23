#ifndef MODULE_REGISTER_TYPES_H
#define MODULE_REGISTER_TYPES_H

#include "modules/register_module_types.h"

// initialize_xxx_module, xxx is folder name
void initialize_module_module(ModuleInitializationLevel p_level);
void uninitialize_module_module(ModuleInitializationLevel p_level);

#endif // MODULE_REGISTER_TYPES_H
