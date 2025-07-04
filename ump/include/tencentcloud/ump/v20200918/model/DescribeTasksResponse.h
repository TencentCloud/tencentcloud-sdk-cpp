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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_DESCRIBETASKSRESPONSE_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_DESCRIBETASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ump/v20200918/model/Task.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * DescribeTasks返回参数结构体
                */
                class DescribeTasksResponse : public AbstractModel
                {
                public:
                    DescribeTasksResponse();
                    ~DescribeTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务列表
                     * @return Tasks 任务列表
                     * 
                     */
                    std::vector<Task> GetTasks() const;

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                private:

                    /**
                     * 任务列表
                     */
                    std::vector<Task> m_tasks;
                    bool m_tasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_DESCRIBETASKSRESPONSE_H_
