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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINTEGRATETASKRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINTEGRATETASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeIntegrateTask返回参数结构体
                */
                class DescribeIntegrateTaskResponse : public AbstractModel
                {
                public:
                    DescribeIntegrateTaskResponse();
                    ~DescribeIntegrateTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当前步骤
                     * @return CurrentStep 当前步骤
                     * 
                     */
                    std::string GetCurrentStep() const;

                    /**
                     * 判断参数 CurrentStep 是否已赋值
                     * @return CurrentStep 是否已赋值
                     * 
                     */
                    bool CurrentStepHasBeenSet() const;

                    /**
                     * 获取当前进度
                     * @return CurrentProgress 当前进度
                     * 
                     */
                    std::string GetCurrentProgress() const;

                    /**
                     * 判断参数 CurrentProgress 是否已赋值
                     * @return CurrentProgress 是否已赋值
                     * 
                     */
                    bool CurrentProgressHasBeenSet() const;

                    /**
                     * 获取任务状态
                     * @return TaskStatus 任务状态
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                private:

                    /**
                     * 当前步骤
                     */
                    std::string m_currentStep;
                    bool m_currentStepHasBeenSet;

                    /**
                     * 当前进度
                     */
                    std::string m_currentProgress;
                    bool m_currentProgressHasBeenSet;

                    /**
                     * 任务状态
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINTEGRATETASKRESPONSE_H_
