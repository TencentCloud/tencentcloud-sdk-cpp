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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERVIRTUALNODEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERVIRTUALNODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/VirtualNodeSpec.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateClusterVirtualNode请求参数结构体
                */
                class CreateClusterVirtualNodeRequest : public AbstractModel
                {
                public:
                    CreateClusterVirtualNodeRequest();
                    ~CreateClusterVirtualNodeRequest() = default;
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
                     * 获取虚拟节点所属节点池
                     * @return NodePoolId 虚拟节点所属节点池
                     * 
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置虚拟节点所属节点池
                     * @param _nodePoolId 虚拟节点所属节点池
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
                     * 获取虚拟节点所属子网
                     * @return SubnetId 虚拟节点所属子网
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置虚拟节点所属子网
                     * @param _subnetId 虚拟节点所属子网
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取虚拟节点子网ID列表，和参数SubnetId互斥
                     * @return SubnetIds 虚拟节点子网ID列表，和参数SubnetId互斥
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置虚拟节点子网ID列表，和参数SubnetId互斥
                     * @param _subnetIds 虚拟节点子网ID列表，和参数SubnetId互斥
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取虚拟节点列表
                     * @return VirtualNodes 虚拟节点列表
                     * 
                     */
                    std::vector<VirtualNodeSpec> GetVirtualNodes() const;

                    /**
                     * 设置虚拟节点列表
                     * @param _virtualNodes 虚拟节点列表
                     * 
                     */
                    void SetVirtualNodes(const std::vector<VirtualNodeSpec>& _virtualNodes);

                    /**
                     * 判断参数 VirtualNodes 是否已赋值
                     * @return VirtualNodes 是否已赋值
                     * 
                     */
                    bool VirtualNodesHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 虚拟节点所属节点池
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * 虚拟节点所属子网
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 虚拟节点子网ID列表，和参数SubnetId互斥
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * 虚拟节点列表
                     */
                    std::vector<VirtualNodeSpec> m_virtualNodes;
                    bool m_virtualNodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERVIRTUALNODEREQUEST_H_
