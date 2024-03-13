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

                private:

                    /**
                     * 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELIFECYCLEOPSDTO_H_
