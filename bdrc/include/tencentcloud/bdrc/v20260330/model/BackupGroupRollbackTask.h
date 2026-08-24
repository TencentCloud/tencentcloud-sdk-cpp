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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPGROUPROLLBACKTASK_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPGROUPROLLBACKTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 备份组回滚任务
                */
                class BackupGroupRollbackTask : public AbstractModel
                {
                public:
                    BackupGroupRollbackTask();
                    ~BackupGroupRollbackTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份组回滚任务
                     * @return TaskId 备份组回滚任务
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置备份组回滚任务
                     * @param _taskId 备份组回滚任务
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取源实例ID
                     * @return SourceInstanceId 源实例ID
                     * 
                     */
                    std::string GetSourceInstanceId() const;

                    /**
                     * 设置源实例ID
                     * @param _sourceInstanceId 源实例ID
                     * 
                     */
                    void SetSourceInstanceId(const std::string& _sourceInstanceId);

                    /**
                     * 判断参数 SourceInstanceId 是否已赋值
                     * @return SourceInstanceId 是否已赋值
                     * 
                     */
                    bool SourceInstanceIdHasBeenSet() const;

                    /**
                     * 获取目标实例ID
                     * @return TargetInstanceId 目标实例ID
                     * 
                     */
                    std::string GetTargetInstanceId() const;

                    /**
                     * 设置目标实例ID
                     * @param _targetInstanceId 目标实例ID
                     * 
                     */
                    void SetTargetInstanceId(const std::string& _targetInstanceId);

                    /**
                     * 判断参数 TargetInstanceId 是否已赋值
                     * @return TargetInstanceId 是否已赋值
                     * 
                     */
                    bool TargetInstanceIdHasBeenSet() const;

                    /**
                     * 获取备份组ID
                     * @return BackupGroupId 备份组ID
                     * 
                     */
                    std::string GetBackupGroupId() const;

                    /**
                     * 设置备份组ID
                     * @param _backupGroupId 备份组ID
                     * 
                     */
                    void SetBackupGroupId(const std::string& _backupGroupId);

                    /**
                     * 判断参数 BackupGroupId 是否已赋值
                     * @return BackupGroupId 是否已赋值
                     * 
                     */
                    bool BackupGroupIdHasBeenSet() const;

                    /**
                     * 获取恢复类型：ORIGINAL-原实例恢复，NEW-新实例恢复
                     * @return RollbackType 恢复类型：ORIGINAL-原实例恢复，NEW-新实例恢复
                     * 
                     */
                    std::string GetRollbackType() const;

                    /**
                     * 设置恢复类型：ORIGINAL-原实例恢复，NEW-新实例恢复
                     * @param _rollbackType 恢复类型：ORIGINAL-原实例恢复，NEW-新实例恢复
                     * 
                     */
                    void SetRollbackType(const std::string& _rollbackType);

                    /**
                     * 判断参数 RollbackType 是否已赋值
                     * @return RollbackType 是否已赋值
                     * 
                     */
                    bool RollbackTypeHasBeenSet() const;

                    /**
                     * 获取任务状态。取值包括"init"、"migrating"、"done"、"failed"。
                     * @return Status 任务状态。取值包括"init"、"migrating"、"done"、"failed"。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态。取值包括"init"、"migrating"、"done"、"failed"。
                     * @param _status 任务状态。取值包括"init"、"migrating"、"done"、"failed"。
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
                     * 获取进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Percent 进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 设置进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _percent 进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPercent(const uint64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取APP ID
                     * @return AppId APP ID
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置APP ID
                     * @param _appId APP ID
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取备份点名称
                     * @return BackupGroupName 备份点名称
                     * 
                     */
                    std::string GetBackupGroupName() const;

                    /**
                     * 设置备份点名称
                     * @param _backupGroupName 备份点名称
                     * 
                     */
                    void SetBackupGroupName(const std::string& _backupGroupName);

                    /**
                     * 判断参数 BackupGroupName 是否已赋值
                     * @return BackupGroupName 是否已赋值
                     * 
                     */
                    bool BackupGroupNameHasBeenSet() const;

                    /**
                     * 获取恢复失败原因
                     * @return FailReason 恢复失败原因
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置恢复失败原因
                     * @param _failReason 恢复失败原因
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                private:

                    /**
                     * 备份组回滚任务
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 源实例ID
                     */
                    std::string m_sourceInstanceId;
                    bool m_sourceInstanceIdHasBeenSet;

                    /**
                     * 目标实例ID
                     */
                    std::string m_targetInstanceId;
                    bool m_targetInstanceIdHasBeenSet;

                    /**
                     * 备份组ID
                     */
                    std::string m_backupGroupId;
                    bool m_backupGroupIdHasBeenSet;

                    /**
                     * 恢复类型：ORIGINAL-原实例恢复，NEW-新实例恢复
                     */
                    std::string m_rollbackType;
                    bool m_rollbackTypeHasBeenSet;

                    /**
                     * 任务状态。取值包括"init"、"migrating"、"done"、"failed"。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * APP ID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 备份点名称
                     */
                    std::string m_backupGroupName;
                    bool m_backupGroupNameHasBeenSet;

                    /**
                     * 恢复失败原因
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPGROUPROLLBACKTASK_H_
