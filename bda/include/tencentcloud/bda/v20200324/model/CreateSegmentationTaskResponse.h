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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_CREATESEGMENTATIONTASKRESPONSE_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_CREATESEGMENTATIONTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * CreateSegmentationTask返回参数结构体
                */
                class CreateSegmentationTaskResponse : public AbstractModel
                {
                public:
                    CreateSegmentationTaskResponse();
                    ~CreateSegmentationTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务标识ID,可以用与追溯任务状态，查看任务结果
                     * @return TaskID 任务标识ID,可以用与追溯任务状态，查看任务结果
                     * 
                     */
                    std::string GetTaskID() const;

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取预估处理时间，单位为秒
                     * @return EstimatedProcessingTime 预估处理时间，单位为秒
                     * 
                     */
                    double GetEstimatedProcessingTime() const;

                    /**
                     * 判断参数 EstimatedProcessingTime 是否已赋值
                     * @return EstimatedProcessingTime 是否已赋值
                     * 
                     */
                    bool EstimatedProcessingTimeHasBeenSet() const;

                private:

                    /**
                     * 任务标识ID,可以用与追溯任务状态，查看任务结果
                     */
                    std::string m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * 预估处理时间，单位为秒
                     */
                    double m_estimatedProcessingTime;
                    bool m_estimatedProcessingTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_CREATESEGMENTATIONTASKRESPONSE_H_
