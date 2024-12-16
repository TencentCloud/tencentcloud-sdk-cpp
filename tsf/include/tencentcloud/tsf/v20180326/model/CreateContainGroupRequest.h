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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CREATECONTAINGROUPREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CREATECONTAINGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ProtocolPort.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * CreateContainGroup请求参数结构体
                */
                class CreateContainGroupRequest : public AbstractModel
                {
                public:
                    CreateContainGroupRequest();
                    ~CreateContainGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分组所属应用ID
                     * @return ApplicationId 分组所属应用ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置分组所属应用ID
                     * @param _applicationId 分组所属应用ID
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
                     * 获取分组所属命名空间ID
                     * @return NamespaceId 分组所属命名空间ID
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置分组所属命名空间ID
                     * @param _namespaceId 分组所属命名空间ID
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
                     * 获取分组名称字段，长度1~60，字母或下划线开头，可包含字母数字下划线
                     * @return GroupName 分组名称字段，长度1~60，字母或下划线开头，可包含字母数字下划线
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置分组名称字段，长度1~60，字母或下划线开头，可包含字母数字下划线
                     * @param _groupName 分组名称字段，长度1~60，字母或下划线开头，可包含字母数字下划线
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
                     * 获取实例数量
                     * @return InstanceNum 实例数量
                     * 
                     */
                    int64_t GetInstanceNum() const;

                    /**
                     * 设置实例数量
                     * @param _instanceNum 实例数量
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
                     * 获取0:公网 1:集群内访问 2：NodePort
                     * @return AccessType 0:公网 1:集群内访问 2：NodePort
                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置0:公网 1:集群内访问 2：NodePort
                     * @param _accessType 0:公网 1:集群内访问 2：NodePort
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
                     * 获取数组对象，见下方定义
                     * @return ProtocolPorts 数组对象，见下方定义
                     * 
                     */
                    std::vector<ProtocolPort> GetProtocolPorts() const;

                    /**
                     * 设置数组对象，见下方定义
                     * @param _protocolPorts 数组对象，见下方定义
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
                     * 获取最大分配 CPU 核数，对应 K8S limit
                     * @return CpuLimit 最大分配 CPU 核数，对应 K8S limit
                     * 
                     */
                    std::string GetCpuLimit() const;

                    /**
                     * 设置最大分配 CPU 核数，对应 K8S limit
                     * @param _cpuLimit 最大分配 CPU 核数，对应 K8S limit
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
                     * 获取最大分配内存 MiB 数，对应 K8S limit
                     * @return MemLimit 最大分配内存 MiB 数，对应 K8S limit
                     * 
                     */
                    std::string GetMemLimit() const;

                    /**
                     * 设置最大分配内存 MiB 数，对应 K8S limit
                     * @param _memLimit 最大分配内存 MiB 数，对应 K8S limit
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
                     * 获取分组备注字段，长度应不大于200字符
                     * @return GroupComment 分组备注字段，长度应不大于200字符
                     * 
                     */
                    std::string GetGroupComment() const;

                    /**
                     * 设置分组备注字段，长度应不大于200字符
                     * @param _groupComment 分组备注字段，长度应不大于200字符
                     * 
                     */
                    void SetGroupComment(const std::string& _groupComment);

                    /**
                     * 判断参数 GroupComment 是否已赋值
                     * @return GroupComment 是否已赋值
                     * 
                     */
                    bool GroupCommentHasBeenSet() const;

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
                     * 获取滚动更新必填，更新间隔
                     * @return UpdateIvl 滚动更新必填，更新间隔
                     * 
                     */
                    int64_t GetUpdateIvl() const;

                    /**
                     * 设置滚动更新必填，更新间隔
                     * @param _updateIvl 滚动更新必填，更新间隔
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
                     * 获取初始分配的 CPU 核数，对应 K8S request
                     * @return CpuRequest 初始分配的 CPU 核数，对应 K8S request
                     * 
                     */
                    std::string GetCpuRequest() const;

                    /**
                     * 设置初始分配的 CPU 核数，对应 K8S request
                     * @param _cpuRequest 初始分配的 CPU 核数，对应 K8S request
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
                     * @return MemRequest 初始分配的内存 MiB 数，对应 K8S request
                     * 
                     */
                    std::string GetMemRequest() const;

                    /**
                     * 设置初始分配的内存 MiB 数，对应 K8S request
                     * @param _memRequest 初始分配的内存 MiB 数，对应 K8S request
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
                     * 获取部署组资源类型；
DEF — 默认资源类型；
GW — 网关资源类型；
                     * @return GroupResourceType 部署组资源类型；
DEF — 默认资源类型；
GW — 网关资源类型；
                     * 
                     */
                    std::string GetGroupResourceType() const;

                    /**
                     * 设置部署组资源类型；
DEF — 默认资源类型；
GW — 网关资源类型；
                     * @param _groupResourceType 部署组资源类型；
DEF — 默认资源类型；
GW — 网关资源类型；
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
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
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
                     * 获取agent 容器分配的 CPU 核数，对应 K8S 的 request
                     * @return AgentCpuRequest agent 容器分配的 CPU 核数，对应 K8S 的 request
                     * 
                     */
                    std::string GetAgentCpuRequest() const;

                    /**
                     * 设置agent 容器分配的 CPU 核数，对应 K8S 的 request
                     * @param _agentCpuRequest agent 容器分配的 CPU 核数，对应 K8S 的 request
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
                     * 获取agent 容器最大的 CPU 核数，对应 K8S 的 limit
                     * @return AgentCpuLimit agent 容器最大的 CPU 核数，对应 K8S 的 limit
                     * 
                     */
                    std::string GetAgentCpuLimit() const;

                    /**
                     * 设置agent 容器最大的 CPU 核数，对应 K8S 的 limit
                     * @param _agentCpuLimit agent 容器最大的 CPU 核数，对应 K8S 的 limit
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
                     * 获取agent 容器分配的内存 MiB 数，对应 K8S 的 request
                     * @return AgentMemRequest agent 容器分配的内存 MiB 数，对应 K8S 的 request
                     * 
                     */
                    std::string GetAgentMemRequest() const;

                    /**
                     * 设置agent 容器分配的内存 MiB 数，对应 K8S 的 request
                     * @param _agentMemRequest agent 容器分配的内存 MiB 数，对应 K8S 的 request
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
                     * 获取agent 容器最大的内存 MiB 数，对应 K8S 的 limit
                     * @return AgentMemLimit agent 容器最大的内存 MiB 数，对应 K8S 的 limit
                     * 
                     */
                    std::string GetAgentMemLimit() const;

                    /**
                     * 设置agent 容器最大的内存 MiB 数，对应 K8S 的 limit
                     * @param _agentMemLimit agent 容器最大的内存 MiB 数，对应 K8S 的 limit
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
                     * 获取istioproxy 容器分配的 CPU 核数，对应 K8S 的 request
                     * @return IstioCpuRequest istioproxy 容器分配的 CPU 核数，对应 K8S 的 request
                     * 
                     */
                    std::string GetIstioCpuRequest() const;

                    /**
                     * 设置istioproxy 容器分配的 CPU 核数，对应 K8S 的 request
                     * @param _istioCpuRequest istioproxy 容器分配的 CPU 核数，对应 K8S 的 request
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
                     * 获取istioproxy 容器最大的 CPU 核数，对应 K8S 的 limit
                     * @return IstioCpuLimit istioproxy 容器最大的 CPU 核数，对应 K8S 的 limit
                     * 
                     */
                    std::string GetIstioCpuLimit() const;

                    /**
                     * 设置istioproxy 容器最大的 CPU 核数，对应 K8S 的 limit
                     * @param _istioCpuLimit istioproxy 容器最大的 CPU 核数，对应 K8S 的 limit
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
                     * 获取istioproxy 容器分配的内存 MiB 数，对应 K8S 的 request
                     * @return IstioMemRequest istioproxy 容器分配的内存 MiB 数，对应 K8S 的 request
                     * 
                     */
                    std::string GetIstioMemRequest() const;

                    /**
                     * 设置istioproxy 容器分配的内存 MiB 数，对应 K8S 的 request
                     * @param _istioMemRequest istioproxy 容器分配的内存 MiB 数，对应 K8S 的 request
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
                     * 获取istioproxy 容器最大的内存 MiB 数，对应 K8S 的 limit
                     * @return IstioMemLimit istioproxy 容器最大的内存 MiB 数，对应 K8S 的 limit
                     * 
                     */
                    std::string GetIstioMemLimit() const;

                    /**
                     * 设置istioproxy 容器最大的内存 MiB 数，对应 K8S 的 limit
                     * @param _istioMemLimit istioproxy 容器最大的内存 MiB 数，对应 K8S 的 limit
                     * 
                     */
                    void SetIstioMemLimit(const std::string& _istioMemLimit);

                    /**
                     * 判断参数 IstioMemLimit 是否已赋值
                     * @return IstioMemLimit 是否已赋值
                     * 
                     */
                    bool IstioMemLimitHasBeenSet() const;

                private:

                    /**
                     * 分组所属应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 分组所属命名空间ID
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 分组名称字段，长度1~60，字母或下划线开头，可包含字母数字下划线
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 实例数量
                     */
                    int64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * 0:公网 1:集群内访问 2：NodePort
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 数组对象，见下方定义
                     */
                    std::vector<ProtocolPort> m_protocolPorts;
                    bool m_protocolPortsHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 最大分配 CPU 核数，对应 K8S limit
                     */
                    std::string m_cpuLimit;
                    bool m_cpuLimitHasBeenSet;

                    /**
                     * 最大分配内存 MiB 数，对应 K8S limit
                     */
                    std::string m_memLimit;
                    bool m_memLimitHasBeenSet;

                    /**
                     * 分组备注字段，长度应不大于200字符
                     */
                    std::string m_groupComment;
                    bool m_groupCommentHasBeenSet;

                    /**
                     * 更新方式：0:快速更新 1:滚动更新
                     */
                    int64_t m_updateType;
                    bool m_updateTypeHasBeenSet;

                    /**
                     * 滚动更新必填，更新间隔
                     */
                    int64_t m_updateIvl;
                    bool m_updateIvlHasBeenSet;

                    /**
                     * 初始分配的 CPU 核数，对应 K8S request
                     */
                    std::string m_cpuRequest;
                    bool m_cpuRequestHasBeenSet;

                    /**
                     * 初始分配的内存 MiB 数，对应 K8S request
                     */
                    std::string m_memRequest;
                    bool m_memRequestHasBeenSet;

                    /**
                     * 部署组资源类型；
DEF — 默认资源类型；
GW — 网关资源类型；
                     */
                    std::string m_groupResourceType;
                    bool m_groupResourceTypeHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * agent 容器分配的 CPU 核数，对应 K8S 的 request
                     */
                    std::string m_agentCpuRequest;
                    bool m_agentCpuRequestHasBeenSet;

                    /**
                     * agent 容器最大的 CPU 核数，对应 K8S 的 limit
                     */
                    std::string m_agentCpuLimit;
                    bool m_agentCpuLimitHasBeenSet;

                    /**
                     * agent 容器分配的内存 MiB 数，对应 K8S 的 request
                     */
                    std::string m_agentMemRequest;
                    bool m_agentMemRequestHasBeenSet;

                    /**
                     * agent 容器最大的内存 MiB 数，对应 K8S 的 limit
                     */
                    std::string m_agentMemLimit;
                    bool m_agentMemLimitHasBeenSet;

                    /**
                     * istioproxy 容器分配的 CPU 核数，对应 K8S 的 request
                     */
                    std::string m_istioCpuRequest;
                    bool m_istioCpuRequestHasBeenSet;

                    /**
                     * istioproxy 容器最大的 CPU 核数，对应 K8S 的 limit
                     */
                    std::string m_istioCpuLimit;
                    bool m_istioCpuLimitHasBeenSet;

                    /**
                     * istioproxy 容器分配的内存 MiB 数，对应 K8S 的 request
                     */
                    std::string m_istioMemRequest;
                    bool m_istioMemRequestHasBeenSet;

                    /**
                     * istioproxy 容器最大的内存 MiB 数，对应 K8S 的 limit
                     */
                    std::string m_istioMemLimit;
                    bool m_istioMemLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATECONTAINGROUPREQUEST_H_
