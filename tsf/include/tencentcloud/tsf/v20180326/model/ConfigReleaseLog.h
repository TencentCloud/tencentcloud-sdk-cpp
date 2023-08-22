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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CONFIGRELEASELOG_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CONFIGRELEASELOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 配置项发布日志
                */
                class ConfigReleaseLog : public AbstractModel
                {
                public:
                    ConfigReleaseLog();
                    ~ConfigReleaseLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置项发布日志ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigReleaseLogId 配置项发布日志ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigReleaseLogId() const;

                    /**
                     * 设置配置项发布日志ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configReleaseLogId 配置项发布日志ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigReleaseLogId(const std::string& _configReleaseLogId);

                    /**
                     * 判断参数 ConfigReleaseLogId 是否已赋值
                     * @return ConfigReleaseLogId 是否已赋值
                     * 
                     */
                    bool ConfigReleaseLogIdHasBeenSet() const;

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
                     * 获取发布状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReleaseStatus 发布状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReleaseStatus() const;

                    /**
                     * 设置发布状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _releaseStatus 发布状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReleaseStatus(const std::string& _releaseStatus);

                    /**
                     * 判断参数 ReleaseStatus 是否已赋值
                     * @return ReleaseStatus 是否已赋值
                     * 
                     */
                    bool ReleaseStatusHasBeenSet() const;

                    /**
                     * 获取上次发布的配置项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastConfigId 上次发布的配置项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastConfigId() const;

                    /**
                     * 设置上次发布的配置项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastConfigId 上次发布的配置项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastConfigId(const std::string& _lastConfigId);

                    /**
                     * 判断参数 LastConfigId 是否已赋值
                     * @return LastConfigId 是否已赋值
                     * 
                     */
                    bool LastConfigIdHasBeenSet() const;

                    /**
                     * 获取上次发布的配置项名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastConfigName 上次发布的配置项名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastConfigName() const;

                    /**
                     * 设置上次发布的配置项名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastConfigName 上次发布的配置项名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastConfigName(const std::string& _lastConfigName);

                    /**
                     * 判断参数 LastConfigName 是否已赋值
                     * @return LastConfigName 是否已赋值
                     * 
                     */
                    bool LastConfigNameHasBeenSet() const;

                    /**
                     * 获取上次发布的配置项版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastConfigVersion 上次发布的配置项版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastConfigVersion() const;

                    /**
                     * 设置上次发布的配置项版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastConfigVersion 上次发布的配置项版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastConfigVersion(const std::string& _lastConfigVersion);

                    /**
                     * 判断参数 LastConfigVersion 是否已赋值
                     * @return LastConfigVersion 是否已赋值
                     * 
                     */
                    bool LastConfigVersionHasBeenSet() const;

                    /**
                     * 获取回滚标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RollbackFlag 回滚标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetRollbackFlag() const;

                    /**
                     * 设置回滚标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rollbackFlag 回滚标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRollbackFlag(const bool& _rollbackFlag);

                    /**
                     * 判断参数 RollbackFlag 是否已赋值
                     * @return RollbackFlag 是否已赋值
                     * 
                     */
                    bool RollbackFlagHasBeenSet() const;

                    /**
                     * 获取发布成功的配置中心
 ALL/EXCLUSIVE/SHARE/NONE

全部发布成功，独占发布成功，共享发布成功，全部发布失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReleasedConfigCenter 发布成功的配置中心
 ALL/EXCLUSIVE/SHARE/NONE

全部发布成功，独占发布成功，共享发布成功，全部发布失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReleasedConfigCenter() const;

                    /**
                     * 设置发布成功的配置中心
 ALL/EXCLUSIVE/SHARE/NONE

全部发布成功，独占发布成功，共享发布成功，全部发布失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _releasedConfigCenter 发布成功的配置中心
 ALL/EXCLUSIVE/SHARE/NONE

全部发布成功，独占发布成功，共享发布成功，全部发布失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReleasedConfigCenter(const std::string& _releasedConfigCenter);

                    /**
                     * 判断参数 ReleasedConfigCenter 是否已赋值
                     * @return ReleasedConfigCenter 是否已赋值
                     * 
                     */
                    bool ReleasedConfigCenterHasBeenSet() const;

                private:

                    /**
                     * 配置项发布日志ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configReleaseLogId;
                    bool m_configReleaseLogIdHasBeenSet;

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
                     * 发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_releaseTime;
                    bool m_releaseTimeHasBeenSet;

                    /**
                     * 发布描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_releaseDesc;
                    bool m_releaseDescHasBeenSet;

                    /**
                     * 发布状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_releaseStatus;
                    bool m_releaseStatusHasBeenSet;

                    /**
                     * 上次发布的配置项ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastConfigId;
                    bool m_lastConfigIdHasBeenSet;

                    /**
                     * 上次发布的配置项名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastConfigName;
                    bool m_lastConfigNameHasBeenSet;

                    /**
                     * 上次发布的配置项版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastConfigVersion;
                    bool m_lastConfigVersionHasBeenSet;

                    /**
                     * 回滚标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_rollbackFlag;
                    bool m_rollbackFlagHasBeenSet;

                    /**
                     * 发布成功的配置中心
 ALL/EXCLUSIVE/SHARE/NONE

全部发布成功，独占发布成功，共享发布成功，全部发布失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_releasedConfigCenter;
                    bool m_releasedConfigCenterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CONFIGRELEASELOG_H_
