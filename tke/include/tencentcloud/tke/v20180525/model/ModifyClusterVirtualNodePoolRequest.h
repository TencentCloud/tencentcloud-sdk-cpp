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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERVIRTUALNODEPOOLREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERVIRTUALNODEPOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Label.h>
#include <tencentcloud/tke/v20180525/model/Taint.h>


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
                     * 获取集群ID，通过DescribeClusters接口获取
                     * @return ClusterId 集群ID，通过DescribeClusters接口获取
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID，通过DescribeClusters接口获取
                     * @param _clusterId 集群ID，通过DescribeClusters接口获取
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
                     * 获取节点池ID，通过DescribeNodePools接口获取
                     * @return NodePoolId 节点池ID，通过DescribeNodePools接口获取
                     * 
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置节点池ID，通过DescribeNodePools接口获取
                     * @param _nodePoolId 节点池ID，通过DescribeNodePools接口获取
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
                     * 获取节点池名称，必须修改至少一个参数
                     * @return Name 节点池名称，必须修改至少一个参数
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置节点池名称，必须修改至少一个参数
                     * @param _name 节点池名称，必须修改至少一个参数
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
                     * 获取安全组ID列表，必须修改至少一个参数
                     * @return SecurityGroupIds 安全组ID列表，必须修改至少一个参数
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组ID列表，必须修改至少一个参数
                     * @param _securityGroupIds 安全组ID列表，必须修改至少一个参数
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
                     * 获取虚拟节点label，必须修改至少一个参数
                     * @return Labels 虚拟节点label，必须修改至少一个参数
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置虚拟节点label，必须修改至少一个参数
                     * @param _labels 虚拟节点label，必须修改至少一个参数
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
                     * 获取虚拟节点taint，必须修改至少一个参数
                     * @return Taints 虚拟节点taint，必须修改至少一个参数
                     * 
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置虚拟节点taint，必须修改至少一个参数
                     * @param _taints 虚拟节点taint，必须修改至少一个参数
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
                     * 获取删除保护开关，必须修改至少一个参数
                     * @return DeletionProtection 删除保护开关，必须修改至少一个参数
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置删除保护开关，必须修改至少一个参数
                     * @param _deletionProtection 删除保护开关，必须修改至少一个参数
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                private:

                    /**
                     * 集群ID，通过DescribeClusters接口获取
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 节点池ID，通过DescribeNodePools接口获取
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * 节点池名称，必须修改至少一个参数
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 安全组ID列表，必须修改至少一个参数
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 虚拟节点label，必须修改至少一个参数
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 虚拟节点taint，必须修改至少一个参数
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                    /**
                     * 删除保护开关，必须修改至少一个参数
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERVIRTUALNODEPOOLREQUEST_H_
