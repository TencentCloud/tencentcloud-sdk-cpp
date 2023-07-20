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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DRINSTANCEOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DRINSTANCEOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 试运行记录
                */
                class DrInstanceOpsDto : public AbstractModel
                {
                public:
                    DrInstanceOpsDto();
                    ~DrInstanceOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskSource 任务来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskSource() const;

                    /**
                     * 设置任务来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskSource 任务来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskSource(const std::string& _taskSource);

                    /**
                     * 判断参数 TaskSource 是否已赋值
                     * @return TaskSource 是否已赋值
                     * 
                     */
                    bool TaskSourceHasBeenSet() const;

                    /**
                     * 获取编排空间jobId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId 编排空间jobId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置编排空间jobId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobId 编排空间jobId
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取任务提交记录Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordId 任务提交记录Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRecordId() const;

                    /**
                     * 设置任务提交记录Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordId 任务提交记录Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecordId(const uint64_t& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取子任务记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SonRecordId 子任务记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSonRecordId() const;

                    /**
                     * 设置子任务记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sonRecordId 子任务记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSonRecordId(const uint64_t& _sonRecordId);

                    /**
                     * 判断参数 SonRecordId 是否已赋值
                     * @return SonRecordId 是否已赋值
                     * 
                     */
                    bool SonRecordIdHasBeenSet() const;

                    /**
                     * 获取任务实例Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 任务实例Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置任务实例Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 任务实例Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取编排空间为任务id, 开发空间为脚本id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 编排空间为任务id, 开发空间为脚本id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置编排空间为任务id, 开发空间为脚本id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 编排空间为任务id, 开发空间为脚本id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取脚本cos地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemotePath 脚本cos地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemotePath() const;

                    /**
                     * 设置脚本cos地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remotePath 脚本cos地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemotePath(const std::string& _remotePath);

                    /**
                     * 判断参数 RemotePath 是否已赋值
                     * @return RemotePath 是否已赋值
                     * 
                     */
                    bool RemotePathHasBeenSet() const;

                    /**
                     * 获取试运行内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptContent 试运行内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置试运行内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptContent 试运行内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScriptContent(const std::string& _scriptContent);

                    /**
                     * 判断参数 ScriptContent 是否已赋值
                     * @return ScriptContent 是否已赋值
                     * 
                     */
                    bool ScriptContentHasBeenSet() const;

                    /**
                     * 获取任务提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 任务提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 任务提交时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取任务启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 任务启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 任务启动时间
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
                     * 获取运行时长(秒)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 运行时长(秒)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置运行时长(秒)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration 运行时长(秒)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取试运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 试运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置试运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 试运行状态
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取编排空间为任务名称，开发空间为脚本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName 编排空间为任务名称，开发空间为脚本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置编排空间为任务名称，开发空间为脚本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName 编排空间为任务名称，开发空间为脚本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取试运行提交人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubmitUserName 试运行提交人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubmitUserName() const;

                    /**
                     * 设置试运行提交人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _submitUserName 试运行提交人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubmitUserName(const std::string& _submitUserName);

                    /**
                     * 判断参数 SubmitUserName 是否已赋值
                     * @return SubmitUserName 是否已赋值
                     * 
                     */
                    bool SubmitUserNameHasBeenSet() const;

                    /**
                     * 获取试运行提交人userId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubmitUserId 试运行提交人userId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubmitUserId() const;

                    /**
                     * 设置试运行提交人userId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _submitUserId 试运行提交人userId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubmitUserId(const std::string& _submitUserId);

                    /**
                     * 判断参数 SubmitUserId 是否已赋值
                     * @return SubmitUserId 是否已赋值
                     * 
                     */
                    bool SubmitUserIdHasBeenSet() const;

                    /**
                     * 获取任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取是否含有结果集
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasResultSet 是否含有结果集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHasResultSet() const;

                    /**
                     * 设置是否含有结果集
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasResultSet 是否含有结果集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHasResultSet(const bool& _hasResultSet);

                    /**
                     * 判断参数 HasResultSet 是否已赋值
                     * @return HasResultSet 是否已赋值
                     * 
                     */
                    bool HasResultSetHasBeenSet() const;

                private:

                    /**
                     * 任务来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskSource;
                    bool m_taskSourceHasBeenSet;

                    /**
                     * 编排空间jobId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 任务提交记录Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 子任务记录id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_sonRecordId;
                    bool m_sonRecordIdHasBeenSet;

                    /**
                     * 任务实例Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 编排空间为任务id, 开发空间为脚本id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 脚本cos地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remotePath;
                    bool m_remotePathHasBeenSet;

                    /**
                     * 试运行内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * 任务提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 运行时长(秒)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 试运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 编排空间为任务名称，开发空间为脚本名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 试运行提交人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_submitUserName;
                    bool m_submitUserNameHasBeenSet;

                    /**
                     * 试运行提交人userId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_submitUserId;
                    bool m_submitUserIdHasBeenSet;

                    /**
                     * 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 是否含有结果集
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hasResultSet;
                    bool m_hasResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DRINSTANCEOPSDTO_H_
