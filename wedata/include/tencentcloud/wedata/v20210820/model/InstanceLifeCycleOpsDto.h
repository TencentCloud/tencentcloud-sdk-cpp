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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELIFECYCLEOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELIFECYCLEOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/InstanceLifeDetailDto.h>
#include <tencentcloud/wedata/v20210820/model/InstanceLogInfo.h>
#include <tencentcloud/wedata/v20210820/model/TaskTypeOpsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 实例生命周期详情
                */
                class InstanceLifeCycleOpsDto : public AbstractModel
                {
                public:
                    InstanceLifeCycleOpsDto();
                    ~InstanceLifeCycleOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务id
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
                     * 获取任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName 任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName 任务名
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
                     * 获取数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurRunDate 数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _curRunDate 数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     * 
                     */
                    bool CurRunDateHasBeenSet() const;

                    /**
                     * 获取实例生命次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LifeRound 实例生命次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLifeRound() const;

                    /**
                     * 设置实例生命次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifeRound 实例生命次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLifeRound(const int64_t& _lifeRound);

                    /**
                     * 判断参数 LifeRound 是否已赋值
                     * @return LifeRound 是否已赋值
                     * 
                     */
                    bool LifeRoundHasBeenSet() const;

                    /**
                     * 获取运行类型 重跑/补录/周期/非周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunType 运行类型 重跑/补录/周期/非周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunType() const;

                    /**
                     * 设置运行类型 重跑/补录/周期/非周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runType 运行类型 重跑/补录/周期/非周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunType(const std::string& _runType);

                    /**
                     * 判断参数 RunType 是否已赋值
                     * @return RunType 是否已赋值
                     * 
                     */
                    bool RunTypeHasBeenSet() const;

                    /**
                     * 获取重跑次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tries 重跑次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTries() const;

                    /**
                     * 设置重跑次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tries 重跑次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTries(const int64_t& _tries);

                    /**
                     * 判断参数 Tries 是否已赋值
                     * @return Tries 是否已赋值
                     * 
                     */
                    bool TriesHasBeenSet() const;

                    /**
                     * 获取实例生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceLifeDetailDtoList 实例生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceLifeDetailDto> GetInstanceLifeDetailDtoList() const;

                    /**
                     * 设置实例生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceLifeDetailDtoList 实例生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceLifeDetailDtoList(const std::vector<InstanceLifeDetailDto>& _instanceLifeDetailDtoList);

                    /**
                     * 判断参数 InstanceLifeDetailDtoList 是否已赋值
                     * @return InstanceLifeDetailDtoList 是否已赋值
                     * 
                     */
                    bool InstanceLifeDetailDtoListHasBeenSet() const;

                    /**
                     * 获取Runner运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunnerState Runner运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunnerState() const;

                    /**
                     * 设置Runner运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runnerState Runner运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunnerState(const std::string& _runnerState);

                    /**
                     * 判断参数 RunnerState 是否已赋值
                     * @return RunnerState 是否已赋值
                     * 
                     */
                    bool RunnerStateHasBeenSet() const;

                    /**
                     * 获取错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorDesc 错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorDesc() const;

                    /**
                     * 设置错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorDesc 错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorDesc(const std::string& _errorDesc);

                    /**
                     * 判断参数 ErrorDesc 是否已赋值
                     * @return ErrorDesc 是否已赋值
                     * 
                     */
                    bool ErrorDescHasBeenSet() const;

                    /**
                     * 获取错误告警级别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCodeLevel 错误告警级别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorCodeLevel() const;

                    /**
                     * 设置错误告警级别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorCodeLevel 错误告警级别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorCodeLevel(const std::string& _errorCodeLevel);

                    /**
                     * 判断参数 ErrorCodeLevel 是否已赋值
                     * @return ErrorCodeLevel 是否已赋值
                     * 
                     */
                    bool ErrorCodeLevelHasBeenSet() const;

                    /**
                     * 获取实例日志简略信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceLogListOpsDto 实例日志简略信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InstanceLogInfo GetInstanceLogListOpsDto() const;

                    /**
                     * 设置实例日志简略信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceLogListOpsDto 实例日志简略信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceLogListOpsDto(const InstanceLogInfo& _instanceLogListOpsDto);

                    /**
                     * 判断参数 InstanceLogListOpsDto 是否已赋值
                     * @return InstanceLogListOpsDto 是否已赋值
                     * 
                     */
                    bool InstanceLogListOpsDtoHasBeenSet() const;

                    /**
                     * 获取实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceState 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceState 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取调度运行方式, 0: 周期调度, 1: 空跑调度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleRunType 调度运行方式, 0: 周期调度, 1: 空跑调度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetScheduleRunType() const;

                    /**
                     * 设置调度运行方式, 0: 周期调度, 1: 空跑调度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleRunType 调度运行方式, 0: 周期调度, 1: 空跑调度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheduleRunType(const uint64_t& _scheduleRunType);

                    /**
                     * 判断参数 ScheduleRunType 是否已赋值
                     * @return ScheduleRunType 是否已赋值
                     * 
                     */
                    bool ScheduleRunTypeHasBeenSet() const;

                    /**
                     * 获取统一执行平台，下发执行Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionJobId 统一执行平台，下发执行Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionJobId() const;

                    /**
                     * 设置统一执行平台，下发执行Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionJobId 统一执行平台，下发执行Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionJobId(const std::string& _executionJobId);

                    /**
                     * 判断参数 ExecutionJobId 是否已赋值
                     * @return ExecutionJobId 是否已赋值
                     * 
                     */
                    bool ExecutionJobIdHasBeenSet() const;

                    /**
                     * 获取实例运行类型: 0: 普通运行, 1: 空跑运行
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceRunType 实例运行类型: 0: 普通运行, 1: 空跑运行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInstanceRunType() const;

                    /**
                     * 设置实例运行类型: 0: 普通运行, 1: 空跑运行
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceRunType 实例运行类型: 0: 普通运行, 1: 空跑运行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceRunType(const uint64_t& _instanceRunType);

                    /**
                     * 判断参数 InstanceRunType 是否已赋值
                     * @return InstanceRunType 是否已赋值
                     * 
                     */
                    bool InstanceRunTypeHasBeenSet() const;

                    /**
                     * 获取实例当前总生命周期数
                     * @return TotalLifeRound 实例当前总生命周期数
                     * 
                     */
                    int64_t GetTotalLifeRound() const;

                    /**
                     * 设置实例当前总生命周期数
                     * @param _totalLifeRound 实例当前总生命周期数
                     * 
                     */
                    void SetTotalLifeRound(const int64_t& _totalLifeRound);

                    /**
                     * 判断参数 TotalLifeRound 是否已赋值
                     * @return TotalLifeRound 是否已赋值
                     * 
                     */
                    bool TotalLifeRoundHasBeenSet() const;

                    /**
                     * 获取任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskTypeOpsDto GetTaskType() const;

                    /**
                     * 设置任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskType(const TaskTypeOpsDto& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * 实例生命次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lifeRound;
                    bool m_lifeRoundHasBeenSet;

                    /**
                     * 运行类型 重跑/补录/周期/非周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runType;
                    bool m_runTypeHasBeenSet;

                    /**
                     * 重跑次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tries;
                    bool m_triesHasBeenSet;

                    /**
                     * 实例生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceLifeDetailDto> m_instanceLifeDetailDtoList;
                    bool m_instanceLifeDetailDtoListHasBeenSet;

                    /**
                     * Runner运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runnerState;
                    bool m_runnerStateHasBeenSet;

                    /**
                     * 错误码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorDesc;
                    bool m_errorDescHasBeenSet;

                    /**
                     * 错误告警级别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorCodeLevel;
                    bool m_errorCodeLevelHasBeenSet;

                    /**
                     * 实例日志简略信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InstanceLogInfo m_instanceLogListOpsDto;
                    bool m_instanceLogListOpsDtoHasBeenSet;

                    /**
                     * 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * 调度运行方式, 0: 周期调度, 1: 空跑调度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_scheduleRunType;
                    bool m_scheduleRunTypeHasBeenSet;

                    /**
                     * 统一执行平台，下发执行Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionJobId;
                    bool m_executionJobIdHasBeenSet;

                    /**
                     * 实例运行类型: 0: 普通运行, 1: 空跑运行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_instanceRunType;
                    bool m_instanceRunTypeHasBeenSet;

                    /**
                     * 实例当前总生命周期数
                     */
                    int64_t m_totalLifeRound;
                    bool m_totalLifeRoundHasBeenSet;

                    /**
                     * 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskTypeOpsDto m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELIFECYCLEOPSDTO_H_
