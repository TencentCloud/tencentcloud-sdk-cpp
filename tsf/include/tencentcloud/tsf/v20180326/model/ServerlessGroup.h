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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_SERVERLESSGROUP_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_SERVERLESSGROUP_H_

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
                * Serverless部署组信息
                */
                class ServerlessGroup : public AbstractModel
                {
                public:
                    ServerlessGroup();
                    ~ServerlessGroup() = default;
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
                     * 获取分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName 分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupName 分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取服务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 服务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置服务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 服务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取程序包ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PkgId 程序包ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置程序包ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PkgId 程序包ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取程序包名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PkgName 程序包名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPkgName() const;

                    /**
                     * 设置程序包名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PkgName 程序包名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPkgName(const std::string& _pkgName);

                    /**
                     * 判断参数 PkgName 是否已赋值
                     * @return PkgName 是否已赋值
                     */
                    bool PkgNameHasBeenSet() const;

                    /**
                     * 获取集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 集群id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterId 集群id
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
                     * 获取命名空间id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceId 命名空间id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NamespaceId 命名空间id
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
                     * 获取vpc ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId vpc ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VpcId vpc ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取vpc 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId vpc 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置vpc 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubnetId vpc 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取程序包版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PkgVersion 程序包版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPkgVersion() const;

                    /**
                     * 设置程序包版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PkgVersion 程序包版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPkgVersion(const std::string& _pkgVersion);

                    /**
                     * 判断参数 PkgVersion 是否已赋值
                     * @return PkgVersion 是否已赋值
                     */
                    bool PkgVersionHasBeenSet() const;

                    /**
                     * 获取所需实例内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Memory 所需实例内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMemory() const;

                    /**
                     * 设置所需实例内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Memory 所需实例内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMemory(const std::string& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取要求最小实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceRequest 要求最小实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetInstanceRequest() const;

                    /**
                     * 设置要求最小实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceRequest 要求最小实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceRequest(const uint64_t& _instanceRequest);

                    /**
                     * 判断参数 InstanceRequest 是否已赋值
                     * @return InstanceRequest 是否已赋值
                     */
                    bool InstanceRequestHasBeenSet() const;

                    /**
                     * 获取部署组启动参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartupParameters 部署组启动参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStartupParameters() const;

                    /**
                     * 设置部署组启动参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartupParameters 部署组启动参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartupParameters(const std::string& _startupParameters);

                    /**
                     * 判断参数 StartupParameters 是否已赋值
                     * @return StartupParameters 是否已赋值
                     */
                    bool StartupParametersHasBeenSet() const;

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
                     * 获取部署组实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceCount 部署组实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置部署组实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceCount 部署组实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationName 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetApplicationName() const;

                    /**
                     * 设置应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApplicationName 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApplicationName(const std::vector<std::string>& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     */
                    bool ApplicationNameHasBeenSet() const;

                private:

                    /**
                     * 部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 服务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 程序包ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * 程序包名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pkgName;
                    bool m_pkgNameHasBeenSet;

                    /**
                     * 集群id
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
                     * 命名空间id
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
                     * vpc ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * vpc 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 程序包版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pkgVersion;
                    bool m_pkgVersionHasBeenSet;

                    /**
                     * 所需实例内存大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 要求最小实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_instanceRequest;
                    bool m_instanceRequestHasBeenSet;

                    /**
                     * 部署组启动参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startupParameters;
                    bool m_startupParametersHasBeenSet;

                    /**
                     * 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 部署组实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_applicationName;
                    bool m_applicationNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_SERVERLESSGROUP_H_
