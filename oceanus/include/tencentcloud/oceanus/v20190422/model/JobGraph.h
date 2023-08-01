/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBGRAPH_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBGRAPH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/JobGraphNode.h>
#include <tencentcloud/oceanus/v20190422/model/JobGraphEdge.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 作业运行图
                */
                class JobGraph : public AbstractModel
                {
                public:
                    JobGraph();
                    ~JobGraph() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取运行图的点集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nodes 运行图的点集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<JobGraphNode> GetNodes() const;

                    /**
                     * 设置运行图的点集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodes 运行图的点集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodes(const std::vector<JobGraphNode>& _nodes);

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     * 
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取运行图的边集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Edges 运行图的边集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<JobGraphEdge> GetEdges() const;

                    /**
                     * 设置运行图的边集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _edges 运行图的边集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEdges(const std::vector<JobGraphEdge>& _edges);

                    /**
                     * 判断参数 Edges 是否已赋值
                     * @return Edges 是否已赋值
                     * 
                     */
                    bool EdgesHasBeenSet() const;

                private:

                    /**
                     * 运行图的点集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<JobGraphNode> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * 运行图的边集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<JobGraphEdge> m_edges;
                    bool m_edgesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBGRAPH_H_
