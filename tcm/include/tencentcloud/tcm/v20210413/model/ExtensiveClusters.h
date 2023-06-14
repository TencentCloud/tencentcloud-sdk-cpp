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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_EXTENSIVECLUSTERS_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_EXTENSIVECLUSTERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/ExtensiveCluster.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * 内网独占集群配置列表
                */
                class ExtensiveClusters : public AbstractModel
                {
                public:
                    ExtensiveClusters();
                    ~ExtensiveClusters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取4层集群配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return L4Clusters 4层集群配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ExtensiveCluster> GetL4Clusters() const;

                    /**
                     * 设置4层集群配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _l4Clusters 4层集群配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetL4Clusters(const std::vector<ExtensiveCluster>& _l4Clusters);

                    /**
                     * 判断参数 L4Clusters 是否已赋值
                     * @return L4Clusters 是否已赋值
                     * 
                     */
                    bool L4ClustersHasBeenSet() const;

                    /**
                     * 获取7层集群配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return L7Clusters 7层集群配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ExtensiveCluster> GetL7Clusters() const;

                    /**
                     * 设置7层集群配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _l7Clusters 7层集群配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetL7Clusters(const std::vector<ExtensiveCluster>& _l7Clusters);

                    /**
                     * 判断参数 L7Clusters 是否已赋值
                     * @return L7Clusters 是否已赋值
                     * 
                     */
                    bool L7ClustersHasBeenSet() const;

                private:

                    /**
                     * 4层集群配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExtensiveCluster> m_l4Clusters;
                    bool m_l4ClustersHasBeenSet;

                    /**
                     * 7层集群配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExtensiveCluster> m_l7Clusters;
                    bool m_l7ClustersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_EXTENSIVECLUSTERS_H_
