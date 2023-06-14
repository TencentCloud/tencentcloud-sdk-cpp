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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBEMULTIDEVTASKRESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBEMULTIDEVTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * DescribeMultiDevTask返回参数结构体
                */
                class DescribeMultiDevTaskResponse : public AbstractModel
                {
                public:
                    DescribeMultiDevTaskResponse();
                    ~DescribeMultiDevTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务 ID
                     * @return TaskId 任务 ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务是否完成。0 代表任务未开始，1 代表任务正在执行，2 代表任务已完成
                     * @return TaskStatus 任务是否完成。0 代表任务未开始，1 代表任务正在执行，2 代表任务已完成
                     * 
                     */
                    uint64_t GetTaskStatus() const;

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                private:

                    /**
                     * 任务 ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务是否完成。0 代表任务未开始，1 代表任务正在执行，2 代表任务已完成
                     */
                    uint64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBEMULTIDEVTASKRESPONSE_H_
