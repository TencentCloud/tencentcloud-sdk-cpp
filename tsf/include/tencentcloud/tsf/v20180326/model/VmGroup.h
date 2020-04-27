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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_VMGROUP_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_VMGROUP_H_

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
                * 虚拟机部署组信息
                */
                class VmGroup : public AbstractModel
                {
                public:
                    VmGroup();
                    ~VmGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupId 部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取部署组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName 部署组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置部署组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupName 部署组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取部署组状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupStatus 部署组状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupStatus() const;

                    /**
                     * 设置部署组状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupStatus 部署组状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupStatus(const std::string& _groupStatus);

                    /**
                     * 判断参数 GroupStatus 是否已赋值
                     * @return GroupStatus 是否已赋值
                     */
                    bool GroupStatusHasBeenSet() const;

                    /**
                     * 获取程序包ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageId 程序包ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置程序包ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PackageId 程序包ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取程序包名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageName 程序包名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置程序包名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PackageName 程序包名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取程序包版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageVersion 程序包版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPackageVersion() const;

                    /**
                     * 设置程序包版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PackageVersion 程序包版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPackageVersion(const std::string& _packageVersion);

                    /**
                     * 判断参数 PackageVersion 是否已赋值
                     * @return PackageVersion 是否已赋值
                     */
                    bool PackageVersionHasBeenSet() const;

                    /**
                     * 获取集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterId 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceId 命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NamespaceId 命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceName 命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NamespaceName 命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationId 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApplicationId 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationName 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApplicationName 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取部署组机器数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceCount 部署组机器数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置部署组机器数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceCount 部署组机器数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取部署组运行中机器数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunInstanceCount 部署组运行中机器数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRunInstanceCount() const;

                    /**
                     * 设置部署组运行中机器数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RunInstanceCount 部署组运行中机器数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRunInstanceCount(const int64_t& _runInstanceCount);

                    /**
                     * 判断参数 RunInstanceCount 是否已赋值
                     * @return RunInstanceCount 是否已赋值
                     */
                    bool RunInstanceCountHasBeenSet() const;

                    /**
                     * 获取部署组启动参数信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartupParameters 部署组启动参数信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStartupParameters() const;

                    /**
                     * 设置部署组启动参数信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartupParameters 部署组启动参数信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartupParameters(const std::string& _startupParameters);

                    /**
                     * 判断参数 StartupParameters 是否已赋值
                     * @return StartupParameters 是否已赋值
                     */
                    bool StartupParametersHasBeenSet() const;

                    /**
                     * 获取部署组创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 部署组创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置部署组创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 部署组创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取部署组更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 部署组更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置部署组更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 部署组更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取部署组停止机器数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OffInstanceCount 部署组停止机器数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetOffInstanceCount() const;

                    /**
                     * 设置部署组停止机器数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OffInstanceCount 部署组停止机器数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOffInstanceCount(const int64_t& _offInstanceCount);

                    /**
                     * 判断参数 OffInstanceCount 是否已赋值
                     * @return OffInstanceCount 是否已赋值
                     */
                    bool OffInstanceCountHasBeenSet() const;

                    /**
                     * 获取部署组描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupDesc 部署组描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupDesc() const;

                    /**
                     * 设置部署组描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupDesc 部署组描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupDesc(const std::string& _groupDesc);

                    /**
                     * 判断参数 GroupDesc 是否已赋值
                     * @return GroupDesc 是否已赋值
                     */
                    bool GroupDescHasBeenSet() const;

                    /**
                     * 获取微服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MicroserviceType 微服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMicroserviceType() const;

                    /**
                     * 设置微服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MicroserviceType 微服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMicroserviceType(const std::string& _microserviceType);

                    /**
                     * 判断参数 MicroserviceType 是否已赋值
                     * @return MicroserviceType 是否已赋值
                     */
                    bool MicroserviceTypeHasBeenSet() const;

                    /**
                     * 获取应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationType 应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApplicationType 应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取部署组资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupResourceType 部署组资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupResourceType() const;

                    /**
                     * 设置部署组资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupResourceType 部署组资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupResourceType(const std::string& _groupResourceType);

                    /**
                     * 判断参数 GroupResourceType 是否已赋值
                     * @return GroupResourceType 是否已赋值
                     */
                    bool GroupResourceTypeHasBeenSet() const;

                    /**
                     * 获取部署组更新时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedTime 部署组更新时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetUpdatedTime() const;

                    /**
                     * 设置部署组更新时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdatedTime 部署组更新时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdatedTime(const int64_t& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     */
                    bool UpdatedTimeHasBeenSet() const;

                private:

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
                     * 部署组状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupStatus;
                    bool m_groupStatusHasBeenSet;

                    /**
                     * 程序包ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 程序包名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 程序包版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageVersion;
                    bool m_packageVersionHasBeenSet;

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
                     * 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 部署组机器数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 部署组运行中机器数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_runInstanceCount;
                    bool m_runInstanceCountHasBeenSet;

                    /**
                     * 部署组启动参数信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startupParameters;
                    bool m_startupParametersHasBeenSet;

                    /**
                     * 部署组创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 部署组更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 部署组停止机器数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_offInstanceCount;
                    bool m_offInstanceCountHasBeenSet;

                    /**
                     * 部署组描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupDesc;
                    bool m_groupDescHasBeenSet;

                    /**
                     * 微服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_microserviceType;
                    bool m_microserviceTypeHasBeenSet;

                    /**
                     * 应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 部署组资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupResourceType;
                    bool m_groupResourceTypeHasBeenSet;

                    /**
                     * 部署组更新时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_VMGROUP_H_
