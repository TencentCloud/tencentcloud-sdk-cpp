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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERVIRTUALNODEPOOLREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERVIRTUALNODEPOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Label.h>
#include <tencentcloud/tke/v20180525/model/Taint.h>
#include <tencentcloud/tke/v20180525/model/VirtualNodeSpec.h>
#include <tencentcloud/tke/v20180525/model/SubnetAllocationPolicy.h>
#include <tencentcloud/tke/v20180525/model/AgentPluginConfig.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateClusterVirtualNodePool请求参数结构体
                */
                class CreateClusterVirtualNodePoolRequest : public AbstractModel
                {
                public:
                    CreateClusterVirtualNodePoolRequest();
                    ~CreateClusterVirtualNodePoolRequest() = default;
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
                     * 获取<p>节点池名称</p>
                     * @return Name <p>节点池名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>节点池名称</p>
                     * @param _name <p>节点池名称</p>
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
                     * 获取<p>安全组ID列表</p>
                     * @return SecurityGroupIds <p>安全组ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>安全组ID列表</p>
                     * @param _securityGroupIds <p>安全组ID列表</p>
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
                     * 获取<p>子网ID列表</p>
                     * @return SubnetIds <p>子网ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置<p>子网ID列表</p>
                     * @param _subnetIds <p>子网ID列表</p>
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
                     * 获取<p>虚拟节点label</p>
                     * @return Labels <p>虚拟节点label</p>
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置<p>虚拟节点label</p>
                     * @param _labels <p>虚拟节点label</p>
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
                     * 获取<p>虚拟节点taint</p>
                     * @return Taints <p>虚拟节点taint</p>
                     * 
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置<p>虚拟节点taint</p>
                     * @param _taints <p>虚拟节点taint</p>
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
                     * 获取<p>节点列表</p>
                     * @return VirtualNodes <p>节点列表</p>
                     * 
                     */
                    std::vector<VirtualNodeSpec> GetVirtualNodes() const;

                    /**
                     * 设置<p>节点列表</p>
                     * @param _virtualNodes <p>节点列表</p>
                     * 
                     */
                    void SetVirtualNodes(const std::vector<VirtualNodeSpec>& _virtualNodes);

                    /**
                     * 判断参数 VirtualNodes 是否已赋值
                     * @return VirtualNodes 是否已赋值
                     * 
                     */
                    bool VirtualNodesHasBeenSet() const;

                    /**
                     * 获取<p>删除保护开关，默认关闭</p>
                     * @return DeletionProtection <p>删除保护开关，默认关闭</p>
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置<p>删除保护开关，默认关闭</p>
                     * @param _deletionProtection <p>删除保护开关，默认关闭</p>
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
                     * 获取<p>节点池操作系统：</p><ul><li>linux（默认）</li><li>windows</li></ul>
                     * @return OS <p>节点池操作系统：</p><ul><li>linux（默认）</li><li>windows</li></ul>
                     * 
                     */
                    std::string GetOS() const;

                    /**
                     * 设置<p>节点池操作系统：</p><ul><li>linux（默认）</li><li>windows</li></ul>
                     * @param _oS <p>节点池操作系统：</p><ul><li>linux（默认）</li><li>windows</li></ul>
                     * 
                     */
                    void SetOS(const std::string& _oS);

                    /**
                     * 判断参数 OS 是否已赋值
                     * @return OS 是否已赋值
                     * 
                     */
                    bool OSHasBeenSet() const;

                    /**
                     * 获取<p>子网资源分配策略，精确控制各子网之间的资源分配比例。</p>
                     * @return SubnetAllocationPolicy <p>子网资源分配策略，精确控制各子网之间的资源分配比例。</p>
                     * 
                     */
                    SubnetAllocationPolicy GetSubnetAllocationPolicy() const;

                    /**
                     * 设置<p>子网资源分配策略，精确控制各子网之间的资源分配比例。</p>
                     * @param _subnetAllocationPolicy <p>子网资源分配策略，精确控制各子网之间的资源分配比例。</p>
                     * 
                     */
                    void SetSubnetAllocationPolicy(const SubnetAllocationPolicy& _subnetAllocationPolicy);

                    /**
                     * 判断参数 SubnetAllocationPolicy 是否已赋值
                     * @return SubnetAllocationPolicy 是否已赋值
                     * 
                     */
                    bool SubnetAllocationPolicyHasBeenSet() const;

                    /**
                     * 获取<p>AgentPlugin 安装配置。传入即表示需要安装（即使是空对象 {}）</p>
                     * @return AgentPlugin <p>AgentPlugin 安装配置。传入即表示需要安装（即使是空对象 {}）</p>
                     * 
                     */
                    AgentPluginConfig GetAgentPlugin() const;

                    /**
                     * 设置<p>AgentPlugin 安装配置。传入即表示需要安装（即使是空对象 {}）</p>
                     * @param _agentPlugin <p>AgentPlugin 安装配置。传入即表示需要安装（即使是空对象 {}）</p>
                     * 
                     */
                    void SetAgentPlugin(const AgentPluginConfig& _agentPlugin);

                    /**
                     * 判断参数 AgentPlugin 是否已赋值
                     * @return AgentPlugin 是否已赋值
                     * 
                     */
                    bool AgentPluginHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID，通过DescribeClusters接口获取</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>节点池名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>安全组ID列表</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>子网ID列表</p>
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * <p>虚拟节点label</p>
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>虚拟节点taint</p>
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                    /**
                     * <p>节点列表</p>
                     */
                    std::vector<VirtualNodeSpec> m_virtualNodes;
                    bool m_virtualNodesHasBeenSet;

                    /**
                     * <p>删除保护开关，默认关闭</p>
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * <p>节点池操作系统：</p><ul><li>linux（默认）</li><li>windows</li></ul>
                     */
                    std::string m_oS;
                    bool m_oSHasBeenSet;

                    /**
                     * <p>子网资源分配策略，精确控制各子网之间的资源分配比例。</p>
                     */
                    SubnetAllocationPolicy m_subnetAllocationPolicy;
                    bool m_subnetAllocationPolicyHasBeenSet;

                    /**
                     * <p>AgentPlugin 安装配置。传入即表示需要安装（即使是空对象 {}）</p>
                     */
                    AgentPluginConfig m_agentPlugin;
                    bool m_agentPluginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERVIRTUALNODEPOOLREQUEST_H_
