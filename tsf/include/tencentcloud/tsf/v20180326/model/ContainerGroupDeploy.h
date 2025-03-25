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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERGROUPDEPLOY_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERGROUPDEPLOY_H_

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
#include <tencentcloud/tsf/v20180326/model/TcrRepoInfo.h>
#include <tencentcloud/tsf/v20180326/model/VolumeInfo.h>
#include <tencentcloud/tsf/v20180326/model/VolumeMountInfo.h>
#include <tencentcloud/tsf/v20180326/model/WarmupSetting.h>
#include <tencentcloud/tsf/v20180326/model/GatewayConfig.h>
#include <tencentcloud/tsf/v20180326/model/GroupContainerInfo.h>
#include <tencentcloud/tsf/v20180326/model/ServiceSetting.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 获取部署组
                */
                class ContainerGroupDeploy : public AbstractModel
                {
                public:
                    ContainerGroupDeploy();
                    ~ContainerGroupDeploy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部署组id
                     * @return GroupId 部署组id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组id
                     * @param _groupId 部署组id
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
                     * @return InstanceNum 实例总数
                     * 
                     */
                    int64_t GetInstanceNum() const;

                    /**
                     * 设置实例总数
                     * @param _instanceNum 实例总数
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
                     * 获取业务容器初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuRequest 业务容器初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCpuRequest() const;

                    /**
                     * 设置业务容器初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuRequest 业务容器初始分配的 CPU 核数，对应 K8S request
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
                     * 获取业务容器最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuLimit 业务容器最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCpuLimit() const;

                    /**
                     * 设置业务容器最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuLimit 业务容器最大分配的 CPU 核数，对应 K8S limit
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
                     * 获取业务容器初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemRequest 业务容器初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemRequest() const;

                    /**
                     * 设置业务容器初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memRequest 业务容器初始分配的内存 MiB 数，对应 K8S request
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
                     * 获取业务容器最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemLimit 业务容器最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemLimit() const;

                    /**
                     * 设置业务容器最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memLimit 业务容器最大分配的内存 MiB 数，对应 K8S limit
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
                    int64_t GetAccessType() const;

                    /**
                     * 设置0:公网 1:集群内访问 2：NodePort
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessType 0:公网 1:集群内访问 2：NodePort
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessType(const int64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取端口映射
                     * @return ProtocolPorts 端口映射
                     * 
                     */
                    std::vector<ProtocolPort> GetProtocolPorts() const;

                    /**
                     * 设置端口映射
                     * @param _protocolPorts 端口映射
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
                     * 获取更新方式：0:快速更新 1:滚动更新
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateType 更新方式：0:快速更新 1:滚动更新
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateType() const;

                    /**
                     * 设置更新方式：0:快速更新 1:滚动更新
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateType 更新方式：0:快速更新 1:滚动更新
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取jvm参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JvmOpts jvm参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJvmOpts() const;

                    /**
                     * 设置jvm参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jvmOpts jvm参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJvmOpts(const std::string& _jvmOpts);

                    /**
                     * 判断参数 JvmOpts 是否已赋值
                     * @return JvmOpts 是否已赋值
                     * 
                     */
                    bool JvmOptsHasBeenSet() const;

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
                     * 获取agent容器初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentCpuRequest agent容器初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentCpuRequest() const;

                    /**
                     * 设置agent容器初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentCpuRequest agent容器初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentCpuRequest(const std::string& _agentCpuRequest);

                    /**
                     * 判断参数 AgentCpuRequest 是否已赋值
                     * @return AgentCpuRequest 是否已赋值
                     * 
                     */
                    bool AgentCpuRequestHasBeenSet() const;

                    /**
                     * 获取agent容器最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentCpuLimit agent容器最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentCpuLimit() const;

                    /**
                     * 设置agent容器最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentCpuLimit agent容器最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentCpuLimit(const std::string& _agentCpuLimit);

                    /**
                     * 判断参数 AgentCpuLimit 是否已赋值
                     * @return AgentCpuLimit 是否已赋值
                     * 
                     */
                    bool AgentCpuLimitHasBeenSet() const;

                    /**
                     * 获取agent容器初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentMemRequest agent容器初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentMemRequest() const;

                    /**
                     * 设置agent容器初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentMemRequest agent容器初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentMemRequest(const std::string& _agentMemRequest);

                    /**
                     * 判断参数 AgentMemRequest 是否已赋值
                     * @return AgentMemRequest 是否已赋值
                     * 
                     */
                    bool AgentMemRequestHasBeenSet() const;

                    /**
                     * 获取agent容器最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentMemLimit agent容器最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentMemLimit() const;

                    /**
                     * 设置agent容器最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentMemLimit agent容器最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentMemLimit(const std::string& _agentMemLimit);

                    /**
                     * 判断参数 AgentMemLimit 是否已赋值
                     * @return AgentMemLimit 是否已赋值
                     * 
                     */
                    bool AgentMemLimitHasBeenSet() const;

                    /**
                     * 获取istioproxy容器初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IstioCpuRequest istioproxy容器初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIstioCpuRequest() const;

                    /**
                     * 设置istioproxy容器初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _istioCpuRequest istioproxy容器初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIstioCpuRequest(const std::string& _istioCpuRequest);

                    /**
                     * 判断参数 IstioCpuRequest 是否已赋值
                     * @return IstioCpuRequest 是否已赋值
                     * 
                     */
                    bool IstioCpuRequestHasBeenSet() const;

                    /**
                     * 获取istioproxy容器最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IstioCpuLimit istioproxy容器最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIstioCpuLimit() const;

                    /**
                     * 设置istioproxy容器最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _istioCpuLimit istioproxy容器最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIstioCpuLimit(const std::string& _istioCpuLimit);

                    /**
                     * 判断参数 IstioCpuLimit 是否已赋值
                     * @return IstioCpuLimit 是否已赋值
                     * 
                     */
                    bool IstioCpuLimitHasBeenSet() const;

                    /**
                     * 获取istioproxy容器初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IstioMemRequest istioproxy容器初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIstioMemRequest() const;

                    /**
                     * 设置istioproxy容器初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _istioMemRequest istioproxy容器初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIstioMemRequest(const std::string& _istioMemRequest);

                    /**
                     * 判断参数 IstioMemRequest 是否已赋值
                     * @return IstioMemRequest 是否已赋值
                     * 
                     */
                    bool IstioMemRequestHasBeenSet() const;

                    /**
                     * 获取istioproxy容器最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IstioMemLimit istioproxy容器最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIstioMemLimit() const;

                    /**
                     * 设置istioproxy容器最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _istioMemLimit istioproxy容器最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIstioMemLimit(const std::string& _istioMemLimit);

                    /**
                     * 判断参数 IstioMemLimit 是否已赋值
                     * @return IstioMemLimit 是否已赋值
                     * 
                     */
                    bool IstioMemLimitHasBeenSet() const;

                    /**
                     * 获取部署组的环境变量数组，这里没有展示 tsf 使用的环境变量，只展示了用户设置的环境变量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Envs 部署组的环境变量数组，这里没有展示 tsf 使用的环境变量，只展示了用户设置的环境变量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Env> GetEnvs() const;

                    /**
                     * 设置部署组的环境变量数组，这里没有展示 tsf 使用的环境变量，只展示了用户设置的环境变量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _envs 部署组的环境变量数组，这里没有展示 tsf 使用的环境变量，只展示了用户设置的环境变量。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取健康检查配置信息，若不指定该参数，则默认不设置健康检查。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCheckSettings 健康检查配置信息，若不指定该参数，则默认不设置健康检查。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HealthCheckSettings GetHealthCheckSettings() const;

                    /**
                     * 设置健康检查配置信息，若不指定该参数，则默认不设置健康检查。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthCheckSettings 健康检查配置信息，若不指定该参数，则默认不设置健康检查。
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
                     * 获取是否部署Agent容器
                     * @return DeployAgent 是否部署Agent容器
                     * 
                     */
                    bool GetDeployAgent() const;

                    /**
                     * 设置是否部署Agent容器
                     * @param _deployAgent 是否部署Agent容器
                     * 
                     */
                    void SetDeployAgent(const bool& _deployAgent);

                    /**
                     * 判断参数 DeployAgent 是否已赋值
                     * @return DeployAgent 是否已赋值
                     * 
                     */
                    bool DeployAgentHasBeenSet() const;

                    /**
                     * 获取部署组备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alias 部署组备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置部署组备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alias 部署组备注
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

                    /**
                     * 获取是否创建 k8s service
                     * @return DisableService 是否创建 k8s service
                     * 
                     */
                    bool GetDisableService() const;

                    /**
                     * 设置是否创建 k8s service
                     * @param _disableService 是否创建 k8s service
                     * 
                     */
                    void SetDisableService(const bool& _disableService);

                    /**
                     * 判断参数 DisableService 是否已赋值
                     * @return DisableService 是否已赋值
                     * 
                     */
                    bool DisableServiceHasBeenSet() const;

                    /**
                     * 获取service 是否为 headless 类型
                     * @return HeadlessService service 是否为 headless 类型
                     * 
                     */
                    bool GetHeadlessService() const;

                    /**
                     * 设置service 是否为 headless 类型
                     * @param _headlessService service 是否为 headless 类型
                     * 
                     */
                    void SetHeadlessService(const bool& _headlessService);

                    /**
                     * 判断参数 HeadlessService 是否已赋值
                     * @return HeadlessService 是否已赋值
                     * 
                     */
                    bool HeadlessServiceHasBeenSet() const;

                    /**
                     * 获取TcrRepoInfo值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TcrRepoInfo TcrRepoInfo值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TcrRepoInfo GetTcrRepoInfo() const;

                    /**
                     * 设置TcrRepoInfo值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tcrRepoInfo TcrRepoInfo值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTcrRepoInfo(const TcrRepoInfo& _tcrRepoInfo);

                    /**
                     * 判断参数 TcrRepoInfo 是否已赋值
                     * @return TcrRepoInfo 是否已赋值
                     * 
                     */
                    bool TcrRepoInfoHasBeenSet() const;

                    /**
                     * 获取数据卷信息，list
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeInfos 数据卷信息，list
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VolumeInfo> GetVolumeInfos() const;

                    /**
                     * 设置数据卷信息，list
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeInfos 数据卷信息，list
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVolumeInfos(const std::vector<VolumeInfo>& _volumeInfos);

                    /**
                     * 判断参数 VolumeInfos 是否已赋值
                     * @return VolumeInfos 是否已赋值
                     * 
                     */
                    bool VolumeInfosHasBeenSet() const;

                    /**
                     * 获取数据卷挂载信息，list
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeMountInfos 数据卷挂载信息，list
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VolumeMountInfo> GetVolumeMountInfos() const;

                    /**
                     * 设置数据卷挂载信息，list
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeMountInfos 数据卷挂载信息，list
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVolumeMountInfos(const std::vector<VolumeMountInfo>& _volumeMountInfos);

                    /**
                     * 判断参数 VolumeMountInfos 是否已赋值
                     * @return VolumeMountInfos 是否已赋值
                     * 
                     */
                    bool VolumeMountInfosHasBeenSet() const;

                    /**
                     * 获取KubeInjectEnable值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KubeInjectEnable KubeInjectEnable值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetKubeInjectEnable() const;

                    /**
                     * 设置KubeInjectEnable值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kubeInjectEnable KubeInjectEnable值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKubeInjectEnable(const bool& _kubeInjectEnable);

                    /**
                     * 判断参数 KubeInjectEnable 是否已赋值
                     * @return KubeInjectEnable 是否已赋值
                     * 
                     */
                    bool KubeInjectEnableHasBeenSet() const;

                    /**
                     * 获取仓库类型 (person, tcr)
                     * @return RepoType 仓库类型 (person, tcr)
                     * 
                     */
                    std::string GetRepoType() const;

                    /**
                     * 设置仓库类型 (person, tcr)
                     * @param _repoType 仓库类型 (person, tcr)
                     * 
                     */
                    void SetRepoType(const std::string& _repoType);

                    /**
                     * 判断参数 RepoType 是否已赋值
                     * @return RepoType 是否已赋值
                     * 
                     */
                    bool RepoTypeHasBeenSet() const;

                    /**
                     * 获取预热配置设置
                     * @return WarmupSetting 预热配置设置
                     * 
                     */
                    WarmupSetting GetWarmupSetting() const;

                    /**
                     * 设置预热配置设置
                     * @param _warmupSetting 预热配置设置
                     * 
                     */
                    void SetWarmupSetting(const WarmupSetting& _warmupSetting);

                    /**
                     * 判断参数 WarmupSetting 是否已赋值
                     * @return WarmupSetting 是否已赋值
                     * 
                     */
                    bool WarmupSettingHasBeenSet() const;

                    /**
                     * 获取Envoy网关服务配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GatewayConfig Envoy网关服务配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GatewayConfig GetGatewayConfig() const;

                    /**
                     * 设置Envoy网关服务配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gatewayConfig Envoy网关服务配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGatewayConfig(const GatewayConfig& _gatewayConfig);

                    /**
                     * 判断参数 GatewayConfig 是否已赋值
                     * @return GatewayConfig 是否已赋值
                     * 
                     */
                    bool GatewayConfigHasBeenSet() const;

                    /**
                     * 获取容器名称
                     * @return ContainerName 容器名称
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置容器名称
                     * @param _containerName 容器名称
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取附加容器列表
                     * @return AdditionalContainerList 附加容器列表
                     * 
                     */
                    std::vector<GroupContainerInfo> GetAdditionalContainerList() const;

                    /**
                     * 设置附加容器列表
                     * @param _additionalContainerList 附加容器列表
                     * 
                     */
                    void SetAdditionalContainerList(const std::vector<GroupContainerInfo>& _additionalContainerList);

                    /**
                     * 判断参数 AdditionalContainerList 是否已赋值
                     * @return AdditionalContainerList 是否已赋值
                     * 
                     */
                    bool AdditionalContainerListHasBeenSet() const;

                    /**
                     * 获取内部容器列表
                     * @return InternalContainerList 内部容器列表
                     * 
                     */
                    std::vector<GroupContainerInfo> GetInternalContainerList() const;

                    /**
                     * 设置内部容器列表
                     * @param _internalContainerList 内部容器列表
                     * 
                     */
                    void SetInternalContainerList(const std::vector<GroupContainerInfo>& _internalContainerList);

                    /**
                     * 判断参数 InternalContainerList 是否已赋值
                     * @return InternalContainerList 是否已赋值
                     * 
                     */
                    bool InternalContainerListHasBeenSet() const;

                    /**
                     * 获取service列表
                     * @return ServiceSettingList service列表
                     * 
                     */
                    std::vector<ServiceSetting> GetServiceSettingList() const;

                    /**
                     * 设置service列表
                     * @param _serviceSettingList service列表
                     * 
                     */
                    void SetServiceSettingList(const std::vector<ServiceSetting>& _serviceSettingList);

                    /**
                     * 判断参数 ServiceSettingList 是否已赋值
                     * @return ServiceSettingList 是否已赋值
                     * 
                     */
                    bool ServiceSettingListHasBeenSet() const;

                private:

                    /**
                     * 部署组id
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
                     */
                    int64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * 已启动实例总数
                     */
                    int64_t m_currentNum;
                    bool m_currentNumHasBeenSet;

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
                     * 业务容器初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cpuRequest;
                    bool m_cpuRequestHasBeenSet;

                    /**
                     * 业务容器最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cpuLimit;
                    bool m_cpuLimitHasBeenSet;

                    /**
                     * 业务容器初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memRequest;
                    bool m_memRequestHasBeenSet;

                    /**
                     * 业务容器最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memLimit;
                    bool m_memLimitHasBeenSet;

                    /**
                     * 0:公网 1:集群内访问 2：NodePort
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 端口映射
                     */
                    std::vector<ProtocolPort> m_protocolPorts;
                    bool m_protocolPortsHasBeenSet;

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
                     * jvm参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jvmOpts;
                    bool m_jvmOptsHasBeenSet;

                    /**
                     * 子网id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * agent容器初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentCpuRequest;
                    bool m_agentCpuRequestHasBeenSet;

                    /**
                     * agent容器最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentCpuLimit;
                    bool m_agentCpuLimitHasBeenSet;

                    /**
                     * agent容器初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentMemRequest;
                    bool m_agentMemRequestHasBeenSet;

                    /**
                     * agent容器最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentMemLimit;
                    bool m_agentMemLimitHasBeenSet;

                    /**
                     * istioproxy容器初始分配的 CPU 核数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_istioCpuRequest;
                    bool m_istioCpuRequestHasBeenSet;

                    /**
                     * istioproxy容器最大分配的 CPU 核数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_istioCpuLimit;
                    bool m_istioCpuLimitHasBeenSet;

                    /**
                     * istioproxy容器初始分配的内存 MiB 数，对应 K8S request
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_istioMemRequest;
                    bool m_istioMemRequestHasBeenSet;

                    /**
                     * istioproxy容器最大分配的内存 MiB 数，对应 K8S limit
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_istioMemLimit;
                    bool m_istioMemLimitHasBeenSet;

                    /**
                     * 部署组的环境变量数组，这里没有展示 tsf 使用的环境变量，只展示了用户设置的环境变量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Env> m_envs;
                    bool m_envsHasBeenSet;

                    /**
                     * 健康检查配置信息，若不指定该参数，则默认不设置健康检查。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HealthCheckSettings m_healthCheckSettings;
                    bool m_healthCheckSettingsHasBeenSet;

                    /**
                     * 是否部署Agent容器
                     */
                    bool m_deployAgent;
                    bool m_deployAgentHasBeenSet;

                    /**
                     * 部署组备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 是否创建 k8s service
                     */
                    bool m_disableService;
                    bool m_disableServiceHasBeenSet;

                    /**
                     * service 是否为 headless 类型
                     */
                    bool m_headlessService;
                    bool m_headlessServiceHasBeenSet;

                    /**
                     * TcrRepoInfo值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TcrRepoInfo m_tcrRepoInfo;
                    bool m_tcrRepoInfoHasBeenSet;

                    /**
                     * 数据卷信息，list
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VolumeInfo> m_volumeInfos;
                    bool m_volumeInfosHasBeenSet;

                    /**
                     * 数据卷挂载信息，list
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VolumeMountInfo> m_volumeMountInfos;
                    bool m_volumeMountInfosHasBeenSet;

                    /**
                     * KubeInjectEnable值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_kubeInjectEnable;
                    bool m_kubeInjectEnableHasBeenSet;

                    /**
                     * 仓库类型 (person, tcr)
                     */
                    std::string m_repoType;
                    bool m_repoTypeHasBeenSet;

                    /**
                     * 预热配置设置
                     */
                    WarmupSetting m_warmupSetting;
                    bool m_warmupSettingHasBeenSet;

                    /**
                     * Envoy网关服务配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GatewayConfig m_gatewayConfig;
                    bool m_gatewayConfigHasBeenSet;

                    /**
                     * 容器名称
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * 附加容器列表
                     */
                    std::vector<GroupContainerInfo> m_additionalContainerList;
                    bool m_additionalContainerListHasBeenSet;

                    /**
                     * 内部容器列表
                     */
                    std::vector<GroupContainerInfo> m_internalContainerList;
                    bool m_internalContainerListHasBeenSet;

                    /**
                     * service列表
                     */
                    std::vector<ServiceSetting> m_serviceSettingList;
                    bool m_serviceSettingListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERGROUPDEPLOY_H_
