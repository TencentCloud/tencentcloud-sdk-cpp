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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_RESTORETASK_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_RESTORETASK_H_

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
                * 恢复任务信息
                */
                class RestoreTask : public AbstractModel
                {
                public:
                    RestoreTask();
                    ~RestoreTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>恢复任务 ID</p>
                     * @return TaskId <p>恢复任务 ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>恢复任务 ID</p>
                     * @param _taskId <p>恢复任务 ID</p>
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
                     * 获取<p>关联备份点 ID</p>
                     * @return BackupId <p>关联备份点 ID</p>
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 设置<p>关联备份点 ID</p>
                     * @param _backupId <p>关联备份点 ID</p>
                     * 
                     */
                    void SetBackupId(const std::string& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取<p>源实例 ID</p>
                     * @return ResourceId <p>源实例 ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>源实例 ID</p>
                     * @param _resourceId <p>源实例 ID</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>目标实例 ID</p>
                     * @return TargetResourceId <p>目标实例 ID</p>
                     * 
                     */
                    std::string GetTargetResourceId() const;

                    /**
                     * 设置<p>目标实例 ID</p>
                     * @param _targetResourceId <p>目标实例 ID</p>
                     * 
                     */
                    void SetTargetResourceId(const std::string& _targetResourceId);

                    /**
                     * 判断参数 TargetResourceId 是否已赋值
                     * @return TargetResourceId 是否已赋值
                     * 
                     */
                    bool TargetResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>恢复路径列表</p>
                     * @return RestorePaths <p>恢复路径列表</p>
                     * 
                     */
                    std::vector<std::string> GetRestorePaths() const;

                    /**
                     * 设置<p>恢复路径列表</p>
                     * @param _restorePaths <p>恢复路径列表</p>
                     * 
                     */
                    void SetRestorePaths(const std::vector<std::string>& _restorePaths);

                    /**
                     * 判断参数 RestorePaths 是否已赋值
                     * @return RestorePaths 是否已赋值
                     * 
                     */
                    bool RestorePathsHasBeenSet() const;

                    /**
                     * 获取<p>目标恢复位置</p>
                     * @return TargetLocation <p>目标恢复位置</p>
                     * 
                     */
                    std::string GetTargetLocation() const;

                    /**
                     * 设置<p>目标恢复位置</p>
                     * @param _targetLocation <p>目标恢复位置</p>
                     * 
                     */
                    void SetTargetLocation(const std::string& _targetLocation);

                    /**
                     * 判断参数 TargetLocation 是否已赋值
                     * @return TargetLocation 是否已赋值
                     * 
                     */
                    bool TargetLocationHasBeenSet() const;

                    /**
                     * 获取<p>任务状态</p>
                     * @return Status <p>任务状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态</p>
                     * @param _status <p>任务状态</p>
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
                     * 获取<p>需恢复文件总数</p>
                     * @return TotalFileCount <p>需恢复文件总数</p>
                     * 
                     */
                    int64_t GetTotalFileCount() const;

                    /**
                     * 设置<p>需恢复文件总数</p>
                     * @param _totalFileCount <p>需恢复文件总数</p>
                     * 
                     */
                    void SetTotalFileCount(const int64_t& _totalFileCount);

                    /**
                     * 判断参数 TotalFileCount 是否已赋值
                     * @return TotalFileCount 是否已赋值
                     * 
                     */
                    bool TotalFileCountHasBeenSet() const;

                    /**
                     * 获取<p>需恢复数据总量（字节）</p>
                     * @return TotalSize <p>需恢复数据总量（字节）</p>
                     * 
                     */
                    int64_t GetTotalSize() const;

                    /**
                     * 设置<p>需恢复数据总量（字节）</p>
                     * @param _totalSize <p>需恢复数据总量（字节）</p>
                     * 
                     */
                    void SetTotalSize(const int64_t& _totalSize);

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     * 
                     */
                    bool TotalSizeHasBeenSet() const;

                    /**
                     * 获取<p>需恢复数据总量（格式化：1024 进制，保留两位小数，单位 B/KiB/MiB/GiB/TiB/PiB，如 &quot;1.50 GiB&quot;）</p>
                     * @return TotalSizeFormatted <p>需恢复数据总量（格式化：1024 进制，保留两位小数，单位 B/KiB/MiB/GiB/TiB/PiB，如 &quot;1.50 GiB&quot;）</p>
                     * 
                     */
                    std::string GetTotalSizeFormatted() const;

                    /**
                     * 设置<p>需恢复数据总量（格式化：1024 进制，保留两位小数，单位 B/KiB/MiB/GiB/TiB/PiB，如 &quot;1.50 GiB&quot;）</p>
                     * @param _totalSizeFormatted <p>需恢复数据总量（格式化：1024 进制，保留两位小数，单位 B/KiB/MiB/GiB/TiB/PiB，如 &quot;1.50 GiB&quot;）</p>
                     * 
                     */
                    void SetTotalSizeFormatted(const std::string& _totalSizeFormatted);

                    /**
                     * 判断参数 TotalSizeFormatted 是否已赋值
                     * @return TotalSizeFormatted 是否已赋值
                     * 
                     */
                    bool TotalSizeFormattedHasBeenSet() const;

                    /**
                     * 获取<p>已恢复文件数</p>
                     * @return RestoreFileCount <p>已恢复文件数</p>
                     * 
                     */
                    int64_t GetRestoreFileCount() const;

                    /**
                     * 设置<p>已恢复文件数</p>
                     * @param _restoreFileCount <p>已恢复文件数</p>
                     * 
                     */
                    void SetRestoreFileCount(const int64_t& _restoreFileCount);

                    /**
                     * 判断参数 RestoreFileCount 是否已赋值
                     * @return RestoreFileCount 是否已赋值
                     * 
                     */
                    bool RestoreFileCountHasBeenSet() const;

                    /**
                     * 获取<p>已恢复数据量（字节）</p>
                     * @return RestoreSize <p>已恢复数据量（字节）</p>
                     * 
                     */
                    int64_t GetRestoreSize() const;

                    /**
                     * 设置<p>已恢复数据量（字节）</p>
                     * @param _restoreSize <p>已恢复数据量（字节）</p>
                     * 
                     */
                    void SetRestoreSize(const int64_t& _restoreSize);

                    /**
                     * 判断参数 RestoreSize 是否已赋值
                     * @return RestoreSize 是否已赋值
                     * 
                     */
                    bool RestoreSizeHasBeenSet() const;

                    /**
                     * 获取<p>已恢复数据量（格式化，口径同 TotalSizeFormatted，如 &quot;512.00 MiB&quot;）</p>
                     * @return RestoreSizeFormatted <p>已恢复数据量（格式化，口径同 TotalSizeFormatted，如 &quot;512.00 MiB&quot;）</p>
                     * 
                     */
                    std::string GetRestoreSizeFormatted() const;

                    /**
                     * 设置<p>已恢复数据量（格式化，口径同 TotalSizeFormatted，如 &quot;512.00 MiB&quot;）</p>
                     * @param _restoreSizeFormatted <p>已恢复数据量（格式化，口径同 TotalSizeFormatted，如 &quot;512.00 MiB&quot;）</p>
                     * 
                     */
                    void SetRestoreSizeFormatted(const std::string& _restoreSizeFormatted);

                    /**
                     * 判断参数 RestoreSizeFormatted 是否已赋值
                     * @return RestoreSizeFormatted 是否已赋值
                     * 
                     */
                    bool RestoreSizeFormattedHasBeenSet() const;

                    /**
                     * 获取<p>恢复进度（0-100）</p>
                     * @return Progress <p>恢复进度（0-100）</p>
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置<p>恢复进度（0-100）</p>
                     * @param _progress <p>恢复进度（0-100）</p>
                     * 
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>关联 Job ID</p>
                     * @return JobId <p>关联 Job ID</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>关联 Job ID</p>
                     * @param _jobId <p>关联 Job ID</p>
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取<p>任务开始时间（ISO 格式）</p>
                     * @return StartTime <p>任务开始时间（ISO 格式）</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>任务开始时间（ISO 格式）</p>
                     * @param _startTime <p>任务开始时间（ISO 格式）</p>
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
                     * 获取<p>任务结束时间</p>
                     * @return EndTime <p>任务结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>任务结束时间</p>
                     * @param _endTime <p>任务结束时间</p>
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
                     * 获取<p>任务创建时间</p>
                     * @return CreatedTime <p>任务创建时间</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>任务创建时间</p>
                     * @param _createdTime <p>任务创建时间</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>恢复任务失败原因</p>
                     * @return FailReason <p>恢复任务失败原因</p>
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置<p>恢复任务失败原因</p>
                     * @param _failReason <p>恢复任务失败原因</p>
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取<p>冲突处理策略：skip-跳过/overwrite-覆盖/newer-保留最新版本/if_changed-内容变化时覆盖</p>
                     * @return ConflictStrategy <p>冲突处理策略：skip-跳过/overwrite-覆盖/newer-保留最新版本/if_changed-内容变化时覆盖</p>
                     * 
                     */
                    std::string GetConflictStrategy() const;

                    /**
                     * 设置<p>冲突处理策略：skip-跳过/overwrite-覆盖/newer-保留最新版本/if_changed-内容变化时覆盖</p>
                     * @param _conflictStrategy <p>冲突处理策略：skip-跳过/overwrite-覆盖/newer-保留最新版本/if_changed-内容变化时覆盖</p>
                     * 
                     */
                    void SetConflictStrategy(const std::string& _conflictStrategy);

                    /**
                     * 判断参数 ConflictStrategy 是否已赋值
                     * @return ConflictStrategy 是否已赋值
                     * 
                     */
                    bool ConflictStrategyHasBeenSet() const;

                    /**
                     * 获取<p>是否为原路径恢复</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsOriginalPath <p>是否为原路径恢复</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsOriginalPath() const;

                    /**
                     * 设置<p>是否为原路径恢复</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isOriginalPath <p>是否为原路径恢复</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsOriginalPath(const bool& _isOriginalPath);

                    /**
                     * 判断参数 IsOriginalPath 是否已赋值
                     * @return IsOriginalPath 是否已赋值
                     * 
                     */
                    bool IsOriginalPathHasBeenSet() const;

                    /**
                     * 获取<p>源端腾讯云资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CloudResourceId <p>源端腾讯云资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCloudResourceId() const;

                    /**
                     * 设置<p>源端腾讯云资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cloudResourceId <p>源端腾讯云资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCloudResourceId(const std::string& _cloudResourceId);

                    /**
                     * 判断参数 CloudResourceId 是否已赋值
                     * @return CloudResourceId 是否已赋值
                     * 
                     */
                    bool CloudResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>目标端腾讯云资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetCloudResourceId <p>目标端腾讯云资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetCloudResourceId() const;

                    /**
                     * 设置<p>目标端腾讯云资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetCloudResourceId <p>目标端腾讯云资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetCloudResourceId(const std::string& _targetCloudResourceId);

                    /**
                     * 判断参数 TargetCloudResourceId 是否已赋值
                     * @return TargetCloudResourceId 是否已赋值
                     * 
                     */
                    bool TargetCloudResourceIdHasBeenSet() const;

                private:

                    /**
                     * <p>恢复任务 ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>关联备份点 ID</p>
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * <p>源实例 ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>目标实例 ID</p>
                     */
                    std::string m_targetResourceId;
                    bool m_targetResourceIdHasBeenSet;

                    /**
                     * <p>恢复路径列表</p>
                     */
                    std::vector<std::string> m_restorePaths;
                    bool m_restorePathsHasBeenSet;

                    /**
                     * <p>目标恢复位置</p>
                     */
                    std::string m_targetLocation;
                    bool m_targetLocationHasBeenSet;

                    /**
                     * <p>任务状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>需恢复文件总数</p>
                     */
                    int64_t m_totalFileCount;
                    bool m_totalFileCountHasBeenSet;

                    /**
                     * <p>需恢复数据总量（字节）</p>
                     */
                    int64_t m_totalSize;
                    bool m_totalSizeHasBeenSet;

                    /**
                     * <p>需恢复数据总量（格式化：1024 进制，保留两位小数，单位 B/KiB/MiB/GiB/TiB/PiB，如 &quot;1.50 GiB&quot;）</p>
                     */
                    std::string m_totalSizeFormatted;
                    bool m_totalSizeFormattedHasBeenSet;

                    /**
                     * <p>已恢复文件数</p>
                     */
                    int64_t m_restoreFileCount;
                    bool m_restoreFileCountHasBeenSet;

                    /**
                     * <p>已恢复数据量（字节）</p>
                     */
                    int64_t m_restoreSize;
                    bool m_restoreSizeHasBeenSet;

                    /**
                     * <p>已恢复数据量（格式化，口径同 TotalSizeFormatted，如 &quot;512.00 MiB&quot;）</p>
                     */
                    std::string m_restoreSizeFormatted;
                    bool m_restoreSizeFormattedHasBeenSet;

                    /**
                     * <p>恢复进度（0-100）</p>
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>关联 Job ID</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>任务开始时间（ISO 格式）</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>任务结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>任务创建时间</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>恢复任务失败原因</p>
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * <p>冲突处理策略：skip-跳过/overwrite-覆盖/newer-保留最新版本/if_changed-内容变化时覆盖</p>
                     */
                    std::string m_conflictStrategy;
                    bool m_conflictStrategyHasBeenSet;

                    /**
                     * <p>是否为原路径恢复</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isOriginalPath;
                    bool m_isOriginalPathHasBeenSet;

                    /**
                     * <p>源端腾讯云资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cloudResourceId;
                    bool m_cloudResourceIdHasBeenSet;

                    /**
                     * <p>目标端腾讯云资源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetCloudResourceId;
                    bool m_targetCloudResourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_RESTORETASK_H_
