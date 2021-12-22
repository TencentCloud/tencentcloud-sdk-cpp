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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageId 镜像ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetImageId() const;

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取镜像名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageName 镜像名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetImageName() const;

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取木马文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Size 木马文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetSize() const;

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取木马文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilePath 木马文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFilePath() const;

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取最近生成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime 最近生成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取病毒名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirusName 病毒名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVirusName() const;

                    /**
                     * 判断参数 VirusName 是否已赋值
                     * @return VirusName 是否已赋值
                     */
                    bool VirusNameHasBeenSet() const;

                    /**
                     * 获取风险等级 RISK_CRITICAL, RISK_HIGH, RISK_MEDIUM, RISK_LOW, RISK_NOTICE。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskLevel 风险等级 RISK_CRITICAL, RISK_HIGH, RISK_MEDIUM, RISK_LOW, RISK_NOTICE。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取容器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerName 容器名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetContainerName() const;

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取容器id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerId 容器id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetContainerId() const;

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取主机名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostName 主机名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHostName() const;

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取主机id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostId 主机id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHostId() const;

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取进程名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessName 进程名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProcessName() const;

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessPath 进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProcessPath() const;

                    /**
                     * 判断参数 ProcessPath 是否已赋值
                     * @return ProcessPath 是否已赋值
                     */
                    bool ProcessPathHasBeenSet() const;

                    /**
                     * 获取进程md5
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessMd5 进程md5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProcessMd5() const;

                    /**
                     * 判断参数 ProcessMd5 是否已赋值
                     * @return ProcessMd5 是否已赋值
                     */
                    bool ProcessMd5HasBeenSet() const;

                    /**
                     * 获取进程id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessId 进程id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetProcessId() const;

                    /**
                     * 判断参数 ProcessId 是否已赋值
                     * @return ProcessId 是否已赋值
                     */
                    bool ProcessIdHasBeenSet() const;

                    /**
                     * 获取进程参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessArgv 进程参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProcessArgv() const;

                    /**
                     * 判断参数 ProcessArgv 是否已赋值
                     * @return ProcessArgv 是否已赋值
                     */
                    bool ProcessArgvHasBeenSet() const;

                    /**
                     * 获取进程链
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessChan 进程链
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProcessChan() const;

                    /**
                     * 判断参数 ProcessChan 是否已赋值
                     * @return ProcessChan 是否已赋值
                     */
                    bool ProcessChanHasBeenSet() const;

                    /**
                     * 获取进程组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessAccountGroup 进程组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProcessAccountGroup() const;

                    /**
                     * 判断参数 ProcessAccountGroup 是否已赋值
                     * @return ProcessAccountGroup 是否已赋值
                     */
                    bool ProcessAccountGroupHasBeenSet() const;

                    /**
                     * 获取进程启动用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessStartAccount 进程启动用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProcessStartAccount() const;

                    /**
                     * 判断参数 ProcessStartAccount 是否已赋值
                     * @return ProcessStartAccount 是否已赋值
                     */
                    bool ProcessStartAccountHasBeenSet() const;

                    /**
                     * 获取进程文件权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessFileAuthority 进程文件权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProcessFileAuthority() const;

                    /**
                     * 判断参数 ProcessFileAuthority 是否已赋值
                     * @return ProcessFileAuthority 是否已赋值
                     */
                    bool ProcessFileAuthorityHasBeenSet() const;

                    /**
                     * 获取来源：0：一键扫描， 1：定时扫描 2：实时监控
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceType 来源：0：一键扫描， 1：定时扫描 2：实时监控
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSourceType() const;

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPodName() const;

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取事件描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HarmDescribe 事件描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHarmDescribe() const;

                    /**
                     * 判断参数 HarmDescribe 是否已赋值
                     * @return HarmDescribe 是否已赋值
                     */
                    bool HarmDescribeHasBeenSet() const;

                    /**
                     * 获取建议方案
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuggestScheme 建议方案
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSuggestScheme() const;

                    /**
                     * 判断参数 SuggestScheme 是否已赋值
                     * @return SuggestScheme 是否已赋值
                     */
                    bool SuggestSchemeHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMark() const;

                    /**
                     * 判断参数 Mark 是否已赋值
                     * @return Mark 是否已赋值
                     */
                    bool MarkHasBeenSet() const;

                    /**
                     * 获取风险文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileName 风险文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFileName() const;

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileMd5 文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 判断参数 FileMd5 是否已赋值
                     * @return FileMd5 是否已赋值
                     */
                    bool FileMd5HasBeenSet() const;

                    /**
                     * 获取事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventType 事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEventType() const;

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     */
                    bool EventTypeHasBeenSet() const;

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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status DEAL_NONE:文件待处理
DEAL_IGNORE:已经忽略
DEAL_ADD_WHITELIST:加白
DEAL_DEL:文件已经删除
DEAL_ISOLATE:已经隔离
DEAL_ISOLATING:隔离中
DEAL_ISOLATE_FAILED:隔离失败
DEAL_RECOVERING:恢复中
DEAL_RECOVER_FAILED: 恢复失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubStatus 失败子状态:
FILE_NOT_FOUND:文件不存在
FILE_ABNORMAL:文件异常
FILE_ABNORMAL_DEAL_RECOVER:恢复文件时，文件异常
BACKUP_FILE_NOT_FOUND:备份文件不存在
CONTAINER_NOT_FOUND_DEAL_ISOLATE:隔离时，容器不存在
CONTAINER_NOT_FOUND_DEAL_RECOVER:恢复时，容器不存在
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSubStatus() const;

                    /**
                     * 判断参数 SubStatus 是否已赋值
                     * @return SubStatus 是否已赋值
                     */
                    bool SubStatusHasBeenSet() const;

                    /**
                     * 获取内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostIP 内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHostIP() const;

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取外网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientIP 外网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClientIP() const;

                    /**
                     * 判断参数 ClientIP 是否已赋值
                     * @return ClientIP 是否已赋值
                     */
                    bool ClientIPHasBeenSet() const;

                private:

                    /**
                     * 镜像ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 镜像名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 木马文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 木马文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * 最近生成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 病毒名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_virusName;
                    bool m_virusNameHasBeenSet;

                    /**
                     * 风险等级 RISK_CRITICAL, RISK_HIGH, RISK_MEDIUM, RISK_LOW, RISK_NOTICE。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 容器名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * 容器id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * 主机名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 主机id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * 进程名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * 进程md5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processMd5;
                    bool m_processMd5HasBeenSet;

                    /**
                     * 进程id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_processId;
                    bool m_processIdHasBeenSet;

                    /**
                     * 进程参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processArgv;
                    bool m_processArgvHasBeenSet;

                    /**
                     * 进程链
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processChan;
                    bool m_processChanHasBeenSet;

                    /**
                     * 进程组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processAccountGroup;
                    bool m_processAccountGroupHasBeenSet;

                    /**
                     * 进程启动用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processStartAccount;
                    bool m_processStartAccountHasBeenSet;

                    /**
                     * 进程文件权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processFileAuthority;
                    bool m_processFileAuthorityHasBeenSet;

                    /**
                     * 来源：0：一键扫描， 1：定时扫描 2：实时监控
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 事件描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_harmDescribe;
                    bool m_harmDescribeHasBeenSet;

                    /**
                     * 建议方案
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_suggestScheme;
                    bool m_suggestSchemeHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mark;
                    bool m_markHasBeenSet;

                    /**
                     * 风险文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                    /**
                     * 事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

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
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subStatus;
                    bool m_subStatusHasBeenSet;

                    /**
                     * 内网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * 外网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientIP;
                    bool m_clientIPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSDETAILRESPONSE_H_
