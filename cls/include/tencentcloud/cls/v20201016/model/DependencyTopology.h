/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DEPENDENCYTOPOLOGY_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DEPENDENCYTOPOLOGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/TopologyNode.h>
#include <tencentcloud/cls/v20201016/model/TopologyEdge.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 拓扑图（节点 + 边）
                */
                class DependencyTopology : public AbstractModel
                {
                public:
                    DependencyTopology();
                    ~DependencyTopology() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点列表
                     * @return Nodes 节点列表
                     * 
                     */
                    std::vector<TopologyNode> GetNodes() const;

                    /**
                     * 设置节点列表
                     * @param _nodes 节点列表
                     * 
                     */
                    void SetNodes(const std::vector<TopologyNode>& _nodes);

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     * 
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取边列表
                     * @return Edges 边列表
                     * 
                     */
                    std::vector<TopologyEdge> GetEdges() const;

                    /**
                     * 设置边列表
                     * @param _edges 边列表
                     * 
                     */
                    void SetEdges(const std::vector<TopologyEdge>& _edges);

                    /**
                     * 判断参数 Edges 是否已赋值
                     * @return Edges 是否已赋值
                     * 
                     */
                    bool EdgesHasBeenSet() const;

                private:

                    /**
                     * 节点列表
                     */
                    std::vector<TopologyNode> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * 边列表
                     */
                    std::vector<TopologyEdge> m_edges;
                    bool m_edgesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DEPENDENCYTOPOLOGY_H_
