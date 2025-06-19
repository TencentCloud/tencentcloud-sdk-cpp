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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPSTATUS_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 备份任务的进度详情
                */
                class BackupStatus : public AbstractModel
                {
                public:
                    BackupStatus();
                    ~BackupStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份任务id
                     * @return JobId 备份任务id
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 设置备份任务id
                     * @param _jobId 备份任务id
                     * 
                     */
                    void SetJobId(const int64_t& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取快照名称
                     * @return SnapshotName 快照名称
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置快照名称
                     * @param _snapshotName 快照名称
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取库名
                     * @return DbName 库名
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置库名
                     * @param _dbName 库名
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return State 状态
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置状态
                     * @param _state 状态
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取备份对象
                     * @return BackupObjects 备份对象
                     * 
                     */
                    std::string GetBackupObjects() const;

                    /**
                     * 设置备份对象
                     * @param _backupObjects 备份对象
                     * 
                     */
                    void SetBackupObjects(const std::string& _backupObjects);

                    /**
                     * 判断参数 BackupObjects 是否已赋值
                     * @return BackupObjects 是否已赋值
                     * 
                     */
                    bool BackupObjectsHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取快照结束时间
                     * @return SnapshotFinishedTime 快照结束时间
                     * 
                     */
                    std::string GetSnapshotFinishedTime() const;

                    /**
                     * 设置快照结束时间
                     * @param _snapshotFinishedTime 快照结束时间
                     * 
                     */
                    void SetSnapshotFinishedTime(const std::string& _snapshotFinishedTime);

                    /**
                     * 判断参数 SnapshotFinishedTime 是否已赋值
                     * @return SnapshotFinishedTime 是否已赋值
                     * 
                     */
                    bool SnapshotFinishedTimeHasBeenSet() const;

                    /**
                     * 获取上传结束时间
                     * @return UploadFinishedTime 上传结束时间
                     * 
                     */
                    std::string GetUploadFinishedTime() const;

                    /**
                     * 设置上传结束时间
                     * @param _uploadFinishedTime 上传结束时间
                     * 
                     */
                    void SetUploadFinishedTime(const std::string& _uploadFinishedTime);

                    /**
                     * 判断参数 UploadFinishedTime 是否已赋值
                     * @return UploadFinishedTime 是否已赋值
                     * 
                     */
                    bool UploadFinishedTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return FinishedTime 结束时间
                     * 
                     */
                    std::string GetFinishedTime() const;

                    /**
                     * 设置结束时间
                     * @param _finishedTime 结束时间
                     * 
                     */
                    void SetFinishedTime(const std::string& _finishedTime);

                    /**
                     * 判断参数 FinishedTime 是否已赋值
                     * @return FinishedTime 是否已赋值
                     * 
                     */
                    bool FinishedTimeHasBeenSet() const;

                    /**
                     * 获取未完成任务
                     * @return UnfinishedTasks 未完成任务
                     * 
                     */
                    std::string GetUnfinishedTasks() const;

                    /**
                     * 设置未完成任务
                     * @param _unfinishedTasks 未完成任务
                     * 
                     */
                    void SetUnfinishedTasks(const std::string& _unfinishedTasks);

                    /**
                     * 判断参数 UnfinishedTasks 是否已赋值
                     * @return UnfinishedTasks 是否已赋值
                     * 
                     */
                    bool UnfinishedTasksHasBeenSet() const;

                    /**
                     * 获取进度
                     * @return Progress 进度
                     * 
                     */
                    std::string GetProgress() const;

                    /**
                     * 设置进度
                     * @param _progress 进度
                     * 
                     */
                    void SetProgress(const std::string& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return TaskErrMsg 错误信息
                     * 
                     */
                    std::string GetTaskErrMsg() const;

                    /**
                     * 设置错误信息
                     * @param _taskErrMsg 错误信息
                     * 
                     */
                    void SetTaskErrMsg(const std::string& _taskErrMsg);

                    /**
                     * 判断参数 TaskErrMsg 是否已赋值
                     * @return TaskErrMsg 是否已赋值
                     * 
                     */
                    bool TaskErrMsgHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
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
                     * 获取超时信息
                     * @return Timeout 超时信息
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置超时信息
                     * @param _timeout 超时信息
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取备份实例id
                     * @return BackupJobId 备份实例id
                     * 
                     */
                    int64_t GetBackupJobId() const;

                    /**
                     * 设置备份实例id
                     * @param _backupJobId 备份实例id
                     * 
                     */
                    void SetBackupJobId(const int64_t& _backupJobId);

                    /**
                     * 判断参数 BackupJobId 是否已赋值
                     * @return BackupJobId 是否已赋值
                     * 
                     */
                    bool BackupJobIdHasBeenSet() const;

                    /**
                     * 获取实例对应Snapshot的id
                     * @return TaskId 实例对应Snapshot的id
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置实例对应Snapshot的id
                     * @param _taskId 实例对应Snapshot的id
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 备份任务id
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 快照名称
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * 库名
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 备份对象
                     */
                    std::string m_backupObjects;
                    bool m_backupObjectsHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 快照结束时间
                     */
                    std::string m_snapshotFinishedTime;
                    bool m_snapshotFinishedTimeHasBeenSet;

                    /**
                     * 上传结束时间
                     */
                    std::string m_uploadFinishedTime;
                    bool m_uploadFinishedTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_finishedTime;
                    bool m_finishedTimeHasBeenSet;

                    /**
                     * 未完成任务
                     */
                    std::string m_unfinishedTasks;
                    bool m_unfinishedTasksHasBeenSet;

                    /**
                     * 进度
                     */
                    std::string m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_taskErrMsg;
                    bool m_taskErrMsgHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 超时信息
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 备份实例id
                     */
                    int64_t m_backupJobId;
                    bool m_backupJobIdHasBeenSet;

                    /**
                     * 实例对应Snapshot的id
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPSTATUS_H_
