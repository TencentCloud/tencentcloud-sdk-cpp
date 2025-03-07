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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_VMGROUPSIMPLE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_VMGROUPSIMPLE_H_

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
                * 虚拟机部署组列表简要字段
                */
                class VmGroupSimple : public AbstractModel
                {
                public:
                    VmGroupSimple();
                    ~VmGroupSimple() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部署组ID
                     * @return GroupId 部署组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID
                     * @param _groupId 部署组ID
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
                     * @return GroupName 部署组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置部署组名称
                     * @param _groupName 部署组名称
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
                     * 获取应用类型
                     * @return ApplicationType 应用类型
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置应用类型
                     * @param _applicationType 应用类型
                     * 
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取部署组描述
                     * @return GroupDesc 部署组描述
                     * 
                     */
                    std::string GetGroupDesc() const;

                    /**
                     * 设置部署组描述
                     * @param _groupDesc 部署组描述
                     * 
                     */
                    void SetGroupDesc(const std::string& _groupDesc);

                    /**
                     * 判断参数 GroupDesc 是否已赋值
                     * @return GroupDesc 是否已赋值
                     * 
                     */
                    bool GroupDescHasBeenSet() const;

                    /**
                     * 获取部署组更新时间
                     * @return UpdateTime 部署组更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置部署组更新时间
                     * @param _updateTime 部署组更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

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
                     * 获取部署组启动参数
                     * @return StartupParameters 部署组启动参数
                     * 
                     */
                    std::string GetStartupParameters() const;

                    /**
                     * 设置部署组启动参数
                     * @param _startupParameters 部署组启动参数
                     * 
                     */
                    void SetStartupParameters(const std::string& _startupParameters);

                    /**
                     * 判断参数 StartupParameters 是否已赋值
                     * @return StartupParameters 是否已赋值
                     * 
                     */
                    bool StartupParametersHasBeenSet() const;

                    /**
                     * 获取命名空间ID
                     * @return NamespaceId 命名空间ID
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID
                     * @param _namespaceId 命名空间ID
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
                     * 获取部署组创建时间
                     * @return CreateTime 部署组创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置部署组创建时间
                     * @param _createTime 部署组创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

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
                     * 获取应用ID
                     * @return ApplicationId 应用ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID
                     * @param _applicationId 应用ID
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
                     * 获取应用名称
                     * @return ApplicationName 应用名称
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置应用名称
                     * @param _applicationName 应用名称
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取命名空间名称
                     * @return NamespaceName 命名空间名称
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间名称
                     * @param _namespaceName 命名空间名称
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
                     * 获取应用微服务类型
                     * @return MicroserviceType 应用微服务类型
                     * 
                     */
                    std::string GetMicroserviceType() const;

                    /**
                     * 设置应用微服务类型
                     * @param _microserviceType 应用微服务类型
                     * 
                     */
                    void SetMicroserviceType(const std::string& _microserviceType);

                    /**
                     * 判断参数 MicroserviceType 是否已赋值
                     * @return MicroserviceType 是否已赋值
                     * 
                     */
                    bool MicroserviceTypeHasBeenSet() const;

                    /**
                     * 获取部署组资源类型
                     * @return GroupResourceType 部署组资源类型
                     * 
                     */
                    std::string GetGroupResourceType() const;

                    /**
                     * 设置部署组资源类型
                     * @param _groupResourceType 部署组资源类型
                     * 
                     */
                    void SetGroupResourceType(const std::string& _groupResourceType);

                    /**
                     * 判断参数 GroupResourceType 是否已赋值
                     * @return GroupResourceType 是否已赋值
                     * 
                     */
                    bool GroupResourceTypeHasBeenSet() const;

                    /**
                     * 获取部署组更新时间戳
                     * @return UpdatedTime 部署组更新时间戳
                     * 
                     */
                    int64_t GetUpdatedTime() const;

                    /**
                     * 设置部署组更新时间戳
                     * @param _updatedTime 部署组更新时间戳
                     * 
                     */
                    void SetUpdatedTime(const int64_t& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取部署应用描述信息
                     * @return DeployDesc 部署应用描述信息
                     * 
                     */
                    std::string GetDeployDesc() const;

                    /**
                     * 设置部署应用描述信息
                     * @param _deployDesc 部署应用描述信息
                     * 
                     */
                    void SetDeployDesc(const std::string& _deployDesc);

                    /**
                     * 判断参数 DeployDesc 是否已赋值
                     * @return DeployDesc 是否已赋值
                     * 
                     */
                    bool DeployDescHasBeenSet() const;

                    /**
                     * 获取部署组备注
                     * @return Alias 部署组备注
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置部署组备注
                     * @param _alias 部署组备注
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                private:

                    /**
                     * 部署组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 部署组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 应用类型
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 部署组描述
                     */
                    std::string m_groupDesc;
                    bool m_groupDescHasBeenSet;

                    /**
                     * 部署组更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 部署组启动参数
                     */
                    std::string m_startupParameters;
                    bool m_startupParametersHasBeenSet;

                    /**
                     * 命名空间ID
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 部署组创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 应用名称
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 命名空间名称
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 应用微服务类型
                     */
                    std::string m_microserviceType;
                    bool m_microserviceTypeHasBeenSet;

                    /**
                     * 部署组资源类型
                     */
                    std::string m_groupResourceType;
                    bool m_groupResourceTypeHasBeenSet;

                    /**
                     * 部署组更新时间戳
                     */
                    int64_t m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * 部署应用描述信息
                     */
                    std::string m_deployDesc;
                    bool m_deployDescHasBeenSet;

                    /**
                     * 部署组备注
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_VMGROUPSIMPLE_H_
