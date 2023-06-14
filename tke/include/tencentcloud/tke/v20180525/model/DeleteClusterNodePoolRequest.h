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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERNODEPOOLREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERNODEPOOLREQUEST_H_

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
                * DeleteClusterNodePool请求参数结构体
                */
                class DeleteClusterNodePoolRequest : public AbstractModel
                {
                public:
                    DeleteClusterNodePoolRequest();
                    ~DeleteClusterNodePoolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取节点池对应的 ClusterId
                     * @return ClusterId 节点池对应的 ClusterId
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置节点池对应的 ClusterId
                     * @param _clusterId 节点池对应的 ClusterId
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
                     * 获取需要删除的节点池 Id 列表
                     * @return NodePoolIds 需要删除的节点池 Id 列表
                     * 
                     */
                    std::vector<std::string> GetNodePoolIds() const;

                    /**
                     * 设置需要删除的节点池 Id 列表
                     * @param _nodePoolIds 需要删除的节点池 Id 列表
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
                     * 获取删除节点池时是否保留节点池内节点(节点仍然会被移出集群，但对应的实例不会被销毁)
                     * @return KeepInstance 删除节点池时是否保留节点池内节点(节点仍然会被移出集群，但对应的实例不会被销毁)
                     * 
                     */
                    bool GetKeepInstance() const;

                    /**
                     * 设置删除节点池时是否保留节点池内节点(节点仍然会被移出集群，但对应的实例不会被销毁)
                     * @param _keepInstance 删除节点池时是否保留节点池内节点(节点仍然会被移出集群，但对应的实例不会被销毁)
                     * 
                     */
                    void SetKeepInstance(const bool& _keepInstance);

                    /**
                     * 判断参数 KeepInstance 是否已赋值
                     * @return KeepInstance 是否已赋值
                     * 
                     */
                    bool KeepInstanceHasBeenSet() const;

                private:

                    /**
                     * 节点池对应的 ClusterId
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 需要删除的节点池 Id 列表
                     */
                    std::vector<std::string> m_nodePoolIds;
                    bool m_nodePoolIdsHasBeenSet;

                    /**
                     * 删除节点池时是否保留节点池内节点(节点仍然会被移出集群，但对应的实例不会被销毁)
                     */
                    bool m_keepInstance;
                    bool m_keepInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERNODEPOOLREQUEST_H_
