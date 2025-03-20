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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_TASKDETAIL_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_TASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 任务的详情信息
                */
                class TaskDetail : public AbstractModel
                {
                public:
                    TaskDetail();
                    ~TaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前执行的子任务步骤名称。
                     * @return CurrentStep 当前执行的子任务步骤名称。
                     * 
                     */
                    std::string GetCurrentStep() const;

                    /**
                     * 设置当前执行的子任务步骤名称。
                     * @param _currentStep 当前执行的子任务步骤名称。
                     * 
                     */
                    void SetCurrentStep(const std::string& _currentStep);

                    /**
                     * 判断参数 CurrentStep 是否已赋值
                     * @return CurrentStep 是否已赋值
                     * 
                     */
                    bool CurrentStepHasBeenSet() const;

                    /**
                     * 获取当前任务所拥有的子步骤描述。
                     * @return AllSteps 当前任务所拥有的子步骤描述。
                     * 
                     */
                    std::string GetAllSteps() const;

                    /**
                     * 设置当前任务所拥有的子步骤描述。
                     * @param _allSteps 当前任务所拥有的子步骤描述。
                     * 
                     */
                    void SetAllSteps(const std::string& _allSteps);

                    /**
                     * 判断参数 AllSteps 是否已赋值
                     * @return AllSteps 是否已赋值
                     * 
                     */
                    bool AllStepsHasBeenSet() const;

                    /**
                     * 获取任务的输入参数。
                     * @return Input 任务的输入参数。
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置任务的输入参数。
                     * @param _input 任务的输入参数。
                     * 
                     */
                    void SetInput(const std::string& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取任务的输出参数。
                     * @return Output 任务的输出参数。
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置任务的输出参数。
                     * @param _output 任务的输出参数。
                     * 
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取指定实例配置完成变更后的切换时间，默认值：0
0:   此任务不需要切换
1：立即切换
2：指定时间切换
3：维护时间窗口内切换。
                     * @return SwitchTag 指定实例配置完成变更后的切换时间，默认值：0
0:   此任务不需要切换
1：立即切换
2：指定时间切换
3：维护时间窗口内切换。
                     * 
                     */
                    uint64_t GetSwitchTag() const;

                    /**
                     * 设置指定实例配置完成变更后的切换时间，默认值：0
0:   此任务不需要切换
1：立即切换
2：指定时间切换
3：维护时间窗口内切换。
                     * @param _switchTag 指定实例配置完成变更后的切换时间，默认值：0
0:   此任务不需要切换
1：立即切换
2：指定时间切换
3：维护时间窗口内切换。
                     * 
                     */
                    void SetSwitchTag(const uint64_t& _switchTag);

                    /**
                     * 判断参数 SwitchTag 是否已赋值
                     * @return SwitchTag 是否已赋值
                     * 
                     */
                    bool SwitchTagHasBeenSet() const;

                    /**
                     * 获取指定的切换时间。
                     * @return SwitchTime 指定的切换时间。
                     * 
                     */
                    std::string GetSwitchTime() const;

                    /**
                     * 设置指定的切换时间。
                     * @param _switchTime 指定的切换时间。
                     * 
                     */
                    void SetSwitchTime(const std::string& _switchTime);

                    /**
                     * 判断参数 SwitchTime 是否已赋值
                     * @return SwitchTime 是否已赋值
                     * 
                     */
                    bool SwitchTimeHasBeenSet() const;

                    /**
                     * 获取任务的提示信息。
                     * @return Message 任务的提示信息。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置任务的提示信息。
                     * @param _message 任务的提示信息。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 当前执行的子任务步骤名称。
                     */
                    std::string m_currentStep;
                    bool m_currentStepHasBeenSet;

                    /**
                     * 当前任务所拥有的子步骤描述。
                     */
                    std::string m_allSteps;
                    bool m_allStepsHasBeenSet;

                    /**
                     * 任务的输入参数。
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 任务的输出参数。
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * 指定实例配置完成变更后的切换时间，默认值：0
0:   此任务不需要切换
1：立即切换
2：指定时间切换
3：维护时间窗口内切换。
                     */
                    uint64_t m_switchTag;
                    bool m_switchTagHasBeenSet;

                    /**
                     * 指定的切换时间。
                     */
                    std::string m_switchTime;
                    bool m_switchTimeHasBeenSet;

                    /**
                     * 任务的提示信息。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_TASKDETAIL_H_
