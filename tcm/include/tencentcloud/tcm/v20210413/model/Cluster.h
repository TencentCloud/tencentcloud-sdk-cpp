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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_CLUSTER_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_CLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/ClusterConfig.h>
#include <tencentcloud/tcm/v20210413/model/ClusterStatus.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * Mesh集群信息
                */
                class Cluster : public AbstractModel
                {
                public:
                    Cluster();
                    ~Cluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取集群角色，取值范围：
- MASTER：控制面所在的主集群
- REMOTE：主集群管理的远端集群
                     * @return Role 集群角色，取值范围：
- MASTER：控制面所在的主集群
- REMOTE：主集群管理的远端集群
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置集群角色，取值范围：
- MASTER：控制面所在的主集群
- REMOTE：主集群管理的远端集群
                     * @param _role 集群角色，取值范围：
- MASTER：控制面所在的主集群
- REMOTE：主集群管理的远端集群
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取私有网络Id
                     * @return VpcId 私有网络Id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络Id
                     * @param _vpcId 私有网络Id
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网Id
                     * @return SubnetId 子网Id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网Id
                     * @param _subnetId 子网Id
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
                     * 获取名称，只读
                     * @return DisplayName 名称，只读
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置名称，只读
                     * @param _displayName 名称，只读
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取状态，只读
                     * @return State 状态，只读
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置状态，只读
                     * @param _state 状态，只读
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取关联时间，只读
                     * @return LinkedTime 关联时间，只读
                     * 
                     */
                    std::string GetLinkedTime() const;

                    /**
                     * 设置关联时间，只读
                     * @param _linkedTime 关联时间，只读
                     * 
                     */
                    void SetLinkedTime(const std::string& _linkedTime);

                    /**
                     * 判断参数 LinkedTime 是否已赋值
                     * @return LinkedTime 是否已赋值
                     * 
                     */
                    bool LinkedTimeHasBeenSet() const;

                    /**
                     * 获取集群配置
                     * @return Config 集群配置
                     * 
                     */
                    ClusterConfig GetConfig() const;

                    /**
                     * 设置集群配置
                     * @param _config 集群配置
                     * 
                     */
                    void SetConfig(const ClusterConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取详细状态，只读
                     * @return Status 详细状态，只读
                     * 
                     */
                    ClusterStatus GetStatus() const;

                    /**
                     * 设置详细状态，只读
                     * @param _status 详细状态，只读
                     * 
                     */
                    void SetStatus(const ClusterStatus& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取类型，取值范围：
- TKE
- EKS
                     * @return Type 类型，取值范围：
- TKE
- EKS
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型，取值范围：
- TKE
- EKS
                     * @param _type 类型，取值范围：
- TKE
- EKS
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取集群关联的 Namespace 列表
                     * @return HostedNamespaces 集群关联的 Namespace 列表
                     * 
                     */
                    std::vector<std::string> GetHostedNamespaces() const;

                    /**
                     * 设置集群关联的 Namespace 列表
                     * @param _hostedNamespaces 集群关联的 Namespace 列表
                     * 
                     */
                    void SetHostedNamespaces(const std::vector<std::string>& _hostedNamespaces);

                    /**
                     * 判断参数 HostedNamespaces 是否已赋值
                     * @return HostedNamespaces 是否已赋值
                     * 
                     */
                    bool HostedNamespacesHasBeenSet() const;

                private:

                    /**
                     * 集群Id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 集群角色，取值范围：
- MASTER：控制面所在的主集群
- REMOTE：主集群管理的远端集群
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 私有网络Id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网Id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 名称，只读
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 状态，只读
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 关联时间，只读
                     */
                    std::string m_linkedTime;
                    bool m_linkedTimeHasBeenSet;

                    /**
                     * 集群配置
                     */
                    ClusterConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 详细状态，只读
                     */
                    ClusterStatus m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 类型，取值范围：
- TKE
- EKS
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 集群关联的 Namespace 列表
                     */
                    std::vector<std::string> m_hostedNamespaces;
                    bool m_hostedNamespacesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_CLUSTER_H_
