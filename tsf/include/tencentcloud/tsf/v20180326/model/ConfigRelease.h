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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CONFIGRELEASE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CONFIGRELEASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/TsfConfigCenter.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 配置项发布信息
                */
                class ConfigRelease : public AbstractModel
                {
                public:
                    ConfigRelease();
                    ~ConfigRelease() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置项发布ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigReleaseId 配置项发布ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigReleaseId() const;

                    /**
                     * 设置配置项发布ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configReleaseId 配置项发布ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigReleaseId(const std::string& _configReleaseId);

                    /**
                     * 判断参数 ConfigReleaseId 是否已赋值
                     * @return ConfigReleaseId 是否已赋值
                     * 
                     */
                    bool ConfigReleaseIdHasBeenSet() const;

                    /**
                     * 获取配置项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigId 配置项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置配置项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configId 配置项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取配置项名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigName 配置项名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置配置项名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configName 配置项名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取配置项版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigVersion 配置项版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigVersion() const;

                    /**
                     * 设置配置项版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configVersion 配置项版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigVersion(const std::string& _configVersion);

                    /**
                     * 判断参数 ConfigVersion 是否已赋值
                     * @return ConfigVersion 是否已赋值
                     * 
                     */
                    bool ConfigVersionHasBeenSet() const;

                    /**
                     * 获取发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReleaseTime 发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReleaseTime() const;

                    /**
                     * 设置发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _releaseTime 发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReleaseTime(const std::string& _releaseTime);

                    /**
                     * 判断参数 ReleaseTime 是否已赋值
                     * @return ReleaseTime 是否已赋值
                     * 
                     */
                    bool ReleaseTimeHasBeenSet() const;

                    /**
                     * 获取部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupId 部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取部署组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName 部署组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置部署组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupName 部署组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceId 命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceId 命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceName 命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceName 命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 集群ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取发布描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReleaseDesc 发布描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReleaseDesc() const;

                    /**
                     * 设置发布描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _releaseDesc 发布描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReleaseDesc(const std::string& _releaseDesc);

                    /**
                     * 判断参数 ReleaseDesc 是否已赋值
                     * @return ReleaseDesc 是否已赋值
                     * 
                     */
                    bool ReleaseDescHasBeenSet() const;

                    /**
                     * 获取应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationId 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationId 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取配置中心发布情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigCenters 配置中心发布情况
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TsfConfigCenter> GetConfigCenters() const;

                    /**
                     * 设置配置中心发布情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configCenters 配置中心发布情况
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigCenters(const std::vector<TsfConfigCenter>& _configCenters);

                    /**
                     * 判断参数 ConfigCenters 是否已赋值
                     * @return ConfigCenters 是否已赋值
                     * 
                     */
                    bool ConfigCentersHasBeenSet() const;

                    /**
                     * 获取DUAL_STATUS_WRITE_REGISTRATION_ON 双写&&双注册开启

DUAL_STATUS_WRITE_REGISTRATION_OFF 双写&&双注册关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DaulStatus DUAL_STATUS_WRITE_REGISTRATION_ON 双写&&双注册开启

DUAL_STATUS_WRITE_REGISTRATION_OFF 双写&&双注册关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDaulStatus() const;

                    /**
                     * 设置DUAL_STATUS_WRITE_REGISTRATION_ON 双写&&双注册开启

DUAL_STATUS_WRITE_REGISTRATION_OFF 双写&&双注册关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _daulStatus DUAL_STATUS_WRITE_REGISTRATION_ON 双写&&双注册开启

DUAL_STATUS_WRITE_REGISTRATION_OFF 双写&&双注册关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDaulStatus(const std::string& _daulStatus);

                    /**
                     * 判断参数 DaulStatus 是否已赋值
                     * @return DaulStatus 是否已赋值
                     * 
                     */
                    bool DaulStatusHasBeenSet() const;

                private:

                    /**
                     * 配置项发布ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configReleaseId;
                    bool m_configReleaseIdHasBeenSet;

                    /**
                     * 配置项ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 配置项名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * 配置项版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configVersion;
                    bool m_configVersionHasBeenSet;

                    /**
                     * 发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_releaseTime;
                    bool m_releaseTimeHasBeenSet;

                    /**
                     * 部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 部署组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 发布描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_releaseDesc;
                    bool m_releaseDescHasBeenSet;

                    /**
                     * 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 配置中心发布情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TsfConfigCenter> m_configCenters;
                    bool m_configCentersHasBeenSet;

                    /**
                     * DUAL_STATUS_WRITE_REGISTRATION_ON 双写&&双注册开启

DUAL_STATUS_WRITE_REGISTRATION_OFF 双写&&双注册关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_daulStatus;
                    bool m_daulStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CONFIGRELEASE_H_
