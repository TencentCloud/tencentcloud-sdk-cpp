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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERGROUPDETAIL_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERGROUPDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ProtocolPort.h>
#include <tencentcloud/tsf/v20180326/model/Env.h>
#include <tencentcloud/tsf/v20180326/model/HealthCheckSettings.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 容器部署组详情
                */
                class ContainerGroupDetail : public AbstractModel
                {
                public:
                    ContainerGroupDetail();
                    ~ContainerGroupDetail() = default;
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
                     * 获取分组名称
                     * @return GroupName 分组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置分组名称
                     * @param _groupName 分组名称
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
                     * 获取实例总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceNum 实例总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInstanceNum() const;

                    /**
                     * 设置实例总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceNum 实例总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceNum(const int64_t& _instanceNum);

                    /**
                     * 判断参数 InstanceNum 是否已赋值
                     * @return InstanceNum 是否已赋值
                     * 
                     */
                    bool InstanceNumHasBeenSet() const;

                    /**
                     * 获取已启动实例总数
                     * @return CurrentNum 已启动实例总数
                     * 
                     */
                    int64_t GetCurrentNum() const;

                    /**
                     * 设置已启动实例总数
                     * @param _currentNum 已启动实例总数
                     * 
                     */
                    void SetCurrentNum(const int64_t& _currentNum);

                    /**
                     * 判断参数 CurrentNum 是否已赋值
                     * @return CurrentNum 是否已赋值
                     * 
                     */
                    bool CurrentNumHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取镜像server
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Server 镜像server
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServer() const;

                    /**
                     * 设置镜像server
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _server 镜像server
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServer(const std::string& _server);

                    /**
                     * 判断参数 Server 是否已赋值
                     * @return Server 是否已赋值
                     * 
                     */
                    bool ServerHasBeenSet() const;

                    /**
                     * 获取镜像名，如/tsf/nginx
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reponame 镜像名，如/tsf/nginx
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReponame() const;

                    /**
                     * 设置镜像名，如/tsf/nginx
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reponame 镜像名，如/tsf/nginx
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReponame(const std::string& _reponame);

                    /**
                     * 判断参数 Reponame 是否已赋值
                     * @return Reponame 是否已赋值
                     * 
                     */
                    bool ReponameHasBeenSet() const;

                    /**
                     * 获取镜像版本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagName 镜像版本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置镜像版本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagName 镜像版本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagName(const std::string& _tagName);

                    /**
                     * 判断参数 TagName 是否已赋值
                     * @return TagName 是否已赋值
                     * 
                     */
                    bool TagNameHasBeenSet() const;

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
                     * 获取负载均衡ip
                     * @return LbIp 负载均衡ip
                     * 
                     */
                    std::string GetLbIp() const;

                    /**
                     * 设置负载均衡ip
                     * @param _lbIp 负载均衡ip
                     * 
                     */
                    void SetLbIp(const std::string& _lbIp);

                    /**
                     * 判断参数 LbIp 是否已赋值
                     * @return LbIp 是否已赋值
                     * 
                     */
                    bool LbIpHasBeenSet() const;

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
                     * 获取Service ip
                     * @return ClusterIp Service ip
                     * 
                     */
                    std::string GetClusterIp() const;

                    /**
                     * 设置Service ip
                     * @param _clusterIp Service ip
                     * 
                     */
                    void SetClusterIp(const std::string& _clusterIp);

                    /**
                     * 判断参数 ClusterIp 是否已赋值
                     * @return ClusterIp 是否已赋值
                     * 
                     */
                    bool ClusterIpHasBeenSet() const;

                    /**
                     * 获取NodePort端口，只有公网和NodePort访问方式才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodePort NodePort端口，只有公网和NodePort访问方式才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNodePort() const;

                    /**
                     * 设置NodePort端口，只有公网和NodePort访问方式才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodePort NodePort端口，只有公网和NodePort访问方式才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodePort(const int64_t& _nodePort);

                    /**
                     * 判断参数 NodePort 是否已赋值
                     * @return NodePort 是否已赋值
                     * 
                     */
                    bool NodePortHasBeenSet() const;

                    /**
                     * 获取最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuLimit 最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCpuLimit() const;

                    /**
                     * 设置最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuLimit 最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpuLimit(const std::string& _cpuLimit);

                    /**
                     * 判断参数 CpuLimit 是否已赋值
                     * @return CpuLimit 是否已赋值
                     * 
                     */
                    bool CpuLimitHasBeenSet() const;

                    /**
                     * 获取最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemLimit 最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemLimit() const;

                    /**
                     * 设置最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memLimit 最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemLimit(const std::string& _memLimit);

                    /**
                     * 判断参数 MemLimit 是否已赋值
                     * @return MemLimit 是否已赋值
                     * 
                     */
                    bool MemLimitHasBeenSet() const;

                    /**
                     * 获取0:公网 1:集群内访问 2：NodePort
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessType 0:公网 1:集群内访问 2：NodePort
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAccessType() const;

                    /**
                     * 设置0:公网 1:集群内访问 2：NodePort
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessType 0:公网 1:集群内访问 2：NodePort
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessType(const uint64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取更新方式：0:快速更新 1:滚动更新
                     * @return UpdateType 更新方式：0:快速更新 1:滚动更新
                     * 
                     */
                    int64_t GetUpdateType() const;

                    /**
                     * 设置更新方式：0:快速更新 1:滚动更新
                     * @param _updateType 更新方式：0:快速更新 1:滚动更新
                     * 
                     */
                    void SetUpdateType(const int64_t& _updateType);

                    /**
                     * 判断参数 UpdateType 是否已赋值
                     * @return UpdateType 是否已赋值
                     * 
                     */
                    bool UpdateTypeHasBeenSet() const;

                    /**
                     * 获取更新间隔,单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateIvl 更新间隔,单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateIvl() const;

                    /**
                     * 设置更新间隔,单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateIvl 更新间隔,单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateIvl(const int64_t& _updateIvl);

                    /**
                     * 判断参数 UpdateIvl 是否已赋值
                     * @return UpdateIvl 是否已赋值
                     * 
                     */
                    bool UpdateIvlHasBeenSet() const;

                    /**
                     * 获取端口数组对象
                     * @return ProtocolPorts 端口数组对象
                     * 
                     */
                    std::vector<ProtocolPort> GetProtocolPorts() const;

                    /**
                     * 设置端口数组对象
                     * @param _protocolPorts 端口数组对象
                     * 
                     */
                    void SetProtocolPorts(const std::vector<ProtocolPort>& _protocolPorts);

                    /**
                     * 判断参数 ProtocolPorts 是否已赋值
                     * @return ProtocolPorts 是否已赋值
                     * 
                     */
                    bool ProtocolPortsHasBeenSet() const;

                    /**
                     * 获取环境变量数组对象
                     * @return Envs 环境变量数组对象
                     * 
                     */
                    std::vector<Env> GetEnvs() const;

                    /**
                     * 设置环境变量数组对象
                     * @param _envs 环境变量数组对象
                     * 
                     */
                    void SetEnvs(const std::vector<Env>& _envs);

                    /**
                     * 判断参数 Envs 是否已赋值
                     * @return Envs 是否已赋值
                     * 
                     */
                    bool EnvsHasBeenSet() const;

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
                     * 获取pod错误信息描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message pod错误信息描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置pod错误信息描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message pod错误信息描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取部署组状态
                     * @return Status 部署组状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置部署组状态
                     * @param _status 部署组状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取服务类型
                     * @return MicroserviceType 服务类型
                     * 
                     */
                    std::string GetMicroserviceType() const;

                    /**
                     * 设置服务类型
                     * @param _microserviceType 服务类型
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
                     * 获取初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuRequest 初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCpuRequest() const;

                    /**
                     * 设置初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuRequest 初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpuRequest(const std::string& _cpuRequest);

                    /**
                     * 判断参数 CpuRequest 是否已赋值
                     * @return CpuRequest 是否已赋值
                     * 
                     */
                    bool CpuRequestHasBeenSet() const;

                    /**
                     * 获取初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemRequest 初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemRequest() const;

                    /**
                     * 设置初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memRequest 初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemRequest(const std::string& _memRequest);

                    /**
                     * 判断参数 MemRequest 是否已赋值
                     * @return MemRequest 是否已赋值
                     * 
                     */
                    bool MemRequestHasBeenSet() const;

                    /**
                     * 获取子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId 子网id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取部署组实例个数
                     * @return InstanceCount 部署组实例个数
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置部署组实例个数
                     * @param _instanceCount 部署组实例个数
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

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
                     * 获取kubernetes滚动更新策略的MaxSurge参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxSurge kubernetes滚动更新策略的MaxSurge参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMaxSurge() const;

                    /**
                     * 设置kubernetes滚动更新策略的MaxSurge参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxSurge kubernetes滚动更新策略的MaxSurge参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxSurge(const std::string& _maxSurge);

                    /**
                     * 判断参数 MaxSurge 是否已赋值
                     * @return MaxSurge 是否已赋值
                     * 
                     */
                    bool MaxSurgeHasBeenSet() const;

                    /**
                     * 获取kubernetes滚动更新策略的MaxUnavailable参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxUnavailable kubernetes滚动更新策略的MaxUnavailable参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMaxUnavailable() const;

                    /**
                     * 设置kubernetes滚动更新策略的MaxUnavailable参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxUnavailable kubernetes滚动更新策略的MaxUnavailable参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxUnavailable(const std::string& _maxUnavailable);

                    /**
                     * 判断参数 MaxUnavailable 是否已赋值
                     * @return MaxUnavailable 是否已赋值
                     * 
                     */
                    bool MaxUnavailableHasBeenSet() const;

                    /**
                     * 获取部署组健康检查设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCheckSettings 部署组健康检查设置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HealthCheckSettings GetHealthCheckSettings() const;

                    /**
                     * 设置部署组健康检查设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthCheckSettings 部署组健康检查设置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHealthCheckSettings(const HealthCheckSettings& _healthCheckSettings);

                    /**
                     * 判断参数 HealthCheckSettings 是否已赋值
                     * @return HealthCheckSettings 是否已赋值
                     * 
                     */
                    bool HealthCheckSettingsHasBeenSet() const;

                    /**
                     * 获取允许PlainYamlDeploy
                     * @return AllowPlainYamlDeploy 允许PlainYamlDeploy
                     * 
                     */
                    bool GetAllowPlainYamlDeploy() const;

                    /**
                     * 设置允许PlainYamlDeploy
                     * @param _allowPlainYamlDeploy 允许PlainYamlDeploy
                     * 
                     */
                    void SetAllowPlainYamlDeploy(const bool& _allowPlainYamlDeploy);

                    /**
                     * 判断参数 AllowPlainYamlDeploy 是否已赋值
                     * @return AllowPlainYamlDeploy 是否已赋值
                     * 
                     */
                    bool AllowPlainYamlDeployHasBeenSet() const;

                    /**
                     * 获取是否不等于ServiceConfig
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsNotEqualServiceConfig 是否不等于ServiceConfig
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsNotEqualServiceConfig() const;

                    /**
                     * 设置是否不等于ServiceConfig
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isNotEqualServiceConfig 是否不等于ServiceConfig
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsNotEqualServiceConfig(const bool& _isNotEqualServiceConfig);

                    /**
                     * 判断参数 IsNotEqualServiceConfig 是否已赋值
                     * @return IsNotEqualServiceConfig 是否已赋值
                     * 
                     */
                    bool IsNotEqualServiceConfigHasBeenSet() const;

                    /**
                     * 获取仓库名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RepoName 仓库名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置仓库名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _repoName 仓库名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRepoName(const std::string& _repoName);

                    /**
                     * 判断参数 RepoName 是否已赋值
                     * @return RepoName 是否已赋值
                     * 
                     */
                    bool RepoNameHasBeenSet() const;

                    /**
                     * 获取别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alias 别名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alias 别名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 分组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 实例总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * 已启动实例总数
                     */
                    int64_t m_currentNum;
                    bool m_currentNumHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 镜像server
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_server;
                    bool m_serverHasBeenSet;

                    /**
                     * 镜像名，如/tsf/nginx
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reponame;
                    bool m_reponameHasBeenSet;

                    /**
                     * 镜像版本名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 命名空间ID
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 命名空间名称
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 负载均衡ip
                     */
                    std::string m_lbIp;
                    bool m_lbIpHasBeenSet;

                    /**
                     * 应用类型
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * Service ip
                     */
                    std::string m_clusterIp;
                    bool m_clusterIpHasBeenSet;

                    /**
                     * NodePort端口，只有公网和NodePort访问方式才有值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_nodePort;
                    bool m_nodePortHasBeenSet;

                    /**
                     * 最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cpuLimit;
                    bool m_cpuLimitHasBeenSet;

                    /**
                     * 最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memLimit;
                    bool m_memLimitHasBeenSet;

                    /**
                     * 0:公网 1:集群内访问 2：NodePort
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 更新方式：0:快速更新 1:滚动更新
                     */
                    int64_t m_updateType;
                    bool m_updateTypeHasBeenSet;

                    /**
                     * 更新间隔,单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateIvl;
                    bool m_updateIvlHasBeenSet;

                    /**
                     * 端口数组对象
                     */
                    std::vector<ProtocolPort> m_protocolPorts;
                    bool m_protocolPortsHasBeenSet;

                    /**
                     * 环境变量数组对象
                     */
                    std::vector<Env> m_envs;
                    bool m_envsHasBeenSet;

                    /**
                     * 应用名称
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * pod错误信息描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 部署组状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 服务类型
                     */
                    std::string m_microserviceType;
                    bool m_microserviceTypeHasBeenSet;

                    /**
                     * 初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cpuRequest;
                    bool m_cpuRequestHasBeenSet;

                    /**
                     * 初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memRequest;
                    bool m_memRequestHasBeenSet;

                    /**
                     * 子网id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 部署组资源类型
                     */
                    std::string m_groupResourceType;
                    bool m_groupResourceTypeHasBeenSet;

                    /**
                     * 部署组实例个数
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 部署组更新时间戳
                     */
                    int64_t m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * kubernetes滚动更新策略的MaxSurge参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_maxSurge;
                    bool m_maxSurgeHasBeenSet;

                    /**
                     * kubernetes滚动更新策略的MaxUnavailable参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_maxUnavailable;
                    bool m_maxUnavailableHasBeenSet;

                    /**
                     * 部署组健康检查设置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HealthCheckSettings m_healthCheckSettings;
                    bool m_healthCheckSettingsHasBeenSet;

                    /**
                     * 允许PlainYamlDeploy
                     */
                    bool m_allowPlainYamlDeploy;
                    bool m_allowPlainYamlDeployHasBeenSet;

                    /**
                     * 是否不等于ServiceConfig
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isNotEqualServiceConfig;
                    bool m_isNotEqualServiceConfigHasBeenSet;

                    /**
                     * 仓库名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * 别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERGROUPDETAIL_H_
