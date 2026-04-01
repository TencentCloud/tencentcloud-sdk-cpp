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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_SCALENODEPOOLREQUEST_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_SCALENODEPOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * ScaleNodePool请求参数结构体
                */
                class ScaleNodePoolRequest : public AbstractModel
                {
                public:
                    ScaleNodePoolRequest();
                    ~ScaleNodePoolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群 ID</p>
                     * @return ClusterId <p>集群 ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群 ID</p>
                     * @param _clusterId <p>集群 ID</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>节点池 ID</p>
                     * @return NodePoolId <p>节点池 ID</p>
                     * 
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置<p>节点池 ID</p>
                     * @param _nodePoolId <p>节点池 ID</p>
                     * 
                     */
                    void SetNodePoolId(const std::string& _nodePoolId);

                    /**
                     * 判断参数 NodePoolId 是否已赋值
                     * @return NodePoolId 是否已赋值
                     * 
                     */
                    bool NodePoolIdHasBeenSet() const;

                    /**
                     * 获取<p>期望节点数</p>
                     * @return Replicas <p>期望节点数</p>
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置<p>期望节点数</p>
                     * @param _replicas <p>期望节点数</p>
                     * 
                     */
                    void SetReplicas(const int64_t& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                private:

                    /**
                     * <p>集群 ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>节点池 ID</p>
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * <p>期望节点数</p>
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_SCALENODEPOOLREQUEST_H_
