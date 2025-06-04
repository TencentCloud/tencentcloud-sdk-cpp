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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSDETAILRESPONSE_H_

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
                * DescribeVirusDetail返回参数结构体
                */
                class DescribeVirusDetailResponse : public AbstractModel
                {
                public:
                    DescribeVirusDetailResponse();
                    ~DescribeVirusDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像ID
                     * @return ImageId 镜像ID
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取木马文件大小
                     * @return Size 木马文件大小
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取木马文件路径
                     * @return FilePath 木马文件路径
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取最近生成时间
                     * @return ModifyTime 最近生成时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取病毒名称
                     * @return VirusName 病毒名称
                     * 
                     */
                    std::string GetVirusName() const;

                    /**
                     * 判断参数 VirusName 是否已赋值
                     * @return VirusName 是否已赋值
                     * 
                     */
                    bool VirusNameHasBeenSet() const;

                    /**
                     * 获取风险等级 RISK_CRITICAL, RISK_HIGH, RISK_MEDIUM, RISK_LOW, RISK_NOTICE。
                     * @return RiskLevel 风险等级 RISK_CRITICAL, RISK_HIGH, RISK_MEDIUM, RISK_LOW, RISK_NOTICE。
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

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
                     * 获取容器id
                     * @return ContainerId 容器id
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

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
                     * 获取主机id
                     * @return HostId 主机id
                     * 
                     */
                    std::string GetHostId() const;

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     * 
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取进程名称
                     * @return ProcessName 进程名称
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

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
                     * 获取进程id
                     * @return ProcessId 进程id
                     * 
                     */
                    uint64_t GetProcessId() const;

                    /**
                     * 判断参数 ProcessId 是否已赋值
                     * @return ProcessId 是否已赋值
                     * 
                     */
                    bool ProcessIdHasBeenSet() const;

                    /**
                     * 获取进程参数
                     * @return ProcessArgv 进程参数
                     * 
                     */
                    std::string GetProcessArgv() const;

                    /**
                     * 判断参数 ProcessArgv 是否已赋值
                     * @return ProcessArgv 是否已赋值
                     * 
                     */
                    bool ProcessArgvHasBeenSet() const;

                    /**
                     * 获取进程链
                     * @return ProcessChan 进程链
                     * 
                     */
                    std::string GetProcessChan() const;

                    /**
                     * 判断参数 ProcessChan 是否已赋值
                     * @return ProcessChan 是否已赋值
                     * 
                     */
                    bool ProcessChanHasBeenSet() const;

                    /**
                     * 获取进程组
                     * @return ProcessAccountGroup 进程组
                     * 
                     */
                    std::string GetProcessAccountGroup() const;

                    /**
                     * 判断参数 ProcessAccountGroup 是否已赋值
                     * @return ProcessAccountGroup 是否已赋值
                     * 
                     */
                    bool ProcessAccountGroupHasBeenSet() const;

                    /**
                     * 获取进程启动用户
                     * @return ProcessStartAccount 进程启动用户
                     * 
                     */
                    std::string GetProcessStartAccount() const;

                    /**
                     * 判断参数 ProcessStartAccount 是否已赋值
                     * @return ProcessStartAccount 是否已赋值
                     * 
                     */
                    bool ProcessStartAccountHasBeenSet() const;

                    /**
                     * 获取进程文件权限
                     * @return ProcessFileAuthority 进程文件权限
                     * 
                     */
                    std::string GetProcessFileAuthority() const;

                    /**
                     * 判断参数 ProcessFileAuthority 是否已赋值
                     * @return ProcessFileAuthority 是否已赋值
                     * 
                     */
                    bool ProcessFileAuthorityHasBeenSet() const;

                    /**
                     * 获取来源：0：一键扫描， 1：定时扫描 2：实时监控
                     * @return SourceType 来源：0：一键扫描， 1：定时扫描 2：实时监控
                     * 
                     */
                    int64_t GetSourceType() const;

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取事件描述
                     * @return HarmDescribe 事件描述
                     * 
                     */
                    std::string GetHarmDescribe() const;

                    /**
                     * 判断参数 HarmDescribe 是否已赋值
                     * @return HarmDescribe 是否已赋值
                     * 
                     */
                    bool HarmDescribeHasBeenSet() const;

                    /**
                     * 获取建议方案
                     * @return SuggestScheme 建议方案
                     * 
                     */
                    std::string GetSuggestScheme() const;

                    /**
                     * 判断参数 SuggestScheme 是否已赋值
                     * @return SuggestScheme 是否已赋值
                     * 
                     */
                    bool SuggestSchemeHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Mark 备注
                     * 
                     */
                    std::string GetMark() const;

                    /**
                     * 判断参数 Mark 是否已赋值
                     * @return Mark 是否已赋值
                     * 
                     */
                    bool MarkHasBeenSet() const;

                    /**
                     * 获取风险文件名称
                     * @return FileName 风险文件名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取文件MD5
                     * @return FileMd5 文件MD5
                     * 
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 判断参数 FileMd5 是否已赋值
                     * @return FileMd5 是否已赋值
                     * 
                     */
                    bool FileMd5HasBeenSet() const;

                    /**
                     * 获取事件类型
                     * @return EventType 事件类型
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
                     * 获取集群名称
                     * @return PodName 集群名称
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
                     * 获取DEAL_NONE:文件待处理
DEAL_IGNORE:已经忽略
DEAL_ADD_WHITELIST:加白
DEAL_DEL:文件已经删除
DEAL_ISOLATE:已经隔离
DEAL_ISOLATING:隔离中
DEAL_ISOLATE_FAILED:隔离失败
DEAL_RECOVERING:恢复中
DEAL_RECOVER_FAILED: 恢复失败
                     * @return Status DEAL_NONE:文件待处理
DEAL_IGNORE:已经忽略
DEAL_ADD_WHITELIST:加白
DEAL_DEL:文件已经删除
DEAL_ISOLATE:已经隔离
DEAL_ISOLATING:隔离中
DEAL_ISOLATE_FAILED:隔离失败
DEAL_RECOVERING:恢复中
DEAL_RECOVER_FAILED: 恢复失败
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取失败子状态:
FILE_NOT_FOUND:文件不存在
FILE_ABNORMAL:文件异常
FILE_ABNORMAL_DEAL_RECOVER:恢复文件时，文件异常
BACKUP_FILE_NOT_FOUND:备份文件不存在
CONTAINER_NOT_FOUND_DEAL_ISOLATE:隔离时，容器不存在
CONTAINER_NOT_FOUND_DEAL_RECOVER:恢复时，容器不存在
                     * @return SubStatus 失败子状态:
FILE_NOT_FOUND:文件不存在
FILE_ABNORMAL:文件异常
FILE_ABNORMAL_DEAL_RECOVER:恢复文件时，文件异常
BACKUP_FILE_NOT_FOUND:备份文件不存在
CONTAINER_NOT_FOUND_DEAL_ISOLATE:隔离时，容器不存在
CONTAINER_NOT_FOUND_DEAL_RECOVER:恢复时，容器不存在
                     * 
                     */
                    std::string GetSubStatus() const;

                    /**
                     * 判断参数 SubStatus 是否已赋值
                     * @return SubStatus 是否已赋值
                     * 
                     */
                    bool SubStatusHasBeenSet() const;

                    /**
                     * 获取内网ip
                     * @return HostIP 内网ip
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
                     * 获取外网ip
                     * @return ClientIP 外网ip
                     * 
                     */
                    std::string GetClientIP() const;

                    /**
                     * 判断参数 ClientIP 是否已赋值
                     * @return ClientIP 是否已赋值
                     * 
                     */
                    bool ClientIPHasBeenSet() const;

                    /**
                     * 获取父进程启动用户
                     * @return PProcessStartUser 父进程启动用户
                     * 
                     */
                    std::string GetPProcessStartUser() const;

                    /**
                     * 判断参数 PProcessStartUser 是否已赋值
                     * @return PProcessStartUser 是否已赋值
                     * 
                     */
                    bool PProcessStartUserHasBeenSet() const;

                    /**
                     * 获取父进程用户组
                     * @return PProcessUserGroup 父进程用户组
                     * 
                     */
                    std::string GetPProcessUserGroup() const;

                    /**
                     * 判断参数 PProcessUserGroup 是否已赋值
                     * @return PProcessUserGroup 是否已赋值
                     * 
                     */
                    bool PProcessUserGroupHasBeenSet() const;

                    /**
                     * 获取父进程路径
                     * @return PProcessPath 父进程路径
                     * 
                     */
                    std::string GetPProcessPath() const;

                    /**
                     * 判断参数 PProcessPath 是否已赋值
                     * @return PProcessPath 是否已赋值
                     * 
                     */
                    bool PProcessPathHasBeenSet() const;

                    /**
                     * 获取父进程命令行参数
                     * @return PProcessParam 父进程命令行参数
                     * 
                     */
                    std::string GetPProcessParam() const;

                    /**
                     * 判断参数 PProcessParam 是否已赋值
                     * @return PProcessParam 是否已赋值
                     * 
                     */
                    bool PProcessParamHasBeenSet() const;

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
                     * 获取事件最后一次处理的时间
                     * @return OperationTime 事件最后一次处理的时间
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
                     * 获取容器隔离状态
                     * @return ContainerNetStatus 容器隔离状态
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
                     * 获取容器隔离子状态
                     * @return ContainerNetSubStatus 容器隔离子状态
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
                     * 获取检测平台
1: 云查杀引擎
2: tav
3: binaryAi
4: 异常行为
5: 威胁情报
                     * @return CheckPlatform 检测平台
1: 云查杀引擎
2: tav
3: binaryAi
4: 异常行为
5: 威胁情报
                     * 
                     */
                    std::vector<std::string> GetCheckPlatform() const;

                    /**
                     * 判断参数 CheckPlatform 是否已赋值
                     * @return CheckPlatform 是否已赋值
                     * 
                     */
                    bool CheckPlatformHasBeenSet() const;

                    /**
                     * 获取文件访问时间
                     * @return FileAccessTime 文件访问时间
                     * 
                     */
                    std::string GetFileAccessTime() const;

                    /**
                     * 判断参数 FileAccessTime 是否已赋值
                     * @return FileAccessTime 是否已赋值
                     * 
                     */
                    bool FileAccessTimeHasBeenSet() const;

                    /**
                     * 获取文件修改时间
                     * @return FileModifyTime 文件修改时间
                     * 
                     */
                    std::string GetFileModifyTime() const;

                    /**
                     * 判断参数 FileModifyTime 是否已赋值
                     * @return FileModifyTime 是否已赋值
                     * 
                     */
                    bool FileModifyTimeHasBeenSet() const;

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
                     * 获取集群id
                     * @return ClusterID 集群id
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
                     * 获取pod ip
                     * @return PodIP pod ip
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
                     * 获取节点唯一ID
                     * @return NodeUniqueID 节点唯一ID
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
                     * 获取节点类型：NORMAL普通节点、SUPER超级节点
                     * @return NodeType 节点类型：NORMAL普通节点、SUPER超级节点
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
                     * 获取节点ID
                     * @return NodeID 节点ID
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

                    /**
                     * 获取容器状态
                     * @return ContainerStatus 容器状态
                     * 
                     */
                    std::string GetContainerStatus() const;

                    /**
                     * 判断参数 ContainerStatus 是否已赋值
                     * @return ContainerStatus 是否已赋值
                     * 
                     */
                    bool ContainerStatusHasBeenSet() const;

                private:

                    /**
                     * 镜像ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 镜像名称
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 木马文件大小
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 木马文件路径
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * 最近生成时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 病毒名称
                     */
                    std::string m_virusName;
                    bool m_virusNameHasBeenSet;

                    /**
                     * 风险等级 RISK_CRITICAL, RISK_HIGH, RISK_MEDIUM, RISK_LOW, RISK_NOTICE。
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 容器名称
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * 容器id
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 主机id
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * 进程名称
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 进程路径
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * 进程md5
                     */
                    std::string m_processMd5;
                    bool m_processMd5HasBeenSet;

                    /**
                     * 进程id
                     */
                    uint64_t m_processId;
                    bool m_processIdHasBeenSet;

                    /**
                     * 进程参数
                     */
                    std::string m_processArgv;
                    bool m_processArgvHasBeenSet;

                    /**
                     * 进程链
                     */
                    std::string m_processChan;
                    bool m_processChanHasBeenSet;

                    /**
                     * 进程组
                     */
                    std::string m_processAccountGroup;
                    bool m_processAccountGroupHasBeenSet;

                    /**
                     * 进程启动用户
                     */
                    std::string m_processStartAccount;
                    bool m_processStartAccountHasBeenSet;

                    /**
                     * 进程文件权限
                     */
                    std::string m_processFileAuthority;
                    bool m_processFileAuthorityHasBeenSet;

                    /**
                     * 来源：0：一键扫描， 1：定时扫描 2：实时监控
                     */
                    int64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 事件描述
                     */
                    std::string m_harmDescribe;
                    bool m_harmDescribeHasBeenSet;

                    /**
                     * 建议方案
                     */
                    std::string m_suggestScheme;
                    bool m_suggestSchemeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_mark;
                    bool m_markHasBeenSet;

                    /**
                     * 风险文件名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件MD5
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                    /**
                     * 事件类型
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * DEAL_NONE:文件待处理
DEAL_IGNORE:已经忽略
DEAL_ADD_WHITELIST:加白
DEAL_DEL:文件已经删除
DEAL_ISOLATE:已经隔离
DEAL_ISOLATING:隔离中
DEAL_ISOLATE_FAILED:隔离失败
DEAL_RECOVERING:恢复中
DEAL_RECOVER_FAILED: 恢复失败
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 失败子状态:
FILE_NOT_FOUND:文件不存在
FILE_ABNORMAL:文件异常
FILE_ABNORMAL_DEAL_RECOVER:恢复文件时，文件异常
BACKUP_FILE_NOT_FOUND:备份文件不存在
CONTAINER_NOT_FOUND_DEAL_ISOLATE:隔离时，容器不存在
CONTAINER_NOT_FOUND_DEAL_RECOVER:恢复时，容器不存在
                     */
                    std::string m_subStatus;
                    bool m_subStatusHasBeenSet;

                    /**
                     * 内网ip
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * 外网ip
                     */
                    std::string m_clientIP;
                    bool m_clientIPHasBeenSet;

                    /**
                     * 父进程启动用户
                     */
                    std::string m_pProcessStartUser;
                    bool m_pProcessStartUserHasBeenSet;

                    /**
                     * 父进程用户组
                     */
                    std::string m_pProcessUserGroup;
                    bool m_pProcessUserGroupHasBeenSet;

                    /**
                     * 父进程路径
                     */
                    std::string m_pProcessPath;
                    bool m_pProcessPathHasBeenSet;

                    /**
                     * 父进程命令行参数
                     */
                    std::string m_pProcessParam;
                    bool m_pProcessParamHasBeenSet;

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
                     * 事件最后一次处理的时间
                     */
                    std::string m_operationTime;
                    bool m_operationTimeHasBeenSet;

                    /**
                     * 容器隔离状态
                     */
                    std::string m_containerNetStatus;
                    bool m_containerNetStatusHasBeenSet;

                    /**
                     * 容器隔离子状态
                     */
                    std::string m_containerNetSubStatus;
                    bool m_containerNetSubStatusHasBeenSet;

                    /**
                     * 容器隔离操作来源
                     */
                    std::string m_containerIsolateOperationSrc;
                    bool m_containerIsolateOperationSrcHasBeenSet;

                    /**
                     * 检测平台
1: 云查杀引擎
2: tav
3: binaryAi
4: 异常行为
5: 威胁情报
                     */
                    std::vector<std::string> m_checkPlatform;
                    bool m_checkPlatformHasBeenSet;

                    /**
                     * 文件访问时间
                     */
                    std::string m_fileAccessTime;
                    bool m_fileAccessTimeHasBeenSet;

                    /**
                     * 文件修改时间
                     */
                    std::string m_fileModifyTime;
                    bool m_fileModifyTimeHasBeenSet;

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
                     * 集群id
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * pod ip
                     */
                    std::string m_podIP;
                    bool m_podIPHasBeenSet;

                    /**
                     * pod状态
                     */
                    std::string m_podStatus;
                    bool m_podStatusHasBeenSet;

                    /**
                     * 节点唯一ID
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                    /**
                     * 节点类型：NORMAL普通节点、SUPER超级节点
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 节点ID
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

                    /**
                     * 容器状态
                     */
                    std::string m_containerStatus;
                    bool m_containerStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSDETAILRESPONSE_H_
