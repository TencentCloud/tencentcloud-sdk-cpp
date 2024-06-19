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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKSOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKSOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/TasksOverview.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeTasksOverview返回参数结构体
                */
                class DescribeTasksOverviewResponse : public AbstractModel
                {
                public:
                    DescribeTasksOverviewResponse();
                    ~DescribeTasksOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取各类任务个数大于0
                     * @return TasksOverview 各类任务个数大于0
                     * 
                     */
                    TasksOverview GetTasksOverview() const;

                    /**
                     * 判断参数 TasksOverview 是否已赋值
                     * @return TasksOverview 是否已赋值
                     * 
                     */
                    bool TasksOverviewHasBeenSet() const;

                private:

                    /**
                     * 各类任务个数大于0
                     */
                    TasksOverview m_tasksOverview;
                    bool m_tasksOverviewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKSOVERVIEWRESPONSE_H_
