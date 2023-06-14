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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_EXCLUSIVECLUSTER_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_EXCLUSIVECLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ClusterItem.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 独占集群
                */
                class ExclusiveCluster : public AbstractModel
                {
                public:
                    ExclusiveCluster();
                    ~ExclusiveCluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取4层独占集群列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return L4Clusters 4层独占集群列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ClusterItem> GetL4Clusters() const;

                    /**
                     * 设置4层独占集群列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _l4Clusters 4层独占集群列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetL4Clusters(const std::vector<ClusterItem>& _l4Clusters);

                    /**
                     * 判断参数 L4Clusters 是否已赋值
                     * @return L4Clusters 是否已赋值
                     * 
                     */
                    bool L4ClustersHasBeenSet() const;

                    /**
                     * 获取7层独占集群列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return L7Clusters 7层独占集群列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ClusterItem> GetL7Clusters() const;

                    /**
                     * 设置7层独占集群列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _l7Clusters 7层独占集群列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetL7Clusters(const std::vector<ClusterItem>& _l7Clusters);

                    /**
                     * 判断参数 L7Clusters 是否已赋值
                     * @return L7Clusters 是否已赋值
                     * 
                     */
                    bool L7ClustersHasBeenSet() const;

                    /**
                     * 获取vpcgw集群
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassicalCluster vpcgw集群
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClusterItem GetClassicalCluster() const;

                    /**
                     * 设置vpcgw集群
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classicalCluster vpcgw集群
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClassicalCluster(const ClusterItem& _classicalCluster);

                    /**
                     * 判断参数 ClassicalCluster 是否已赋值
                     * @return ClassicalCluster 是否已赋值
                     * 
                     */
                    bool ClassicalClusterHasBeenSet() const;

                private:

                    /**
                     * 4层独占集群列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ClusterItem> m_l4Clusters;
                    bool m_l4ClustersHasBeenSet;

                    /**
                     * 7层独占集群列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ClusterItem> m_l7Clusters;
                    bool m_l7ClustersHasBeenSet;

                    /**
                     * vpcgw集群
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClusterItem m_classicalCluster;
                    bool m_classicalClusterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_EXCLUSIVECLUSTER_H_
