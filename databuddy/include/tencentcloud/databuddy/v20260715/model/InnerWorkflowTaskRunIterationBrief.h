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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_INNERWORKFLOWTASKRUNITERATIONBRIEF_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_INNERWORKFLOWTASKRUNITERATIONBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 内嵌工作流迭代中的任务运行简要信息
                */
                class InnerWorkflowTaskRunIterationBrief : public AbstractModel
                {
                public:
                    InnerWorkflowTaskRunIterationBrief();
                    ~InnerWorkflowTaskRunIterationBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowTaskRunId <p>任务运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowTaskRunId() const;

                    /**
                     * 设置<p>任务运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowTaskRunId <p>任务运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowTaskRunId(const std::string& _workflowTaskRunId);

                    /**
                     * 判断参数 WorkflowTaskRunId 是否已赋值
                     * @return WorkflowTaskRunId 是否已赋值
                     * 
                     */
                    bool WorkflowTaskRunIdHasBeenSet() const;

                    /**
                     * 获取<p>迭代序号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IterationIndex <p>迭代序号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIterationIndex() const;

                    /**
                     * 设置<p>迭代序号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iterationIndex <p>迭代序号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIterationIndex(const std::string& _iterationIndex);

                    /**
                     * 判断参数 IterationIndex 是否已赋值
                     * @return IterationIndex 是否已赋值
                     * 
                     */
                    bool IterationIndexHasBeenSet() const;

                    /**
                     * 获取<p>运行开始时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunStartTime <p>运行开始时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunStartTime() const;

                    /**
                     * 设置<p>运行开始时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runStartTime <p>运行开始时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunStartTime(const std::string& _runStartTime);

                    /**
                     * 判断参数 RunStartTime 是否已赋值
                     * @return RunStartTime 是否已赋值
                     * 
                     */
                    bool RunStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>运行结束时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunEndTime <p>运行结束时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunEndTime() const;

                    /**
                     * 设置<p>运行结束时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runEndTime <p>运行结束时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunEndTime(const std::string& _runEndTime);

                    /**
                     * 判断参数 RunEndTime 是否已赋值
                     * @return RunEndTime 是否已赋值
                     * 
                     */
                    bool RunEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>运行状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunState <p>运行状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunState() const;

                    /**
                     * 设置<p>运行状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runState <p>运行状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunState(const std::string& _runState);

                    /**
                     * 判断参数 RunState 是否已赋值
                     * @return RunState 是否已赋值
                     * 
                     */
                    bool RunStateHasBeenSet() const;

                    /**
                     * 获取<p>运行时长，单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunCostTime <p>运行时长，单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunCostTime() const;

                    /**
                     * 设置<p>运行时长，单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runCostTime <p>运行时长，单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunCostTime(const std::string& _runCostTime);

                    /**
                     * 判断参数 RunCostTime 是否已赋值
                     * @return RunCostTime 是否已赋值
                     * 
                     */
                    bool RunCostTimeHasBeenSet() const;

                    /**
                     * 获取<p>运行参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskParams <p>运行参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskParams() const;

                    /**
                     * 设置<p>运行参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskParams <p>运行参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskParams(const std::string& _taskParams);

                    /**
                     * 判断参数 TaskParams 是否已赋值
                     * @return TaskParams 是否已赋值
                     * 
                     */
                    bool TaskParamsHasBeenSet() const;

                    /**
                     * 获取<p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCodeString <p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorCodeString() const;

                    /**
                     * 设置<p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorCodeString <p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorCodeString(const std::string& _errorCodeString);

                    /**
                     * 判断参数 ErrorCodeString 是否已赋值
                     * @return ErrorCodeString 是否已赋值
                     * 
                     */
                    bool ErrorCodeStringHasBeenSet() const;

                private:

                    /**
                     * <p>任务运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowTaskRunId;
                    bool m_workflowTaskRunIdHasBeenSet;

                    /**
                     * <p>迭代序号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iterationIndex;
                    bool m_iterationIndexHasBeenSet;

                    /**
                     * <p>运行开始时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runStartTime;
                    bool m_runStartTimeHasBeenSet;

                    /**
                     * <p>运行结束时间，单位：毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runEndTime;
                    bool m_runEndTimeHasBeenSet;

                    /**
                     * <p>运行状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runState;
                    bool m_runStateHasBeenSet;

                    /**
                     * <p>运行时长，单位：秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runCostTime;
                    bool m_runCostTimeHasBeenSet;

                    /**
                     * <p>运行参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskParams;
                    bool m_taskParamsHasBeenSet;

                    /**
                     * <p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorCodeString;
                    bool m_errorCodeStringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_INNERWORKFLOWTASKRUNITERATIONBRIEF_H_
