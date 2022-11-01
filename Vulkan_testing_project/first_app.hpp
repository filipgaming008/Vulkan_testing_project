#pragma once

#include "lve_window.hpp"
#include "lve_pipeline.hpp"

namespace lve {
class FirstApp {
public:
	static constexpr int WIDTH = 800;
	static constexpr int HEIGHT = 600;

	void run();

private:
	LveWindow lveWindow{ WIDTH, HEIGHT, "Vulkan testing!" };
	LvePipeLine lvePipeline{"simple_shader.vert.spv", "simple_shader.frag.spv"};
};
} // namespace lve