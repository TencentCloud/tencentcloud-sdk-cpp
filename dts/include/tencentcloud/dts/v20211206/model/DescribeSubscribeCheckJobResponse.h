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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESUBSCRIBECHECKJOBRESPONSE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESUBSCRIBECHECKJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/SubscribeCheckStepInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeSubscribeCheckJob返回参数结构体
                */
                class DescribeSubscribeCheckJobResponse : public AbstractModel
                {
                public:
                    DescribeSubscribeCheckJobResponse();
                    ~DescribeSubscribeCheckJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取订阅实例ID
                     * @return SubscribeId 订阅实例ID
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     * 
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取失败或者报错提示，成功则提示success。
                     * @return Message 失败或者报错提示，成功则提示success。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取任务运行状态，可能值为 running,failed,success
                     * @return Status 任务运行状态，可能值为 running,failed,success
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
                     * 获取当前总体进度，范围 0~100
                     * @return Progress 当前总体进度，范围 0~100
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取校验总步骤数
                     * @return StepAll 校验总步骤数
                     * 
                     */
                    uint64_t GetStepAll() const;

                    /**
                     * 判断参数 StepAll 是否已赋值
                     * @return StepAll 是否已赋值
                     * 
                     */
                    bool StepAllHasBeenSet() const;

                    /**
                     * 获取当前执行步骤
                     * @return StepNow 当前执行步骤
                     * 
                     */
                    uint64_t GetStepNow() const;

                    /**
                     * 判断参数 StepNow 是否已赋值
                     * @return StepNow 是否已赋值
                     * 
                     */
                    bool StepNowHasBeenSet() const;

                    /**
                     * 获取各个步骤运行状态
                     * @return Steps 各个步骤运行状态
                     * 
                     */
                    std::vector<SubscribeCheckStepInfo> GetSteps() const;

                    /**
                     * 判断参数 Steps 是否已赋值
                     * @return Steps 是否已赋值
                     * 
                     */
                    bool StepsHasBeenSet() const;

                private:

                    /**
                     * 订阅实例ID
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * 失败或者报错提示，成功则提示success。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 任务运行状态，可能值为 running,failed,success
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 当前总体进度，范围 0~100
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 校验总步骤数
                     */
                    uint64_t m_stepAll;
                    bool m_stepAllHasBeenSet;

                    /**
                     * 当前执行步骤
                     */
                    uint64_t m_stepNow;
                    bool m_stepNowHasBeenSet;

                    /**
                     * 各个步骤运行状态
                     */
                    std::vector<SubscribeCheckStepInfo> m_steps;
                    bool m_stepsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESUBSCRIBECHECKJOBRESPONSE_H_
