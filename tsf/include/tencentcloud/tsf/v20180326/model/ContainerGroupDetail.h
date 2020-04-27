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


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                *  容器部署组详情
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
                     * 获取实例总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceNum 实例总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetInstanceNum() const;

                    /**
                     * 设置实例总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceNum 实例总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceNum(const int64_t& _instanceNum);

                    /**
                     * 判断参数 InstanceNum 是否已赋值
                     * @return InstanceNum 是否已赋值
                     */
                    bool InstanceNumHasBeenSet() const;

                    /**
                     * 获取已启动实例总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentNum 已启动实例总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCurrentNum() const;

                    /**
                     * 设置已启动实例总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CurrentNum 已启动实例总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCurrentNum(const int64_t& _currentNum);

                    /**
                     * 判断参数 CurrentNum 是否已赋值
                     * @return CurrentNum 是否已赋值
                     */
                    bool CurrentNumHasBeenSet() const;

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
                     * 获取镜像server
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Server 镜像server
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetServer() const;

                    /**
                     * 设置镜像server
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Server 镜像server
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServer(const std::string& _server);

                    /**
                     * 判断参数 Server 是否已赋值
                     * @return Server 是否已赋值
                     */
                    bool ServerHasBeenSet() const;

                    /**
                     * 获取镜像名，如/tsf/nginx
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reponame 镜像名，如/tsf/nginx
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetReponame() const;

                    /**
                     * 设置镜像名，如/tsf/nginx
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Reponame 镜像名，如/tsf/nginx
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReponame(const std::string& _reponame);

                    /**
                     * 判断参数 Reponame 是否已赋值
                     * @return Reponame 是否已赋值
                     */
                    bool ReponameHasBeenSet() const;

                    /**
                     * 获取镜像版本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagName 镜像版本名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置镜像版本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TagName 镜像版本名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTagName(const std::string& _tagName);

                    /**
                     * 判断参数 TagName 是否已赋值
                     * @return TagName 是否已赋值
                     */
                    bool TagNameHasBeenSet() const;

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
                     * 获取负载均衡ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LbIp 负载均衡ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLbIp() const;

                    /**
                     * 设置负载均衡ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LbIp 负载均衡ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLbIp(const std::string& _lbIp);

                    /**
                     * 判断参数 LbIp 是否已赋值
                     * @return LbIp 是否已赋值
                     */
                    bool LbIpHasBeenSet() const;

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
                     * 获取Service ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterIp Service ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterIp() const;

                    /**
                     * 设置Service ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterIp Service ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterIp(const std::string& _clusterIp);

                    /**
                     * 判断参数 ClusterIp 是否已赋值
                     * @return ClusterIp 是否已赋值
                     */
                    bool ClusterIpHasBeenSet() const;

                    /**
                     * 获取NodePort端口，只有公网和NodePort访问方式才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodePort NodePort端口，只有公网和NodePort访问方式才有值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetNodePort() const;

                    /**
                     * 设置NodePort端口，只有公网和NodePort访问方式才有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NodePort NodePort端口，只有公网和NodePort访问方式才有值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNodePort(const int64_t& _nodePort);

                    /**
                     * 判断参数 NodePort 是否已赋值
                     * @return NodePort 是否已赋值
                     */
                    bool NodePortHasBeenSet() const;

                    /**
                     * 获取最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuLimit 最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCpuLimit() const;

                    /**
                     * 设置最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CpuLimit 最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCpuLimit(const std::string& _cpuLimit);

                    /**
                     * 判断参数 CpuLimit 是否已赋值
                     * @return CpuLimit 是否已赋值
                     */
                    bool CpuLimitHasBeenSet() const;

                    /**
                     * 获取最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemLimit 最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMemLimit() const;

                    /**
                     * 设置最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MemLimit 最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMemLimit(const std::string& _memLimit);

                    /**
                     * 判断参数 MemLimit 是否已赋值
                     * @return MemLimit 是否已赋值
                     */
                    bool MemLimitHasBeenSet() const;

                    /**
                     * 获取0:公网 1:集群内访问 2：NodePort
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessType 0:公网 1:集群内访问 2：NodePort
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetAccessType() const;

                    /**
                     * 设置0:公网 1:集群内访问 2：NodePort
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AccessType 0:公网 1:集群内访问 2：NodePort
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAccessType(const uint64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取更新方式：0:快速更新 1:滚动更新
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateType 更新方式：0:快速更新 1:滚动更新
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetUpdateType() const;

                    /**
                     * 设置更新方式：0:快速更新 1:滚动更新
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateType 更新方式：0:快速更新 1:滚动更新
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateType(const int64_t& _updateType);

                    /**
                     * 判断参数 UpdateType 是否已赋值
                     * @return UpdateType 是否已赋值
                     */
                    bool UpdateTypeHasBeenSet() const;

                    /**
                     * 获取更新间隔,单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateIvl 更新间隔,单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetUpdateIvl() const;

                    /**
                     * 设置更新间隔,单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateIvl 更新间隔,单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateIvl(const int64_t& _updateIvl);

                    /**
                     * 判断参数 UpdateIvl 是否已赋值
                     * @return UpdateIvl 是否已赋值
                     */
                    bool UpdateIvlHasBeenSet() const;

                    /**
                     * 获取端口数组对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProtocolPorts 端口数组对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ProtocolPort> GetProtocolPorts() const;

                    /**
                     * 设置端口数组对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProtocolPorts 端口数组对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProtocolPorts(const std::vector<ProtocolPort>& _protocolPorts);

                    /**
                     * 判断参数 ProtocolPorts 是否已赋值
                     * @return ProtocolPorts 是否已赋值
                     */
                    bool ProtocolPortsHasBeenSet() const;

                    /**
                     * 获取环境变量数组对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Envs 环境变量数组对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Env> GetEnvs() const;

                    /**
                     * 设置环境变量数组对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Envs 环境变量数组对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnvs(const std::vector<Env>& _envs);

                    /**
                     * 判断参数 Envs 是否已赋值
                     * @return Envs 是否已赋值
                     */
                    bool EnvsHasBeenSet() const;

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
                     * 获取pod错误信息描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message pod错误信息描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置pod错误信息描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Message pod错误信息描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取部署组状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 部署组状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置部署组状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 部署组状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MicroserviceType 服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMicroserviceType() const;

                    /**
                     * 设置服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MicroserviceType 服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMicroserviceType(const std::string& _microserviceType);

                    /**
                     * 判断参数 MicroserviceType 是否已赋值
                     * @return MicroserviceType 是否已赋值
                     */
                    bool MicroserviceTypeHasBeenSet() const;

                    /**
                     * 获取初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuRequest 初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCpuRequest() const;

                    /**
                     * 设置初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CpuRequest 初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCpuRequest(const std::string& _cpuRequest);

                    /**
                     * 判断参数 CpuRequest 是否已赋值
                     * @return CpuRequest 是否已赋值
                     */
                    bool CpuRequestHasBeenSet() const;

                    /**
                     * 获取初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemRequest 初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMemRequest() const;

                    /**
                     * 设置初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MemRequest 初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMemRequest(const std::string& _memRequest);

                    /**
                     * 判断参数 MemRequest 是否已赋值
                     * @return MemRequest 是否已赋值
                     */
                    bool MemRequestHasBeenSet() const;

                    /**
                     * 获取子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 子网id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubnetId 子网id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

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
                     * 获取部署组实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceCount 部署组实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置部署组实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceCount 部署组实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     */
                    bool InstanceCountHasBeenSet() const;

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
                     * 分组名称
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_currentNum;
                    bool m_currentNumHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 负载均衡ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lbIp;
                    bool m_lbIpHasBeenSet;

                    /**
                     * 应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * Service ip
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ProtocolPort> m_protocolPorts;
                    bool m_protocolPortsHasBeenSet;

                    /**
                     * 环境变量数组对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Env> m_envs;
                    bool m_envsHasBeenSet;

                    /**
                     * 应用名称
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 服务类型
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupResourceType;
                    bool m_groupResourceTypeHasBeenSet;

                    /**
                     * 部署组实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

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

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERGROUPDETAIL_H_
