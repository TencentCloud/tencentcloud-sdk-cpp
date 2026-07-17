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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBETOPOLOGYNEWRESPONSE_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBETOPOLOGYNEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/TopologyNode.h>
#include <tencentcloud/apm/v20210622/model/TopologyEdgeNew.h>
#include <tencentcloud/apm/v20210622/model/SelectorView.h>
#include <tencentcloud/apm/v20210622/model/OverviewStats.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTopologyNew返回参数结构体
                */
                class DescribeTopologyNewResponse : public AbstractModel
                {
                public:
                    DescribeTopologyNewResponse();
                    ~DescribeTopologyNewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>节点集合</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nodes <p>节点集合</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TopologyNode> GetNodes() const;

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     * 
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取<p>边集合</p>
                     * @return Edges <p>边集合</p>
                     * 
                     */
                    std::vector<TopologyEdgeNew> GetEdges() const;

                    /**
                     * 判断参数 Edges 是否已赋值
                     * @return Edges 是否已赋值
                     * 
                     */
                    bool EdgesHasBeenSet() const;

                    /**
                     * 获取<p>拓扑图是否有修改</p><p>枚举值：</p><ul><li>0： 拓扑图未修改</li><li>1： 拓扑图已修改</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopologyModifyFlag <p>拓扑图是否有修改</p><p>枚举值：</p><ul><li>0： 拓扑图未修改</li><li>1： 拓扑图已修改</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTopologyModifyFlag() const;

                    /**
                     * 判断参数 TopologyModifyFlag 是否已赋值
                     * @return TopologyModifyFlag 是否已赋值
                     * 
                     */
                    bool TopologyModifyFlagHasBeenSet() const;

                    /**
                     * 获取<p>节点数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Selectors <p>节点数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SelectorView GetSelectors() const;

                    /**
                     * 判断参数 Selectors 是否已赋值
                     * @return Selectors 是否已赋值
                     * 
                     */
                    bool SelectorsHasBeenSet() const;

                    /**
                     * 获取<p>节点状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OverviewStats <p>节点状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OverviewStats GetOverviewStats() const;

                    /**
                     * 判断参数 OverviewStats 是否已赋值
                     * @return OverviewStats 是否已赋值
                     * 
                     */
                    bool OverviewStatsHasBeenSet() const;

                private:

                    /**
                     * <p>节点集合</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TopologyNode> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * <p>边集合</p>
                     */
                    std::vector<TopologyEdgeNew> m_edges;
                    bool m_edgesHasBeenSet;

                    /**
                     * <p>拓扑图是否有修改</p><p>枚举值：</p><ul><li>0： 拓扑图未修改</li><li>1： 拓扑图已修改</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_topologyModifyFlag;
                    bool m_topologyModifyFlagHasBeenSet;

                    /**
                     * <p>节点数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SelectorView m_selectors;
                    bool m_selectorsHasBeenSet;

                    /**
                     * <p>节点状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OverviewStats m_overviewStats;
                    bool m_overviewStatsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBETOPOLOGYNEWRESPONSE_H_
