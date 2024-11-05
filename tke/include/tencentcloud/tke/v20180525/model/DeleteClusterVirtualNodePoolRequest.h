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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERVIRTUALNODEPOOLREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERVIRTUALNODEPOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DeleteClusterVirtualNodePool请求参数结构体
                */
                class DeleteClusterVirtualNodePoolRequest : public AbstractModel
                {
                public:
                    DeleteClusterVirtualNodePoolRequest();
                    ~DeleteClusterVirtualNodePoolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取超级节点池ID列表
                     * @return NodePoolIds 超级节点池ID列表
                     * 
                     */
                    std::vector<std::string> GetNodePoolIds() const;

                    /**
                     * 设置超级节点池ID列表
                     * @param _nodePoolIds 超级节点池ID列表
                     * 
                     */
                    void SetNodePoolIds(const std::vector<std::string>& _nodePoolIds);

                    /**
                     * 判断参数 NodePoolIds 是否已赋值
                     * @return NodePoolIds 是否已赋值
                     * 
                     */
                    bool NodePoolIdsHasBeenSet() const;

                    /**
                     * 获取是否强制删除，在超级节点上有pod的情况下，如果选择非强制删除，则删除会失败
                     * @return Force 是否强制删除，在超级节点上有pod的情况下，如果选择非强制删除，则删除会失败
                     * 
                     */
                    bool GetForce() const;

                    /**
                     * 设置是否强制删除，在超级节点上有pod的情况下，如果选择非强制删除，则删除会失败
                     * @param _force 是否强制删除，在超级节点上有pod的情况下，如果选择非强制删除，则删除会失败
                     * 
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 超级节点池ID列表
                     */
                    std::vector<std::string> m_nodePoolIds;
                    bool m_nodePoolIdsHasBeenSet;

                    /**
                     * 是否强制删除，在超级节点上有pod的情况下，如果选择非强制删除，则删除会失败
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERVIRTUALNODEPOOLREQUEST_H_
