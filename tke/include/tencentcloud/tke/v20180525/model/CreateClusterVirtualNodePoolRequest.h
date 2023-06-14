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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERVIRTUALNODEPOOLREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERVIRTUALNODEPOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Label.h>
#include <tencentcloud/tke/v20180525/model/Taint.h>
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
                * CreateClusterVirtualNodePool请求参数结构体
                */
                class CreateClusterVirtualNodePoolRequest : public AbstractModel
                {
                public:
                    CreateClusterVirtualNodePoolRequest();
                    ~CreateClusterVirtualNodePoolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群Id
                     * @return ClusterId 集群Id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群Id
                     * @param _clusterId 集群Id
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
                     * 获取节点池名称
                     * @return Name 节点池名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置节点池名称
                     * @param _name 节点池名称
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
                     * 获取子网ID列表
                     * @return SubnetIds 子网ID列表
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置子网ID列表
                     * @param _subnetIds 子网ID列表
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
                     * 获取安全组ID列表
                     * @return SecurityGroupIds 安全组ID列表
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组ID列表
                     * @param _securityGroupIds 安全组ID列表
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
                     * 获取虚拟节点label
                     * @return Labels 虚拟节点label
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置虚拟节点label
                     * @param _labels 虚拟节点label
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
                     * 获取虚拟节点taint
                     * @return Taints 虚拟节点taint
                     * 
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置虚拟节点taint
                     * @param _taints 虚拟节点taint
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
                     * 获取节点列表
                     * @return VirtualNodes 节点列表
                     * 
                     */
                    std::vector<VirtualNodeSpec> GetVirtualNodes() const;

                    /**
                     * 设置节点列表
                     * @param _virtualNodes 节点列表
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
                     * 获取删除保护开关
                     * @return DeletionProtection 删除保护开关
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置删除保护开关
                     * @param _deletionProtection 删除保护开关
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
                     * 获取节点池操作系统：
- linux（默认）
- windows
                     * @return OS 节点池操作系统：
- linux（默认）
- windows
                     * 
                     */
                    std::string GetOS() const;

                    /**
                     * 设置节点池操作系统：
- linux（默认）
- windows
                     * @param _oS 节点池操作系统：
- linux（默认）
- windows
                     * 
                     */
                    void SetOS(const std::string& _oS);

                    /**
                     * 判断参数 OS 是否已赋值
                     * @return OS 是否已赋值
                     * 
                     */
                    bool OSHasBeenSet() const;

                private:

                    /**
                     * 集群Id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 节点池名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 子网ID列表
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * 安全组ID列表
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 虚拟节点label
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 虚拟节点taint
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                    /**
                     * 节点列表
                     */
                    std::vector<VirtualNodeSpec> m_virtualNodes;
                    bool m_virtualNodesHasBeenSet;

                    /**
                     * 删除保护开关
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * 节点池操作系统：
- linux（默认）
- windows
                     */
                    std::string m_oS;
                    bool m_oSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERVIRTUALNODEPOOLREQUEST_H_
