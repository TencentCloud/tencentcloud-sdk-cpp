/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBEBACKUPPLANDETAILRESPONSE_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBEBACKUPPLANDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbs/v20211108/model/Endpoint.h>
#include <tencentcloud/dbs/v20211108/model/BackupObject.h>
#include <tencentcloud/dbs/v20211108/model/BackupStrategyItem.h>
#include <tencentcloud/dbs/v20211108/model/BackupProgress.h>
#include <tencentcloud/dbs/v20211108/model/ErrorInfo.h>
#include <tencentcloud/dbs/v20211108/model/TagInfo.h>
#include <tencentcloud/dbs/v20211108/model/BackupPlanPayInfo.h>
#include <tencentcloud/dbs/v20211108/model/RestoreRange.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * DescribeBackupPlanDetail返回参数结构体
                */
                class DescribeBackupPlanDetailResponse : public AbstractModel
                {
                public:
                    DescribeBackupPlanDetailResponse();
                    ~DescribeBackupPlanDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>地域。</p>
                     * @return Region <p>地域。</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>备份计划 ID。</p>
                     * @return BackupPlanId <p>备份计划 ID。</p>
                     * 
                     */
                    std::string GetBackupPlanId() const;

                    /**
                     * 判断参数 BackupPlanId 是否已赋值
                     * @return BackupPlanId 是否已赋值
                     * 
                     */
                    bool BackupPlanIdHasBeenSet() const;

                    /**
                     * 获取<p>备份计划名称。</p>
                     * @return BackupPlanName <p>备份计划名称。</p>
                     * 
                     */
                    std::string GetBackupPlanName() const;

                    /**
                     * 判断参数 BackupPlanName 是否已赋值
                     * @return BackupPlanName 是否已赋值
                     * 
                     */
                    bool BackupPlanNameHasBeenSet() const;

                    /**
                     * 获取<p>备份计划状态。取值：</p><ul><li>creating：创建中</li><li>notStarted：未启动</li><li>notConfigured：未配置</li><li>checkNotPass：校验未通过</li><li>checkPass：校验通过</li><li>checking：校验中</li><li>readyRun：待运行</li><li>running：运行中</li><li>fullBacking：全量备份中</li><li>paused：已暂停</li><li>isolating：隔离中</li><li>isolated：已隔离</li><li>offlining：下线中</li><li>offlined：已下线</li><li>completed：已完成</li></ul>
                     * @return Status <p>备份计划状态。取值：</p><ul><li>creating：创建中</li><li>notStarted：未启动</li><li>notConfigured：未配置</li><li>checkNotPass：校验未通过</li><li>checkPass：校验通过</li><li>checking：校验中</li><li>readyRun：待运行</li><li>running：运行中</li><li>fullBacking：全量备份中</li><li>paused：已暂停</li><li>isolating：隔离中</li><li>isolated：已隔离</li><li>offlining：下线中</li><li>offlined：已下线</li><li>completed：已完成</li></ul>
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
                     * 获取<p>源库连接信息列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceEndPoint <p>源库连接信息列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Endpoint> GetSourceEndPoint() const;

                    /**
                     * 判断参数 SourceEndPoint 是否已赋值
                     * @return SourceEndPoint 是否已赋值
                     * 
                     */
                    bool SourceEndPointHasBeenSet() const;

                    /**
                     * 获取<p>备份对象信息。</p>
                     * @return BackupObject <p>备份对象信息。</p>
                     * 
                     */
                    BackupObject GetBackupObject() const;

                    /**
                     * 判断参数 BackupObject 是否已赋值
                     * @return BackupObject 是否已赋值
                     * 
                     */
                    bool BackupObjectHasBeenSet() const;

                    /**
                     * 获取<p>备份策略。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupStrategy <p>备份策略。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BackupStrategyItem GetBackupStrategy() const;

                    /**
                     * 判断参数 BackupStrategy 是否已赋值
                     * @return BackupStrategy 是否已赋值
                     * 
                     */
                    bool BackupStrategyHasBeenSet() const;

                    /**
                     * 获取<p>备份进度信息。</p>
                     * @return Progress <p>备份进度信息。</p>
                     * 
                     */
                    BackupProgress GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>错误异常信息。</p>
                     * @return ErrorInfo <p>错误异常信息。</p>
                     * 
                     */
                    ErrorInfo GetErrorInfo() const;

                    /**
                     * 判断参数 ErrorInfo 是否已赋值
                     * @return ErrorInfo 是否已赋值
                     * 
                     */
                    bool ErrorInfoHasBeenSet() const;

                    /**
                     * 获取<p>创建时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00。</p>
                     * @return CreateTime <p>创建时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00。</p>
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
                     * 获取<p>到期时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，后付费计划无到期时间时为空字符串。</p>
                     * @return ExpireTime <p>到期时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，后付费计划无到期时间时为空字符串。</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>下线时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未下线时为空字符串。</p>
                     * @return OfflineTime <p>下线时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未下线时为空字符串。</p>
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     * 
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取<p>自动续费标识。取值：</p><ul><li>0：不自动续费</li><li>1：自动续费</li></ul>
                     * @return AutoRenewFlag <p>自动续费标识。取值：</p><ul><li>0：不自动续费</li><li>1：自动续费</li></ul>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>主节点连接信息。云数据库实例为实例 ID，云服务器自建为实例 ID:端口，其余为 ip:port。</p>
                     * @return SourceInfo <p>主节点连接信息。云数据库实例为实例 ID，云服务器自建为实例 ID:端口，其余为 ip:port。</p>
                     * 
                     */
                    std::vector<std::string> GetSourceInfo() const;

                    /**
                     * 判断参数 SourceInfo 是否已赋值
                     * @return SourceInfo 是否已赋值
                     * 
                     */
                    bool SourceInfoHasBeenSet() const;

                    /**
                     * 获取<p>从节点连接信息，格式同 SourceInfo。</p>
                     * @return SetSourceInfo <p>从节点连接信息，格式同 SourceInfo。</p>
                     * 
                     */
                    std::vector<std::string> GetSetSourceInfo() const;

                    /**
                     * 判断参数 SetSourceInfo 是否已赋值
                     * @return SetSourceInfo 是否已赋值
                     * 
                     */
                    bool SetSourceInfoHasBeenSet() const;

                    /**
                     * 获取<p>标签信息列表。未绑定标签时返回 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>标签信息列表。未绑定标签时返回 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>上次备份作业时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未执行过备份作业时为空字符串。</p>
                     * @return LastBackupJobTime <p>上次备份作业时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未执行过备份作业时为空字符串。</p>
                     * 
                     */
                    std::string GetLastBackupJobTime() const;

                    /**
                     * 判断参数 LastBackupJobTime 是否已赋值
                     * @return LastBackupJobTime 是否已赋值
                     * 
                     */
                    bool LastBackupJobTimeHasBeenSet() const;

                    /**
                     * 获取<p>上次全量备份作业状态。</p>
                     * @return LastFullBackupJobStatus <p>上次全量备份作业状态。</p>
                     * 
                     */
                    std::string GetLastFullBackupJobStatus() const;

                    /**
                     * 判断参数 LastFullBackupJobStatus 是否已赋值
                     * @return LastFullBackupJobStatus 是否已赋值
                     * 
                     */
                    bool LastFullBackupJobStatusHasBeenSet() const;

                    /**
                     * 获取<p>上次增量备份作业状态。</p>
                     * @return LastIncBackupJobStatus <p>上次增量备份作业状态。</p>
                     * 
                     */
                    std::string GetLastIncBackupJobStatus() const;

                    /**
                     * 判断参数 LastIncBackupJobStatus 是否已赋值
                     * @return LastIncBackupJobStatus 是否已赋值
                     * 
                     */
                    bool LastIncBackupJobStatusHasBeenSet() const;

                    /**
                     * 获取<p>下次备份作业时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未确定时为空字符串。</p>
                     * @return NextBackupJobTime <p>下次备份作业时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未确定时为空字符串。</p>
                     * 
                     */
                    std::string GetNextBackupJobTime() const;

                    /**
                     * 判断参数 NextBackupJobTime 是否已赋值
                     * @return NextBackupJobTime 是否已赋值
                     * 
                     */
                    bool NextBackupJobTimeHasBeenSet() const;

                    /**
                     * 获取<p>上次恢复作业时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未执行过恢复作业时为空字符串。</p>
                     * @return LastRestoreJobTime <p>上次恢复作业时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未执行过恢复作业时为空字符串。</p>
                     * 
                     */
                    std::string GetLastRestoreJobTime() const;

                    /**
                     * 判断参数 LastRestoreJobTime 是否已赋值
                     * @return LastRestoreJobTime 是否已赋值
                     * 
                     */
                    bool LastRestoreJobTimeHasBeenSet() const;

                    /**
                     * 获取<p>上次恢复作业状态。</p>
                     * @return LastRestoreJobStatus <p>上次恢复作业状态。</p>
                     * 
                     */
                    std::string GetLastRestoreJobStatus() const;

                    /**
                     * 判断参数 LastRestoreJobStatus 是否已赋值
                     * @return LastRestoreJobStatus 是否已赋值
                     * 
                     */
                    bool LastRestoreJobStatusHasBeenSet() const;

                    /**
                     * 获取<p>付费信息。</p>
                     * @return PayInfo <p>付费信息。</p>
                     * 
                     */
                    BackupPlanPayInfo GetPayInfo() const;

                    /**
                     * 判断参数 PayInfo 是否已赋值
                     * @return PayInfo 是否已赋值
                     * 
                     */
                    bool PayInfoHasBeenSet() const;

                    /**
                     * 获取<p>全量备份并行数上限。</p>
                     * @return UpperParallel <p>全量备份并行数上限。</p>
                     * 
                     */
                    int64_t GetUpperParallel() const;

                    /**
                     * 判断参数 UpperParallel 是否已赋值
                     * @return UpperParallel 是否已赋值
                     * 
                     */
                    bool UpperParallelHasBeenSet() const;

                    /**
                     * 获取<p>带宽上限，单位：MB/s。</p>
                     * @return UpperBandwidth <p>带宽上限，单位：MB/s。</p>
                     * 
                     */
                    int64_t GetUpperBandwidth() const;

                    /**
                     * 判断参数 UpperBandwidth 是否已赋值
                     * @return UpperBandwidth 是否已赋值
                     * 
                     */
                    bool UpperBandwidthHasBeenSet() const;

                    /**
                     * 获取<p>当前状态下允许的操作。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllowedActions <p>当前状态下允许的操作。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAllowedActions() const;

                    /**
                     * 判断参数 AllowedActions 是否已赋值
                     * @return AllowedActions 是否已赋值
                     * 
                     */
                    bool AllowedActionsHasBeenSet() const;

                    /**
                     * 获取<p>可恢复时间范围。</p>
                     * @return RestoreRange <p>可恢复时间范围。</p>
                     * 
                     */
                    RestoreRange GetRestoreRange() const;

                    /**
                     * 判断参数 RestoreRange 是否已赋值
                     * @return RestoreRange 是否已赋值
                     * 
                     */
                    bool RestoreRangeHasBeenSet() const;

                private:

                    /**
                     * <p>地域。</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>备份计划 ID。</p>
                     */
                    std::string m_backupPlanId;
                    bool m_backupPlanIdHasBeenSet;

                    /**
                     * <p>备份计划名称。</p>
                     */
                    std::string m_backupPlanName;
                    bool m_backupPlanNameHasBeenSet;

                    /**
                     * <p>备份计划状态。取值：</p><ul><li>creating：创建中</li><li>notStarted：未启动</li><li>notConfigured：未配置</li><li>checkNotPass：校验未通过</li><li>checkPass：校验通过</li><li>checking：校验中</li><li>readyRun：待运行</li><li>running：运行中</li><li>fullBacking：全量备份中</li><li>paused：已暂停</li><li>isolating：隔离中</li><li>isolated：已隔离</li><li>offlining：下线中</li><li>offlined：已下线</li><li>completed：已完成</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>源库连接信息列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Endpoint> m_sourceEndPoint;
                    bool m_sourceEndPointHasBeenSet;

                    /**
                     * <p>备份对象信息。</p>
                     */
                    BackupObject m_backupObject;
                    bool m_backupObjectHasBeenSet;

                    /**
                     * <p>备份策略。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BackupStrategyItem m_backupStrategy;
                    bool m_backupStrategyHasBeenSet;

                    /**
                     * <p>备份进度信息。</p>
                     */
                    BackupProgress m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>错误异常信息。</p>
                     */
                    ErrorInfo m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                    /**
                     * <p>创建时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>到期时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，后付费计划无到期时间时为空字符串。</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>下线时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未下线时为空字符串。</p>
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * <p>自动续费标识。取值：</p><ul><li>0：不自动续费</li><li>1：自动续费</li></ul>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>主节点连接信息。云数据库实例为实例 ID，云服务器自建为实例 ID:端口，其余为 ip:port。</p>
                     */
                    std::vector<std::string> m_sourceInfo;
                    bool m_sourceInfoHasBeenSet;

                    /**
                     * <p>从节点连接信息，格式同 SourceInfo。</p>
                     */
                    std::vector<std::string> m_setSourceInfo;
                    bool m_setSourceInfoHasBeenSet;

                    /**
                     * <p>标签信息列表。未绑定标签时返回 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>上次备份作业时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未执行过备份作业时为空字符串。</p>
                     */
                    std::string m_lastBackupJobTime;
                    bool m_lastBackupJobTimeHasBeenSet;

                    /**
                     * <p>上次全量备份作业状态。</p>
                     */
                    std::string m_lastFullBackupJobStatus;
                    bool m_lastFullBackupJobStatusHasBeenSet;

                    /**
                     * <p>上次增量备份作业状态。</p>
                     */
                    std::string m_lastIncBackupJobStatus;
                    bool m_lastIncBackupJobStatusHasBeenSet;

                    /**
                     * <p>下次备份作业时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未确定时为空字符串。</p>
                     */
                    std::string m_nextBackupJobTime;
                    bool m_nextBackupJobTimeHasBeenSet;

                    /**
                     * <p>上次恢复作业时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未执行过恢复作业时为空字符串。</p>
                     */
                    std::string m_lastRestoreJobTime;
                    bool m_lastRestoreJobTimeHasBeenSet;

                    /**
                     * <p>上次恢复作业状态。</p>
                     */
                    std::string m_lastRestoreJobStatus;
                    bool m_lastRestoreJobStatusHasBeenSet;

                    /**
                     * <p>付费信息。</p>
                     */
                    BackupPlanPayInfo m_payInfo;
                    bool m_payInfoHasBeenSet;

                    /**
                     * <p>全量备份并行数上限。</p>
                     */
                    int64_t m_upperParallel;
                    bool m_upperParallelHasBeenSet;

                    /**
                     * <p>带宽上限，单位：MB/s。</p>
                     */
                    int64_t m_upperBandwidth;
                    bool m_upperBandwidthHasBeenSet;

                    /**
                     * <p>当前状态下允许的操作。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_allowedActions;
                    bool m_allowedActionsHasBeenSet;

                    /**
                     * <p>可恢复时间范围。</p>
                     */
                    RestoreRange m_restoreRange;
                    bool m_restoreRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBEBACKUPPLANDETAILRESPONSE_H_
