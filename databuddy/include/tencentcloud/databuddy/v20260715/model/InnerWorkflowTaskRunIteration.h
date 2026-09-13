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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_INNERWORKFLOWTASKRUNITERATION_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_INNERWORKFLOWTASKRUNITERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/InnerWorkflowTaskRunIterationBrief.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 内嵌工作流单次迭代运行信息
                */
                class InnerWorkflowTaskRunIteration : public AbstractModel
                {
                public:
                    InnerWorkflowTaskRunIteration();
                    ~InnerWorkflowTaskRunIteration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>内嵌工作流运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowRunId <p>内嵌工作流运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置<p>内嵌工作流运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowRunId <p>内嵌工作流运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowRunId(const std::string& _workflowRunId);

                    /**
                     * 判断参数 WorkflowRunId 是否已赋值
                     * @return WorkflowRunId 是否已赋值
                     * 
                     */
                    bool WorkflowRunIdHasBeenSet() const;

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
                     * 获取<p>运行状态（参考工作流运行状态枚举）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunState <p>运行状态（参考工作流运行状态枚举）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunState() const;

                    /**
                     * 设置<p>运行状态（参考工作流运行状态枚举）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runState <p>运行状态（参考工作流运行状态枚举）</p>
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
                     * @return WorkflowParams <p>运行参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowParams() const;

                    /**
                     * 设置<p>运行参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowParams <p>运行参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowParams(const std::string& _workflowParams);

                    /**
                     * 判断参数 WorkflowParams 是否已赋值
                     * @return WorkflowParams 是否已赋值
                     * 
                     */
                    bool WorkflowParamsHasBeenSet() const;

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

                    /**
                     * 获取<p>内嵌工作流内部的任务运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InnerTaskRun <p>内嵌工作流内部的任务运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InnerWorkflowTaskRunIterationBrief GetInnerTaskRun() const;

                    /**
                     * 设置<p>内嵌工作流内部的任务运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _innerTaskRun <p>内嵌工作流内部的任务运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInnerTaskRun(const InnerWorkflowTaskRunIterationBrief& _innerTaskRun);

                    /**
                     * 判断参数 InnerTaskRun 是否已赋值
                     * @return InnerTaskRun 是否已赋值
                     * 
                     */
                    bool InnerTaskRunHasBeenSet() const;

                private:

                    /**
                     * <p>内嵌工作流运行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

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
                     * <p>运行状态（参考工作流运行状态枚举）</p>
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
                    std::string m_workflowParams;
                    bool m_workflowParamsHasBeenSet;

                    /**
                     * <p>错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorCodeString;
                    bool m_errorCodeStringHasBeenSet;

                    /**
                     * <p>内嵌工作流内部的任务运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InnerWorkflowTaskRunIterationBrief m_innerTaskRun;
                    bool m_innerTaskRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_INNERWORKFLOWTASKRUNITERATION_H_
