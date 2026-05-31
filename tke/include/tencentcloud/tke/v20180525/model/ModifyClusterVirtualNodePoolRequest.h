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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERVIRTUALNODEPOOLREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERVIRTUALNODEPOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Label.h>
#include <tencentcloud/tke/v20180525/model/Taint.h>
#include <tencentcloud/tke/v20180525/model/SubnetAllocationPolicy.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ModifyClusterVirtualNodePool请求参数结构体
                */
                class ModifyClusterVirtualNodePoolRequest : public AbstractModel
                {
                public:
                    ModifyClusterVirtualNodePoolRequest();
                    ~ModifyClusterVirtualNodePoolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID，通过DescribeClusters接口获取</p>
                     * @return ClusterId <p>集群ID，通过DescribeClusters接口获取</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID，通过DescribeClusters接口获取</p>
                     * @param _clusterId <p>集群ID，通过DescribeClusters接口获取</p>
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
                     * 获取<p>节点池ID，通过DescribeNodePools接口获取</p>
                     * @return NodePoolId <p>节点池ID，通过DescribeNodePools接口获取</p>
                     * 
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置<p>节点池ID，通过DescribeNodePools接口获取</p>
                     * @param _nodePoolId <p>节点池ID，通过DescribeNodePools接口获取</p>
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
                     * 获取<p>节点池名称，必须修改至少一个参数</p>
                     * @return Name <p>节点池名称，必须修改至少一个参数</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>节点池名称，必须修改至少一个参数</p>
                     * @param _name <p>节点池名称，必须修改至少一个参数</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>安全组ID列表，必须修改至少一个参数</p>
                     * @return SecurityGroupIds <p>安全组ID列表，必须修改至少一个参数</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>安全组ID列表，必须修改至少一个参数</p>
                     * @param _securityGroupIds <p>安全组ID列表，必须修改至少一个参数</p>
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>虚拟节点label，必须修改至少一个参数</p>
                     * @return Labels <p>虚拟节点label，必须修改至少一个参数</p>
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置<p>虚拟节点label，必须修改至少一个参数</p>
                     * @param _labels <p>虚拟节点label，必须修改至少一个参数</p>
                     * 
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取<p>虚拟节点taint，必须修改至少一个参数</p>
                     * @return Taints <p>虚拟节点taint，必须修改至少一个参数</p>
                     * 
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置<p>虚拟节点taint，必须修改至少一个参数</p>
                     * @param _taints <p>虚拟节点taint，必须修改至少一个参数</p>
                     * 
                     */
                    void SetTaints(const std::vector<Taint>& _taints);

                    /**
                     * 判断参数 Taints 是否已赋值
                     * @return Taints 是否已赋值
                     * 
                     */
                    bool TaintsHasBeenSet() const;

                    /**
                     * 获取<p>删除保护开关，必须修改至少一个参数</p>
                     * @return DeletionProtection <p>删除保护开关，必须修改至少一个参数</p>
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置<p>删除保护开关，必须修改至少一个参数</p>
                     * @param _deletionProtection <p>删除保护开关，必须修改至少一个参数</p>
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                    /**
                     * 获取<p>子网分配策略</p>
                     * @return SubnetAllocationPolicy <p>子网分配策略</p>
                     * 
                     */
                    SubnetAllocationPolicy GetSubnetAllocationPolicy() const;

                    /**
                     * 设置<p>子网分配策略</p>
                     * @param _subnetAllocationPolicy <p>子网分配策略</p>
                     * 
                     */
                    void SetSubnetAllocationPolicy(const SubnetAllocationPolicy& _subnetAllocationPolicy);

                    /**
                     * 判断参数 SubnetAllocationPolicy 是否已赋值
                     * @return SubnetAllocationPolicy 是否已赋值
                     * 
                     */
                    bool SubnetAllocationPolicyHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID，通过DescribeClusters接口获取</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>节点池ID，通过DescribeNodePools接口获取</p>
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * <p>节点池名称，必须修改至少一个参数</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>安全组ID列表，必须修改至少一个参数</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>虚拟节点label，必须修改至少一个参数</p>
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>虚拟节点taint，必须修改至少一个参数</p>
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                    /**
                     * <p>删除保护开关，必须修改至少一个参数</p>
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * <p>子网分配策略</p>
                     */
                    SubnetAllocationPolicy m_subnetAllocationPolicy;
                    bool m_subnetAllocationPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERVIRTUALNODEPOOLREQUEST_H_
