#include "register_types.h"

#include "core/object/class_db.h"
#include "modules/register_module_types.h"

#include "demo_module.h"

void initialize_module_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}

	GDREGISTER_CLASS(DemoModule)

	// Your Class...
}

void uninitialize_module_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
}
