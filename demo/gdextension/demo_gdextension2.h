#ifndef DEMO_GDEXTENSION_2_H
#define DEMO_GDEXTENSION_2_H

#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/wrapped.hpp>
using namespace godot;

class DemoGdextension2 : public Node2D {
	GDCLASS(DemoGdextension2, Node2D)

protected:
	static void _bind_methods() {}
};

#endif
