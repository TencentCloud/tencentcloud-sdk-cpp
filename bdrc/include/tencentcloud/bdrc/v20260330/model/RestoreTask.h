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
                     * 获取恢复任务 ID
                     * @return TaskId 恢复任务 ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置恢复任务 ID
                     * @param _taskId 恢复任务 ID
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
                     * 获取关联备份点 ID
                     * @return BackupId 关联备份点 ID
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 设置关联备份点 ID
                     * @param _backupId 关联备份点 ID
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
                     * 获取源实例 ID
                     * @return ResourceId 源实例 ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置源实例 ID
                     * @param _resourceId 源实例 ID
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
                     * 获取目标实例 ID
                     * @return TargetResourceId 目标实例 ID
                     * 
                     */
                    std::string GetTargetResourceId() const;

                    /**
                     * 设置目标实例 ID
                     * @param _targetResourceId 目标实例 ID
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
                     * 获取恢复路径列表
                     * @return RestorePaths 恢复路径列表
                     * 
                     */
                    std::vector<std::string> GetRestorePaths() const;

                    /**
                     * 设置恢复路径列表
                     * @param _restorePaths 恢复路径列表
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
                     * 获取目标恢复位置
                     * @return TargetLocation 目标恢复位置
                     * 
                     */
                    std::string GetTargetLocation() const;

                    /**
                     * 设置目标恢复位置
                     * @param _targetLocation 目标恢复位置
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
                     * 获取任务状态
                     * @return Status 任务状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态
                     * @param _status 任务状态
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
                     * 获取需恢复文件总数
                     * @return TotalFileCount 需恢复文件总数
                     * 
                     */
                    int64_t GetTotalFileCount() const;

                    /**
                     * 设置需恢复文件总数
                     * @param _totalFileCount 需恢复文件总数
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
                     * 获取需恢复数据总量（字节）
                     * @return TotalSize 需恢复数据总量（字节）
                     * 
                     */
                    int64_t GetTotalSize() const;

                    /**
                     * 设置需恢复数据总量（字节）
                     * @param _totalSize 需恢复数据总量（字节）
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
                     * 获取需恢复数据总量（格式化，如 "1.5 GB"）
                     * @return TotalSizeFormatted 需恢复数据总量（格式化，如 "1.5 GB"）
                     * 
                     */
                    std::string GetTotalSizeFormatted() const;

                    /**
                     * 设置需恢复数据总量（格式化，如 "1.5 GB"）
                     * @param _totalSizeFormatted 需恢复数据总量（格式化，如 "1.5 GB"）
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
                     * 获取已恢复文件数
                     * @return RestoreFileCount 已恢复文件数
                     * 
                     */
                    int64_t GetRestoreFileCount() const;

                    /**
                     * 设置已恢复文件数
                     * @param _restoreFileCount 已恢复文件数
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
                     * 获取已恢复数据量（字节）
                     * @return RestoreSize 已恢复数据量（字节）
                     * 
                     */
                    int64_t GetRestoreSize() const;

                    /**
                     * 设置已恢复数据量（字节）
                     * @param _restoreSize 已恢复数据量（字节）
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
                     * 获取已恢复数据量（格式化）
                     * @return RestoreSizeFormatted 已恢复数据量（格式化）
                     * 
                     */
                    std::string GetRestoreSizeFormatted() const;

                    /**
                     * 设置已恢复数据量（格式化）
                     * @param _restoreSizeFormatted 已恢复数据量（格式化）
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
                     * 获取恢复进度（0-100）
                     * @return Progress 恢复进度（0-100）
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置恢复进度（0-100）
                     * @param _progress 恢复进度（0-100）
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
                     * 获取关联 Job ID
                     * @return JobId 关联 Job ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置关联 Job ID
                     * @param _jobId 关联 Job ID
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
                     * 获取任务开始时间（ISO 格式）
                     * @return StartTime 任务开始时间（ISO 格式）
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务开始时间（ISO 格式）
                     * @param _startTime 任务开始时间（ISO 格式）
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
                     * 获取任务结束时间
                     * @return EndTime 任务结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务结束时间
                     * @param _endTime 任务结束时间
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
                     * 获取任务创建时间
                     * @return CreatedTime 任务创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _createdTime 任务创建时间
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
                     * 获取恢复任务失败原因
                     * @return FailReason 恢复任务失败原因
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置恢复任务失败原因
                     * @param _failReason 恢复任务失败原因
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
                     * 获取冲突处理策略：skip-跳过/overwrite-覆盖/newer-保留最新版本/if_changed-内容变化时覆盖
                     * @return ConflictStrategy 冲突处理策略：skip-跳过/overwrite-覆盖/newer-保留最新版本/if_changed-内容变化时覆盖
                     * 
                     */
                    std::string GetConflictStrategy() const;

                    /**
                     * 设置冲突处理策略：skip-跳过/overwrite-覆盖/newer-保留最新版本/if_changed-内容变化时覆盖
                     * @param _conflictStrategy 冲突处理策略：skip-跳过/overwrite-覆盖/newer-保留最新版本/if_changed-内容变化时覆盖
                     * 
                     */
                    void SetConflictStrategy(const std::string& _conflictStrategy);

                    /**
                     * 判断参数 ConflictStrategy 是否已赋值
                     * @return ConflictStrategy 是否已赋值
                     * 
                     */
                    bool ConflictStrategyHasBeenSet() const;

                private:

                    /**
                     * 恢复任务 ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 关联备份点 ID
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * 源实例 ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 目标实例 ID
                     */
                    std::string m_targetResourceId;
                    bool m_targetResourceIdHasBeenSet;

                    /**
                     * 恢复路径列表
                     */
                    std::vector<std::string> m_restorePaths;
                    bool m_restorePathsHasBeenSet;

                    /**
                     * 目标恢复位置
                     */
                    std::string m_targetLocation;
                    bool m_targetLocationHasBeenSet;

                    /**
                     * 任务状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 需恢复文件总数
                     */
                    int64_t m_totalFileCount;
                    bool m_totalFileCountHasBeenSet;

                    /**
                     * 需恢复数据总量（字节）
                     */
                    int64_t m_totalSize;
                    bool m_totalSizeHasBeenSet;

                    /**
                     * 需恢复数据总量（格式化，如 "1.5 GB"）
                     */
                    std::string m_totalSizeFormatted;
                    bool m_totalSizeFormattedHasBeenSet;

                    /**
                     * 已恢复文件数
                     */
                    int64_t m_restoreFileCount;
                    bool m_restoreFileCountHasBeenSet;

                    /**
                     * 已恢复数据量（字节）
                     */
                    int64_t m_restoreSize;
                    bool m_restoreSizeHasBeenSet;

                    /**
                     * 已恢复数据量（格式化）
                     */
                    std::string m_restoreSizeFormatted;
                    bool m_restoreSizeFormattedHasBeenSet;

                    /**
                     * 恢复进度（0-100）
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 关联 Job ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 任务开始时间（ISO 格式）
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 恢复任务失败原因
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * 冲突处理策略：skip-跳过/overwrite-覆盖/newer-保留最新版本/if_changed-内容变化时覆盖
                     */
                    std::string m_conflictStrategy;
                    bool m_conflictStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_RESTORETASK_H_
