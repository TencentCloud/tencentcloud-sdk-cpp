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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERBASICSETTINGS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERBASICSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/TagSpecification.h>
#include <tencentcloud/tke/v20180525/model/AutoUpgradeClusterLevel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 描述集群的基本配置信息
                */
                class ClusterBasicSettings : public AbstractModel
                {
                public:
                    ClusterBasicSettings();
                    ~ClusterBasicSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群操作系统，支持设置公共镜像(字段传相应镜像Name)和自定义镜像(字段传相应镜像ID)，详情参考：https://cloud.tencent.com/document/product/457/68289
                     * @return ClusterOs 集群操作系统，支持设置公共镜像(字段传相应镜像Name)和自定义镜像(字段传相应镜像ID)，详情参考：https://cloud.tencent.com/document/product/457/68289
                     * 
                     */
                    std::string GetClusterOs() const;

                    /**
                     * 设置集群操作系统，支持设置公共镜像(字段传相应镜像Name)和自定义镜像(字段传相应镜像ID)，详情参考：https://cloud.tencent.com/document/product/457/68289
                     * @param _clusterOs 集群操作系统，支持设置公共镜像(字段传相应镜像Name)和自定义镜像(字段传相应镜像ID)，详情参考：https://cloud.tencent.com/document/product/457/68289
                     * 
                     */
                    void SetClusterOs(const std::string& _clusterOs);

                    /**
                     * 判断参数 ClusterOs 是否已赋值
                     * @return ClusterOs 是否已赋值
                     * 
                     */
                    bool ClusterOsHasBeenSet() const;

                    /**
                     * 获取集群版本,默认值为1.10.5
                     * @return ClusterVersion 集群版本,默认值为1.10.5
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置集群版本,默认值为1.10.5
                     * @param _clusterVersion 集群版本,默认值为1.10.5
                     * 
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     * 
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param _clusterName 集群名称
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取集群描述
                     * @return ClusterDescription 集群描述
                     * 
                     */
                    std::string GetClusterDescription() const;

                    /**
                     * 设置集群描述
                     * @param _clusterDescription 集群描述
                     * 
                     */
                    void SetClusterDescription(const std::string& _clusterDescription);

                    /**
                     * 判断参数 ClusterDescription 是否已赋值
                     * @return ClusterDescription 是否已赋值
                     * 
                     */
                    bool ClusterDescriptionHasBeenSet() const;

                    /**
                     * 获取私有网络ID，形如vpc-e55paxnt。创建托管空集群时必传。
                     * @return VpcId 私有网络ID，形如vpc-e55paxnt。创建托管空集群时必传。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID，形如vpc-e55paxnt。创建托管空集群时必传。
                     * @param _vpcId 私有网络ID，形如vpc-e55paxnt。创建托管空集群时必传。
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
                     * 获取集群内新增资源所属项目ID。
                     * @return ProjectId 集群内新增资源所属项目ID。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置集群内新增资源所属项目ID。
                     * @param _projectId 集群内新增资源所属项目ID。
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取标签描述列表。通过指定该参数可以同时绑定标签到相应的资源实例，当前仅支持绑定标签到集群实例。
                     * @return TagSpecification 标签描述列表。通过指定该参数可以同时绑定标签到相应的资源实例，当前仅支持绑定标签到集群实例。
                     * 
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置标签描述列表。通过指定该参数可以同时绑定标签到相应的资源实例，当前仅支持绑定标签到集群实例。
                     * @param _tagSpecification 标签描述列表。通过指定该参数可以同时绑定标签到相应的资源实例，当前仅支持绑定标签到集群实例。
                     * 
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取容器的镜像版本，"DOCKER_CUSTOMIZE"(容器定制版),"GENERAL"(普通版本，默认值)
                     * @return OsCustomizeType 容器的镜像版本，"DOCKER_CUSTOMIZE"(容器定制版),"GENERAL"(普通版本，默认值)
                     * 
                     */
                    std::string GetOsCustomizeType() const;

                    /**
                     * 设置容器的镜像版本，"DOCKER_CUSTOMIZE"(容器定制版),"GENERAL"(普通版本，默认值)
                     * @param _osCustomizeType 容器的镜像版本，"DOCKER_CUSTOMIZE"(容器定制版),"GENERAL"(普通版本，默认值)
                     * 
                     */
                    void SetOsCustomizeType(const std::string& _osCustomizeType);

                    /**
                     * 判断参数 OsCustomizeType 是否已赋值
                     * @return OsCustomizeType 是否已赋值
                     * 
                     */
                    bool OsCustomizeTypeHasBeenSet() const;

                    /**
                     * 获取是否开启节点的默认安全组(默认: 否，Alpha特性)
                     * @return NeedWorkSecurityGroup 是否开启节点的默认安全组(默认: 否，Alpha特性)
                     * 
                     */
                    bool GetNeedWorkSecurityGroup() const;

                    /**
                     * 设置是否开启节点的默认安全组(默认: 否，Alpha特性)
                     * @param _needWorkSecurityGroup 是否开启节点的默认安全组(默认: 否，Alpha特性)
                     * 
                     */
                    void SetNeedWorkSecurityGroup(const bool& _needWorkSecurityGroup);

                    /**
                     * 判断参数 NeedWorkSecurityGroup 是否已赋值
                     * @return NeedWorkSecurityGroup 是否已赋值
                     * 
                     */
                    bool NeedWorkSecurityGroupHasBeenSet() const;

                    /**
                     * 获取当选择Cilium Overlay网络插件时，TKE会从该子网获取2个IP用来创建内网负载均衡
                     * @return SubnetId 当选择Cilium Overlay网络插件时，TKE会从该子网获取2个IP用来创建内网负载均衡
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置当选择Cilium Overlay网络插件时，TKE会从该子网获取2个IP用来创建内网负载均衡
                     * @param _subnetId 当选择Cilium Overlay网络插件时，TKE会从该子网获取2个IP用来创建内网负载均衡
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
                     * 获取集群等级，针对托管集群生效
                     * @return ClusterLevel 集群等级，针对托管集群生效
                     * 
                     */
                    std::string GetClusterLevel() const;

                    /**
                     * 设置集群等级，针对托管集群生效
                     * @param _clusterLevel 集群等级，针对托管集群生效
                     * 
                     */
                    void SetClusterLevel(const std::string& _clusterLevel);

                    /**
                     * 判断参数 ClusterLevel 是否已赋值
                     * @return ClusterLevel 是否已赋值
                     * 
                     */
                    bool ClusterLevelHasBeenSet() const;

                    /**
                     * 获取自动变配集群等级，针对托管集群生效
                     * @return AutoUpgradeClusterLevel 自动变配集群等级，针对托管集群生效
                     * 
                     */
                    AutoUpgradeClusterLevel GetAutoUpgradeClusterLevel() const;

                    /**
                     * 设置自动变配集群等级，针对托管集群生效
                     * @param _autoUpgradeClusterLevel 自动变配集群等级，针对托管集群生效
                     * 
                     */
                    void SetAutoUpgradeClusterLevel(const AutoUpgradeClusterLevel& _autoUpgradeClusterLevel);

                    /**
                     * 判断参数 AutoUpgradeClusterLevel 是否已赋值
                     * @return AutoUpgradeClusterLevel 是否已赋值
                     * 
                     */
                    bool AutoUpgradeClusterLevelHasBeenSet() const;

                private:

                    /**
                     * 集群操作系统，支持设置公共镜像(字段传相应镜像Name)和自定义镜像(字段传相应镜像ID)，详情参考：https://cloud.tencent.com/document/product/457/68289
                     */
                    std::string m_clusterOs;
                    bool m_clusterOsHasBeenSet;

                    /**
                     * 集群版本,默认值为1.10.5
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群描述
                     */
                    std::string m_clusterDescription;
                    bool m_clusterDescriptionHasBeenSet;

                    /**
                     * 私有网络ID，形如vpc-e55paxnt。创建托管空集群时必传。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 集群内新增资源所属项目ID。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 标签描述列表。通过指定该参数可以同时绑定标签到相应的资源实例，当前仅支持绑定标签到集群实例。
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * 容器的镜像版本，"DOCKER_CUSTOMIZE"(容器定制版),"GENERAL"(普通版本，默认值)
                     */
                    std::string m_osCustomizeType;
                    bool m_osCustomizeTypeHasBeenSet;

                    /**
                     * 是否开启节点的默认安全组(默认: 否，Alpha特性)
                     */
                    bool m_needWorkSecurityGroup;
                    bool m_needWorkSecurityGroupHasBeenSet;

                    /**
                     * 当选择Cilium Overlay网络插件时，TKE会从该子网获取2个IP用来创建内网负载均衡
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 集群等级，针对托管集群生效
                     */
                    std::string m_clusterLevel;
                    bool m_clusterLevelHasBeenSet;

                    /**
                     * 自动变配集群等级，针对托管集群生效
                     */
                    AutoUpgradeClusterLevel m_autoUpgradeClusterLevel;
                    bool m_autoUpgradeClusterLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERBASICSETTINGS_H_
