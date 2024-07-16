#pragma once

#include "../device.hpp"
#include "../render_graph.hpp"
#include "../../data/entity.hpp"

namespace sr::rtpass {
	void onExecute(RenderGraph& graph, GraphicsDevice& device, const CommandList& commandList, const Buffer& perFrameUBO, const std::vector<Entity*>& entities);
}