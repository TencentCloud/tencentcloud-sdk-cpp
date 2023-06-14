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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEVIEWSRESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEVIEWSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/ClusterView.h>
#include <tencentcloud/es/v20180416/model/NodeView.h>
#include <tencentcloud/es/v20180416/model/KibanaView.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeViews返回参数结构体
                */
                class DescribeViewsResponse : public AbstractModel
                {
                public:
                    DescribeViewsResponse();
                    ~DescribeViewsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群维度视图
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterView 集群维度视图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClusterView GetClusterView() const;

                    /**
                     * 判断参数 ClusterView 是否已赋值
                     * @return ClusterView 是否已赋值
                     * 
                     */
                    bool ClusterViewHasBeenSet() const;

                    /**
                     * 获取节点维度视图
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodesView 节点维度视图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NodeView> GetNodesView() const;

                    /**
                     * 判断参数 NodesView 是否已赋值
                     * @return NodesView 是否已赋值
                     * 
                     */
                    bool NodesViewHasBeenSet() const;

                    /**
                     * 获取Kibana维度视图
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KibanasView Kibana维度视图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KibanaView> GetKibanasView() const;

                    /**
                     * 判断参数 KibanasView 是否已赋值
                     * @return KibanasView 是否已赋值
                     * 
                     */
                    bool KibanasViewHasBeenSet() const;

                private:

                    /**
                     * 集群维度视图
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClusterView m_clusterView;
                    bool m_clusterViewHasBeenSet;

                    /**
                     * 节点维度视图
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeView> m_nodesView;
                    bool m_nodesViewHasBeenSet;

                    /**
                     * Kibana维度视图
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KibanaView> m_kibanasView;
                    bool m_kibanasViewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEVIEWSRESPONSE_H_
