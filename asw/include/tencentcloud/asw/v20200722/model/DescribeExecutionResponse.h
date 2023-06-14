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

#ifndef TENCENTCLOUD_ASW_V20200722_MODEL_DESCRIBEEXECUTIONRESPONSE_H_
#define TENCENTCLOUD_ASW_V20200722_MODEL_DESCRIBEEXECUTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asw
    {
        namespace V20200722
        {
            namespace Model
            {
                /**
                * DescribeExecution返回参数结构体
                */
                class DescribeExecutionResponse : public AbstractModel
                {
                public:
                    DescribeExecutionResponse();
                    ~DescribeExecutionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取执行资源名
                     * @return ExecutionResourceName 执行资源名
                     * 
                     */
                    std::string GetExecutionResourceName() const;

                    /**
                     * 判断参数 ExecutionResourceName 是否已赋值
                     * @return ExecutionResourceName 是否已赋值
                     * 
                     */
                    bool ExecutionResourceNameHasBeenSet() const;

                    /**
                     * 获取资源名称
                     * @return Name 资源名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取执行开始时间，毫秒
                     * @return StartDate 执行开始时间，毫秒
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取执行结束时间，毫秒
                     * @return StopDate 执行结束时间，毫秒
                     * 
                     */
                    std::string GetStopDate() const;

                    /**
                     * 判断参数 StopDate 是否已赋值
                     * @return StopDate 是否已赋值
                     * 
                     */
                    bool StopDateHasBeenSet() const;

                    /**
                     * 获取状态机资源名
                     * @return StateMachineResourceName 状态机资源名
                     * 
                     */
                    std::string GetStateMachineResourceName() const;

                    /**
                     * 判断参数 StateMachineResourceName 是否已赋值
                     * @return StateMachineResourceName 是否已赋值
                     * 
                     */
                    bool StateMachineResourceNameHasBeenSet() const;

                    /**
                     * 获取执行状态。INIT，RUNNING，SUCCEED，FAILED，TERMINATED
                     * @return Status 执行状态。INIT，RUNNING，SUCCEED，FAILED，TERMINATED
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取执行的输入
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Input 执行的输入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取执行的输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Output 执行的输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取启动执行时，状态机的定义
                     * @return ExecutionDefinition 启动执行时，状态机的定义
                     * 
                     */
                    std::string GetExecutionDefinition() const;

                    /**
                     * 判断参数 ExecutionDefinition 是否已赋值
                     * @return ExecutionDefinition 是否已赋值
                     * 
                     */
                    bool ExecutionDefinitionHasBeenSet() const;

                private:

                    /**
                     * 执行资源名
                     */
                    std::string m_executionResourceName;
                    bool m_executionResourceNameHasBeenSet;

                    /**
                     * 资源名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 执行开始时间，毫秒
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 执行结束时间，毫秒
                     */
                    std::string m_stopDate;
                    bool m_stopDateHasBeenSet;

                    /**
                     * 状态机资源名
                     */
                    std::string m_stateMachineResourceName;
                    bool m_stateMachineResourceNameHasBeenSet;

                    /**
                     * 执行状态。INIT，RUNNING，SUCCEED，FAILED，TERMINATED
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 执行的输入
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 执行的输出
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * 启动执行时，状态机的定义
                     */
                    std::string m_executionDefinition;
                    bool m_executionDefinitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASW_V20200722_MODEL_DESCRIBEEXECUTIONRESPONSE_H_
