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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_PROCESSPROGRESS_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_PROCESSPROGRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/StepDetailInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 任务步骤信息
                */
                class ProcessProgress : public AbstractModel
                {
                public:
                    ProcessProgress();
                    ~ProcessProgress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取步骤的状态， 包括：notStarted(未开始)、running(运行中)、success(成功)、failed(失败)等
                     * @return Status 步骤的状态， 包括：notStarted(未开始)、running(运行中)、success(成功)、failed(失败)等
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置步骤的状态， 包括：notStarted(未开始)、running(运行中)、success(成功)、failed(失败)等
                     * @param _status 步骤的状态， 包括：notStarted(未开始)、running(运行中)、success(成功)、failed(失败)等
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
                     * 获取进度信息
                     * @return Percent 进度信息
                     * 
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 设置进度信息
                     * @param _percent 进度信息
                     * 
                     */
                    void SetPercent(const uint64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取总的步骤数
                     * @return StepAll 总的步骤数
                     * 
                     */
                    uint64_t GetStepAll() const;

                    /**
                     * 设置总的步骤数
                     * @param _stepAll 总的步骤数
                     * 
                     */
                    void SetStepAll(const uint64_t& _stepAll);

                    /**
                     * 判断参数 StepAll 是否已赋值
                     * @return StepAll 是否已赋值
                     * 
                     */
                    bool StepAllHasBeenSet() const;

                    /**
                     * 获取当前进行的步骤
                     * @return StepNow 当前进行的步骤
                     * 
                     */
                    uint64_t GetStepNow() const;

                    /**
                     * 设置当前进行的步骤
                     * @param _stepNow 当前进行的步骤
                     * 
                     */
                    void SetStepNow(const uint64_t& _stepNow);

                    /**
                     * 判断参数 StepNow 是否已赋值
                     * @return StepNow 是否已赋值
                     * 
                     */
                    bool StepNowHasBeenSet() const;

                    /**
                     * 获取当前步骤输出提示信息
                     * @return Message 当前步骤输出提示信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置当前步骤输出提示信息
                     * @param _message 当前步骤输出提示信息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取步骤信息
                     * @return Steps 步骤信息
                     * 
                     */
                    std::vector<StepDetailInfo> GetSteps() const;

                    /**
                     * 设置步骤信息
                     * @param _steps 步骤信息
                     * 
                     */
                    void SetSteps(const std::vector<StepDetailInfo>& _steps);

                    /**
                     * 判断参数 Steps 是否已赋值
                     * @return Steps 是否已赋值
                     * 
                     */
                    bool StepsHasBeenSet() const;

                private:

                    /**
                     * 步骤的状态， 包括：notStarted(未开始)、running(运行中)、success(成功)、failed(失败)等
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 进度信息
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 总的步骤数
                     */
                    uint64_t m_stepAll;
                    bool m_stepAllHasBeenSet;

                    /**
                     * 当前进行的步骤
                     */
                    uint64_t m_stepNow;
                    bool m_stepNowHasBeenSet;

                    /**
                     * 当前步骤输出提示信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 步骤信息
                     */
                    std::vector<StepDetailInfo> m_steps;
                    bool m_stepsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_PROCESSPROGRESS_H_
