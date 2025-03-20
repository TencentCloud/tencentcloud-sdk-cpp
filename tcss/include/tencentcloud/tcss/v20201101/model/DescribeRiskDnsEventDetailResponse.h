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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBERISKDNSEVENTDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBERISKDNSEVENTDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeRiskDnsEventDetail返回参数结构体
                */
                class DescribeRiskDnsEventDetailResponse : public AbstractModel
                {
                public:
                    DescribeRiskDnsEventDetailResponse();
                    ~DescribeRiskDnsEventDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取事件ID
                     * @return EventID 事件ID
                     * 
                     */
                    uint64_t GetEventID() const;

                    /**
                     * 判断参数 EventID 是否已赋值
                     * @return EventID 是否已赋值
                     * 
                     */
                    bool EventIDHasBeenSet() const;

                    /**
                     * 获取事件类型，恶意域名请求：DOMAIN，恶意IP请求：IP
                     * @return EventType 事件类型，恶意域名请求：DOMAIN，恶意IP请求：IP
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取恶意请求次数
                     * @return EventCount 恶意请求次数
                     * 
                     */
                    uint64_t GetEventCount() const;

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取首次发现时间
                     * @return FoundTime 首次发现时间
                     * 
                     */
                    std::string GetFoundTime() const;

                    /**
                     * 判断参数 FoundTime 是否已赋值
                     * @return FoundTime 是否已赋值
                     * 
                     */
                    bool FoundTimeHasBeenSet() const;

                    /**
                     * 获取最近生成时间
                     * @return LatestFoundTime 最近生成时间
                     * 
                     */
                    std::string GetLatestFoundTime() const;

                    /**
                     * 判断参数 LatestFoundTime 是否已赋值
                     * @return LatestFoundTime 是否已赋值
                     * 
                     */
                    bool LatestFoundTimeHasBeenSet() const;

                    /**
                     * 获取容器ID
                     * @return ContainerID 容器ID
                     * 
                     */
                    std::string GetContainerID() const;

                    /**
                     * 判断参数 ContainerID 是否已赋值
                     * @return ContainerID 是否已赋值
                     * 
                     */
                    bool ContainerIDHasBeenSet() const;

                    /**
                     * 获取容器名称
                     * @return ContainerName 容器名称
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取隔离状态
未隔离  	NORMAL
已隔离		ISOLATED
隔离中		ISOLATING
隔离失败	ISOLATE_FAILED
解除隔离中  RESTORING
解除隔离失败 RESTORE_FAILED
                     * @return ContainerNetStatus 隔离状态
未隔离  	NORMAL
已隔离		ISOLATED
隔离中		ISOLATING
隔离失败	ISOLATE_FAILED
解除隔离中  RESTORING
解除隔离失败 RESTORE_FAILED
                     * 
                     */
                    std::string GetContainerNetStatus() const;

                    /**
                     * 判断参数 ContainerNetStatus 是否已赋值
                     * @return ContainerNetStatus 是否已赋值
                     * 
                     */
                    bool ContainerNetStatusHasBeenSet() const;

                    /**
                     * 获取容器状态
正在运行: RUNNING
暂停: PAUSED
停止: STOPPED
已经创建: CREATED
已经销毁: DESTROYED
正在重启中: RESTARTING
迁移中: REMOVING
                     * @return ContainerStatus 容器状态
正在运行: RUNNING
暂停: PAUSED
停止: STOPPED
已经创建: CREATED
已经销毁: DESTROYED
正在重启中: RESTARTING
迁移中: REMOVING
                     * 
                     */
                    std::string GetContainerStatus() const;

                    /**
                     * 判断参数 ContainerStatus 是否已赋值
                     * @return ContainerStatus 是否已赋值
                     * 
                     */
                    bool ContainerStatusHasBeenSet() const;

                    /**
                     * 获取容器子状态
"AGENT_OFFLINE"       //Agent离线
"NODE_DESTROYED"      //节点已销毁
"CONTAINER_EXITED"    //容器已退出
"CONTAINER_DESTROYED" //容器已销毁
"SHARED_HOST"         // 容器与主机共享网络
"RESOURCE_LIMIT"      //隔离操作资源超限
"UNKNOW"              // 原因未知
                     * @return ContainerNetSubStatus 容器子状态
"AGENT_OFFLINE"       //Agent离线
"NODE_DESTROYED"      //节点已销毁
"CONTAINER_EXITED"    //容器已退出
"CONTAINER_DESTROYED" //容器已销毁
"SHARED_HOST"         // 容器与主机共享网络
"RESOURCE_LIMIT"      //隔离操作资源超限
"UNKNOW"              // 原因未知
                     * 
                     */
                    std::string GetContainerNetSubStatus() const;

                    /**
                     * 判断参数 ContainerNetSubStatus 是否已赋值
                     * @return ContainerNetSubStatus 是否已赋值
                     * 
                     */
                    bool ContainerNetSubStatusHasBeenSet() const;

                    /**
                     * 获取容器隔离操作来源
                     * @return ContainerIsolateOperationSrc 容器隔离操作来源
                     * 
                     */
                    std::string GetContainerIsolateOperationSrc() const;

                    /**
                     * 判断参数 ContainerIsolateOperationSrc 是否已赋值
                     * @return ContainerIsolateOperationSrc 是否已赋值
                     * 
                     */
                    bool ContainerIsolateOperationSrcHasBeenSet() const;

                    /**
                     * 获取镜像ID
                     * @return ImageID 镜像ID
                     * 
                     */
                    std::string GetImageID() const;

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     * 
                     */
                    bool ImageIDHasBeenSet() const;

                    /**
                     * 获取镜像名称
                     * @return ImageName 镜像名称
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取主机名称
                     * @return HostName 主机名称
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取内网IP
                     * @return HostIP 内网IP
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     * 
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取外网IP
                     * @return PublicIP 外网IP
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     * 
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取节点名称
                     * @return PodName 节点名称
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取事件描述
                     * @return Description 事件描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取解决方案
                     * @return Solution 解决方案
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     * 
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取参考链接
                     * @return Reference 参考链接
                     * 
                     */
                    std::vector<std::string> GetReference() const;

                    /**
                     * 判断参数 Reference 是否已赋值
                     * @return Reference 是否已赋值
                     * 
                     */
                    bool ReferenceHasBeenSet() const;

                    /**
                     * 获取恶意域名或IP
                     * @return Address 恶意域名或IP
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取恶意IP所属城市
                     * @return City 恶意IP所属城市
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取命中规则类型
SYSTEM：系统规则
 USER：用户自定义
                     * @return MatchRuleType 命中规则类型
SYSTEM：系统规则
 USER：用户自定义
                     * 
                     */
                    std::string GetMatchRuleType() const;

                    /**
                     * 判断参数 MatchRuleType 是否已赋值
                     * @return MatchRuleType 是否已赋值
                     * 
                     */
                    bool MatchRuleTypeHasBeenSet() const;

                    /**
                     * 获取标签特征
                     * @return FeatureLabel 标签特征
                     * 
                     */
                    std::string GetFeatureLabel() const;

                    /**
                     * 判断参数 FeatureLabel 是否已赋值
                     * @return FeatureLabel 是否已赋值
                     * 
                     */
                    bool FeatureLabelHasBeenSet() const;

                    /**
                     * 获取进程权限
                     * @return ProcessAuthority 进程权限
                     * 
                     */
                    std::string GetProcessAuthority() const;

                    /**
                     * 判断参数 ProcessAuthority 是否已赋值
                     * @return ProcessAuthority 是否已赋值
                     * 
                     */
                    bool ProcessAuthorityHasBeenSet() const;

                    /**
                     * 获取进程md5
                     * @return ProcessMd5 进程md5
                     * 
                     */
                    std::string GetProcessMd5() const;

                    /**
                     * 判断参数 ProcessMd5 是否已赋值
                     * @return ProcessMd5 是否已赋值
                     * 
                     */
                    bool ProcessMd5HasBeenSet() const;

                    /**
                     * 获取进程启动用户
                     * @return ProcessStartUser 进程启动用户
                     * 
                     */
                    std::string GetProcessStartUser() const;

                    /**
                     * 判断参数 ProcessStartUser 是否已赋值
                     * @return ProcessStartUser 是否已赋值
                     * 
                     */
                    bool ProcessStartUserHasBeenSet() const;

                    /**
                     * 获取进程用户组
                     * @return ProcessUserGroup 进程用户组
                     * 
                     */
                    std::string GetProcessUserGroup() const;

                    /**
                     * 判断参数 ProcessUserGroup 是否已赋值
                     * @return ProcessUserGroup 是否已赋值
                     * 
                     */
                    bool ProcessUserGroupHasBeenSet() const;

                    /**
                     * 获取进程路径
                     * @return ProcessPath 进程路径
                     * 
                     */
                    std::string GetProcessPath() const;

                    /**
                     * 判断参数 ProcessPath 是否已赋值
                     * @return ProcessPath 是否已赋值
                     * 
                     */
                    bool ProcessPathHasBeenSet() const;

                    /**
                     * 获取进程树
                     * @return ProcessTree 进程树
                     * 
                     */
                    std::string GetProcessTree() const;

                    /**
                     * 判断参数 ProcessTree 是否已赋值
                     * @return ProcessTree 是否已赋值
                     * 
                     */
                    bool ProcessTreeHasBeenSet() const;

                    /**
                     * 获取进程命令行参数
                     * @return ProcessParam 进程命令行参数
                     * 
                     */
                    std::string GetProcessParam() const;

                    /**
                     * 判断参数 ProcessParam 是否已赋值
                     * @return ProcessParam 是否已赋值
                     * 
                     */
                    bool ProcessParamHasBeenSet() const;

                    /**
                     * 获取父进程启动用户
                     * @return ParentProcessStartUser 父进程启动用户
                     * 
                     */
                    std::string GetParentProcessStartUser() const;

                    /**
                     * 判断参数 ParentProcessStartUser 是否已赋值
                     * @return ParentProcessStartUser 是否已赋值
                     * 
                     */
                    bool ParentProcessStartUserHasBeenSet() const;

                    /**
                     * 获取父进程用户组
                     * @return ParentProcessUserGroup 父进程用户组
                     * 
                     */
                    std::string GetParentProcessUserGroup() const;

                    /**
                     * 判断参数 ParentProcessUserGroup 是否已赋值
                     * @return ParentProcessUserGroup 是否已赋值
                     * 
                     */
                    bool ParentProcessUserGroupHasBeenSet() const;

                    /**
                     * 获取父进程路径
                     * @return ParentProcessPath 父进程路径
                     * 
                     */
                    std::string GetParentProcessPath() const;

                    /**
                     * 判断参数 ParentProcessPath 是否已赋值
                     * @return ParentProcessPath 是否已赋值
                     * 
                     */
                    bool ParentProcessPathHasBeenSet() const;

                    /**
                     * 获取父进程命令行参数
                     * @return ParentProcessParam 父进程命令行参数
                     * 
                     */
                    std::string GetParentProcessParam() const;

                    /**
                     * 判断参数 ParentProcessParam 是否已赋值
                     * @return ParentProcessParam 是否已赋值
                     * 
                     */
                    bool ParentProcessParamHasBeenSet() const;

                    /**
                     * 获取祖先进程启动用户
                     * @return AncestorProcessStartUser 祖先进程启动用户
                     * 
                     */
                    std::string GetAncestorProcessStartUser() const;

                    /**
                     * 判断参数 AncestorProcessStartUser 是否已赋值
                     * @return AncestorProcessStartUser 是否已赋值
                     * 
                     */
                    bool AncestorProcessStartUserHasBeenSet() const;

                    /**
                     * 获取祖先进程用户组
                     * @return AncestorProcessUserGroup 祖先进程用户组
                     * 
                     */
                    std::string GetAncestorProcessUserGroup() const;

                    /**
                     * 判断参数 AncestorProcessUserGroup 是否已赋值
                     * @return AncestorProcessUserGroup 是否已赋值
                     * 
                     */
                    bool AncestorProcessUserGroupHasBeenSet() const;

                    /**
                     * 获取祖先进程路径
                     * @return AncestorProcessPath 祖先进程路径
                     * 
                     */
                    std::string GetAncestorProcessPath() const;

                    /**
                     * 判断参数 AncestorProcessPath 是否已赋值
                     * @return AncestorProcessPath 是否已赋值
                     * 
                     */
                    bool AncestorProcessPathHasBeenSet() const;

                    /**
                     * 获取祖先进程命令行参数
                     * @return AncestorProcessParam 祖先进程命令行参数
                     * 
                     */
                    std::string GetAncestorProcessParam() const;

                    /**
                     * 判断参数 AncestorProcessParam 是否已赋值
                     * @return AncestorProcessParam 是否已赋值
                     * 
                     */
                    bool AncestorProcessParamHasBeenSet() const;

                    /**
                     * 获取主机ID
                     * @return HostID 主机ID
                     * 
                     */
                    std::string GetHostID() const;

                    /**
                     * 判断参数 HostID 是否已赋值
                     * @return HostID 是否已赋值
                     * 
                     */
                    bool HostIDHasBeenSet() const;

                    /**
                     * 获取事件状态
EVENT_UNDEAL： 待处理
EVENT_DEALED：已处理
EVENT_IGNORE： 已忽略
EVENT_ADD_WHITE：已加白
                     * @return EventStatus 事件状态
EVENT_UNDEAL： 待处理
EVENT_DEALED：已处理
EVENT_IGNORE： 已忽略
EVENT_ADD_WHITE：已加白
                     * 
                     */
                    std::string GetEventStatus() const;

                    /**
                     * 判断参数 EventStatus 是否已赋值
                     * @return EventStatus 是否已赋值
                     * 
                     */
                    bool EventStatusHasBeenSet() const;

                    /**
                     * 获取操作时间
                     * @return OperationTime 操作时间
                     * 
                     */
                    std::string GetOperationTime() const;

                    /**
                     * 判断参数 OperationTime 是否已赋值
                     * @return OperationTime 是否已赋值
                     * 
                     */
                    bool OperationTimeHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取节点类型
                     * @return NodeType 节点类型
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取节点名称
                     * @return NodeName 节点名称
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取节点子网ID
                     * @return NodeSubNetID 节点子网ID
                     * 
                     */
                    std::string GetNodeSubNetID() const;

                    /**
                     * 判断参数 NodeSubNetID 是否已赋值
                     * @return NodeSubNetID 是否已赋值
                     * 
                     */
                    bool NodeSubNetIDHasBeenSet() const;

                    /**
                     * 获取节点子网名称
                     * @return NodeSubNetName 节点子网名称
                     * 
                     */
                    std::string GetNodeSubNetName() const;

                    /**
                     * 判断参数 NodeSubNetName 是否已赋值
                     * @return NodeSubNetName 是否已赋值
                     * 
                     */
                    bool NodeSubNetNameHasBeenSet() const;

                    /**
                     * 获取节点子网网段
                     * @return NodeSubNetCIDR 节点子网网段
                     * 
                     */
                    std::string GetNodeSubNetCIDR() const;

                    /**
                     * 判断参数 NodeSubNetCIDR 是否已赋值
                     * @return NodeSubNetCIDR 是否已赋值
                     * 
                     */
                    bool NodeSubNetCIDRHasBeenSet() const;

                    /**
                     * 获取集群ID
                     * @return ClusterID 集群ID
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取podip
                     * @return PodIP podip
                     * 
                     */
                    std::string GetPodIP() const;

                    /**
                     * 判断参数 PodIP 是否已赋值
                     * @return PodIP 是否已赋值
                     * 
                     */
                    bool PodIPHasBeenSet() const;

                    /**
                     * 获取pod状态
                     * @return PodStatus pod状态
                     * 
                     */
                    std::string GetPodStatus() const;

                    /**
                     * 判断参数 PodStatus 是否已赋值
                     * @return PodStatus 是否已赋值
                     * 
                     */
                    bool PodStatusHasBeenSet() const;

                    /**
                     * 获取节点唯一id
                     * @return NodeUniqueID 节点唯一id
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 判断参数 NodeUniqueID 是否已赋值
                     * @return NodeUniqueID 是否已赋值
                     * 
                     */
                    bool NodeUniqueIDHasBeenSet() const;

                    /**
                     * 获取节点ID名称
                     * @return NodeID 节点ID名称
                     * 
                     */
                    std::string GetNodeID() const;

                    /**
                     * 判断参数 NodeID 是否已赋值
                     * @return NodeID 是否已赋值
                     * 
                     */
                    bool NodeIDHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Namespace
                     * @return Namespace Namespace
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取工作负载类型
                     * @return WorkloadType 工作负载类型
                     * 
                     */
                    std::string GetWorkloadType() const;

                    /**
                     * 判断参数 WorkloadType 是否已赋值
                     * @return WorkloadType 是否已赋值
                     * 
                     */
                    bool WorkloadTypeHasBeenSet() const;

                private:

                    /**
                     * 事件ID
                     */
                    uint64_t m_eventID;
                    bool m_eventIDHasBeenSet;

                    /**
                     * 事件类型，恶意域名请求：DOMAIN，恶意IP请求：IP
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 恶意请求次数
                     */
                    uint64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * 首次发现时间
                     */
                    std::string m_foundTime;
                    bool m_foundTimeHasBeenSet;

                    /**
                     * 最近生成时间
                     */
                    std::string m_latestFoundTime;
                    bool m_latestFoundTimeHasBeenSet;

                    /**
                     * 容器ID
                     */
                    std::string m_containerID;
                    bool m_containerIDHasBeenSet;

                    /**
                     * 容器名称
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * 隔离状态
未隔离  	NORMAL
已隔离		ISOLATED
隔离中		ISOLATING
隔离失败	ISOLATE_FAILED
解除隔离中  RESTORING
解除隔离失败 RESTORE_FAILED
                     */
                    std::string m_containerNetStatus;
                    bool m_containerNetStatusHasBeenSet;

                    /**
                     * 容器状态
正在运行: RUNNING
暂停: PAUSED
停止: STOPPED
已经创建: CREATED
已经销毁: DESTROYED
正在重启中: RESTARTING
迁移中: REMOVING
                     */
                    std::string m_containerStatus;
                    bool m_containerStatusHasBeenSet;

                    /**
                     * 容器子状态
"AGENT_OFFLINE"       //Agent离线
"NODE_DESTROYED"      //节点已销毁
"CONTAINER_EXITED"    //容器已退出
"CONTAINER_DESTROYED" //容器已销毁
"SHARED_HOST"         // 容器与主机共享网络
"RESOURCE_LIMIT"      //隔离操作资源超限
"UNKNOW"              // 原因未知
                     */
                    std::string m_containerNetSubStatus;
                    bool m_containerNetSubStatusHasBeenSet;

                    /**
                     * 容器隔离操作来源
                     */
                    std::string m_containerIsolateOperationSrc;
                    bool m_containerIsolateOperationSrcHasBeenSet;

                    /**
                     * 镜像ID
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * 镜像名称
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 内网IP
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * 外网IP
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * 节点名称
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * 事件描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 解决方案
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * 参考链接
                     */
                    std::vector<std::string> m_reference;
                    bool m_referenceHasBeenSet;

                    /**
                     * 恶意域名或IP
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 恶意IP所属城市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 命中规则类型
SYSTEM：系统规则
 USER：用户自定义
                     */
                    std::string m_matchRuleType;
                    bool m_matchRuleTypeHasBeenSet;

                    /**
                     * 标签特征
                     */
                    std::string m_featureLabel;
                    bool m_featureLabelHasBeenSet;

                    /**
                     * 进程权限
                     */
                    std::string m_processAuthority;
                    bool m_processAuthorityHasBeenSet;

                    /**
                     * 进程md5
                     */
                    std::string m_processMd5;
                    bool m_processMd5HasBeenSet;

                    /**
                     * 进程启动用户
                     */
                    std::string m_processStartUser;
                    bool m_processStartUserHasBeenSet;

                    /**
                     * 进程用户组
                     */
                    std::string m_processUserGroup;
                    bool m_processUserGroupHasBeenSet;

                    /**
                     * 进程路径
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * 进程树
                     */
                    std::string m_processTree;
                    bool m_processTreeHasBeenSet;

                    /**
                     * 进程命令行参数
                     */
                    std::string m_processParam;
                    bool m_processParamHasBeenSet;

                    /**
                     * 父进程启动用户
                     */
                    std::string m_parentProcessStartUser;
                    bool m_parentProcessStartUserHasBeenSet;

                    /**
                     * 父进程用户组
                     */
                    std::string m_parentProcessUserGroup;
                    bool m_parentProcessUserGroupHasBeenSet;

                    /**
                     * 父进程路径
                     */
                    std::string m_parentProcessPath;
                    bool m_parentProcessPathHasBeenSet;

                    /**
                     * 父进程命令行参数
                     */
                    std::string m_parentProcessParam;
                    bool m_parentProcessParamHasBeenSet;

                    /**
                     * 祖先进程启动用户
                     */
                    std::string m_ancestorProcessStartUser;
                    bool m_ancestorProcessStartUserHasBeenSet;

                    /**
                     * 祖先进程用户组
                     */
                    std::string m_ancestorProcessUserGroup;
                    bool m_ancestorProcessUserGroupHasBeenSet;

                    /**
                     * 祖先进程路径
                     */
                    std::string m_ancestorProcessPath;
                    bool m_ancestorProcessPathHasBeenSet;

                    /**
                     * 祖先进程命令行参数
                     */
                    std::string m_ancestorProcessParam;
                    bool m_ancestorProcessParamHasBeenSet;

                    /**
                     * 主机ID
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * 事件状态
EVENT_UNDEAL： 待处理
EVENT_DEALED：已处理
EVENT_IGNORE： 已忽略
EVENT_ADD_WHITE：已加白
                     */
                    std::string m_eventStatus;
                    bool m_eventStatusHasBeenSet;

                    /**
                     * 操作时间
                     */
                    std::string m_operationTime;
                    bool m_operationTimeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 节点类型
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 节点名称
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 节点子网ID
                     */
                    std::string m_nodeSubNetID;
                    bool m_nodeSubNetIDHasBeenSet;

                    /**
                     * 节点子网名称
                     */
                    std::string m_nodeSubNetName;
                    bool m_nodeSubNetNameHasBeenSet;

                    /**
                     * 节点子网网段
                     */
                    std::string m_nodeSubNetCIDR;
                    bool m_nodeSubNetCIDRHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * podip
                     */
                    std::string m_podIP;
                    bool m_podIPHasBeenSet;

                    /**
                     * pod状态
                     */
                    std::string m_podStatus;
                    bool m_podStatusHasBeenSet;

                    /**
                     * 节点唯一id
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                    /**
                     * 节点ID名称
                     */
                    std::string m_nodeID;
                    bool m_nodeIDHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 工作负载类型
                     */
                    std::string m_workloadType;
                    bool m_workloadTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBERISKDNSEVENTDETAILRESPONSE_H_
