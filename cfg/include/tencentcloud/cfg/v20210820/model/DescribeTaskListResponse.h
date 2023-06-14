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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETASKLISTRESPONSE_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETASKLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/TaskListItem.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTaskList返回参数结构体
                */
                class DescribeTaskListResponse : public AbstractModel
                {
                public:
                    DescribeTaskListResponse();
                    ~DescribeTaskListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取无
                     * @return TaskList 无
                     * 
                     */
                    std::vector<TaskListItem> GetTaskList() const;

                    /**
                     * 判断参数 TaskList 是否已赋值
                     * @return TaskList 是否已赋值
                     * 
                     */
                    bool TaskListHasBeenSet() const;

                    /**
                     * 获取列表数量
                     * @return Total 列表数量
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    std::vector<TaskListItem> m_taskList;
                    bool m_taskListHasBeenSet;

                    /**
                     * 列表数量
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETASKLISTRESPONSE_H_
