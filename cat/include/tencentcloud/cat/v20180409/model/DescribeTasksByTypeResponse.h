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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBETASKSBYTYPERESPONSE_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBETASKSBYTYPERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cat/v20180409/model/TaskAlarm.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * DescribeTasksByType返回参数结构体
                */
                class DescribeTasksByTypeResponse : public AbstractModel
                {
                public:
                    DescribeTasksByTypeResponse();
                    ~DescribeTasksByTypeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的总任务数
                     * @return TotalCount 符合条件的总任务数
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取任务列表
                     * @return Tasks 任务列表
                     */
                    std::vector<TaskAlarm> GetTasks() const;

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     */
                    bool TasksHasBeenSet() const;

                private:

                    /**
                     * 符合条件的总任务数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 任务列表
                     */
                    std::vector<TaskAlarm> m_tasks;
                    bool m_tasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBETASKSBYTYPERESPONSE_H_
