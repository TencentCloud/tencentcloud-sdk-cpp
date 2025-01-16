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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESTORESTATUS_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESTORESTATUS_H_

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
                * 恢复任务信息
                */
                class RestoreStatus : public AbstractModel
                {
                public:
                    RestoreStatus();
                    ~RestoreStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取恢复任务id
                     * @return JobId 恢复任务id
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 设置恢复任务id
                     * @param _jobId 恢复任务id
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
                     * 获取恢复任务标签
                     * @return Label 恢复任务标签
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置恢复任务标签
                     * @param _label 恢复任务标签
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取恢复任务时间戳
                     * @return Timestamp 恢复任务时间戳
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置恢复任务时间戳
                     * @param _timestamp 恢复任务时间戳
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取恢复任务所在库
                     * @return DbName 恢复任务所在库
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置恢复任务所在库
                     * @param _dbName 恢复任务所在库
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
                     * 获取恢复任务状态
                     * @return State 恢复任务状态
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置恢复任务状态
                     * @param _state 恢复任务状态
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
                     * 获取恢复时是否允许导入
                     * @return AllowLoad 恢复时是否允许导入
                     * 
                     */
                    bool GetAllowLoad() const;

                    /**
                     * 设置恢复时是否允许导入
                     * @param _allowLoad 恢复时是否允许导入
                     * 
                     */
                    void SetAllowLoad(const bool& _allowLoad);

                    /**
                     * 判断参数 AllowLoad 是否已赋值
                     * @return AllowLoad 是否已赋值
                     * 
                     */
                    bool AllowLoadHasBeenSet() const;

                    /**
                     * 获取副本数
                     * @return ReplicationNum 副本数
                     * 
                     */
                    std::string GetReplicationNum() const;

                    /**
                     * 设置副本数
                     * @param _replicationNum 副本数
                     * 
                     */
                    void SetReplicationNum(const std::string& _replicationNum);

                    /**
                     * 判断参数 ReplicationNum 是否已赋值
                     * @return ReplicationNum 是否已赋值
                     * 
                     */
                    bool ReplicationNumHasBeenSet() const;

                    /**
                     * 获取副本数
                     * @return ReplicaAllocation 副本数
                     * 
                     */
                    std::string GetReplicaAllocation() const;

                    /**
                     * 设置副本数
                     * @param _replicaAllocation 副本数
                     * 
                     */
                    void SetReplicaAllocation(const std::string& _replicaAllocation);

                    /**
                     * 判断参数 ReplicaAllocation 是否已赋值
                     * @return ReplicaAllocation 是否已赋值
                     * 
                     */
                    bool ReplicaAllocationHasBeenSet() const;

                    /**
                     * 获取恢复对象
                     * @return RestoreObjects 恢复对象
                     * 
                     */
                    std::string GetRestoreObjects() const;

                    /**
                     * 设置恢复对象
                     * @param _restoreObjects 恢复对象
                     * 
                     */
                    void SetRestoreObjects(const std::string& _restoreObjects);

                    /**
                     * 判断参数 RestoreObjects 是否已赋值
                     * @return RestoreObjects 是否已赋值
                     * 
                     */
                    bool RestoreObjectsHasBeenSet() const;

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
                     * 获取元数据准备时间
                     * @return MetaPreparedTime 元数据准备时间
                     * 
                     */
                    std::string GetMetaPreparedTime() const;

                    /**
                     * 设置元数据准备时间
                     * @param _metaPreparedTime 元数据准备时间
                     * 
                     */
                    void SetMetaPreparedTime(const std::string& _metaPreparedTime);

                    /**
                     * 判断参数 MetaPreparedTime 是否已赋值
                     * @return MetaPreparedTime 是否已赋值
                     * 
                     */
                    bool MetaPreparedTimeHasBeenSet() const;

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
                     * 获取下载结束时间
                     * @return DownloadFinishedTime 下载结束时间
                     * 
                     */
                    std::string GetDownloadFinishedTime() const;

                    /**
                     * 设置下载结束时间
                     * @param _downloadFinishedTime 下载结束时间
                     * 
                     */
                    void SetDownloadFinishedTime(const std::string& _downloadFinishedTime);

                    /**
                     * 判断参数 DownloadFinishedTime 是否已赋值
                     * @return DownloadFinishedTime 是否已赋值
                     * 
                     */
                    bool DownloadFinishedTimeHasBeenSet() const;

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
                     * 获取作业超时时间
                     * @return Timeout 作业超时时间
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置作业超时时间
                     * @param _timeout 作业超时时间
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
                     * 获取是否保持源表中的副本数
                     * @return ReserveReplica 是否保持源表中的副本数
                     * 
                     */
                    bool GetReserveReplica() const;

                    /**
                     * 设置是否保持源表中的副本数
                     * @param _reserveReplica 是否保持源表中的副本数
                     * 
                     */
                    void SetReserveReplica(const bool& _reserveReplica);

                    /**
                     * 判断参数 ReserveReplica 是否已赋值
                     * @return ReserveReplica 是否已赋值
                     * 
                     */
                    bool ReserveReplicaHasBeenSet() const;

                    /**
                     * 获取是否保持源表中的动态分区
                     * @return ReserveDynamicPartitionEnable 是否保持源表中的动态分区
                     * 
                     */
                    bool GetReserveDynamicPartitionEnable() const;

                    /**
                     * 设置是否保持源表中的动态分区
                     * @param _reserveDynamicPartitionEnable 是否保持源表中的动态分区
                     * 
                     */
                    void SetReserveDynamicPartitionEnable(const bool& _reserveDynamicPartitionEnable);

                    /**
                     * 判断参数 ReserveDynamicPartitionEnable 是否已赋值
                     * @return ReserveDynamicPartitionEnable 是否已赋值
                     * 
                     */
                    bool ReserveDynamicPartitionEnableHasBeenSet() const;

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
                     * 获取实例对应snapshot的id
                     * @return TaskId 实例对应snapshot的id
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置实例对应snapshot的id
                     * @param _taskId 实例对应snapshot的id
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
                     * 恢复任务id
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 恢复任务标签
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 恢复任务时间戳
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 恢复任务所在库
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 恢复任务状态
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 恢复时是否允许导入
                     */
                    bool m_allowLoad;
                    bool m_allowLoadHasBeenSet;

                    /**
                     * 副本数
                     */
                    std::string m_replicationNum;
                    bool m_replicationNumHasBeenSet;

                    /**
                     * 副本数
                     */
                    std::string m_replicaAllocation;
                    bool m_replicaAllocationHasBeenSet;

                    /**
                     * 恢复对象
                     */
                    std::string m_restoreObjects;
                    bool m_restoreObjectsHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 元数据准备时间
                     */
                    std::string m_metaPreparedTime;
                    bool m_metaPreparedTimeHasBeenSet;

                    /**
                     * 快照结束时间
                     */
                    std::string m_snapshotFinishedTime;
                    bool m_snapshotFinishedTimeHasBeenSet;

                    /**
                     * 下载结束时间
                     */
                    std::string m_downloadFinishedTime;
                    bool m_downloadFinishedTimeHasBeenSet;

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
                     * 作业超时时间
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 是否保持源表中的副本数
                     */
                    bool m_reserveReplica;
                    bool m_reserveReplicaHasBeenSet;

                    /**
                     * 是否保持源表中的动态分区
                     */
                    bool m_reserveDynamicPartitionEnable;
                    bool m_reserveDynamicPartitionEnableHasBeenSet;

                    /**
                     * 备份实例id
                     */
                    int64_t m_backupJobId;
                    bool m_backupJobIdHasBeenSet;

                    /**
                     * 实例对应snapshot的id
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESTORESTATUS_H_
