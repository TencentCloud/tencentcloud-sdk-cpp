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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBETASKSRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBETASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TaskSimpleInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
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
                     * 获取任务概要列表。
                     * @return TaskSet 任务概要列表。
                     * 
                     */
                    std::vector<TaskSimpleInfo> GetTaskSet() const;

                    /**
                     * 判断参数 TaskSet 是否已赋值
                     * @return TaskSet 是否已赋值
                     * 
                     */
                    bool TaskSetHasBeenSet() const;

                    /**
                     * 获取翻页标识，当请求未返回所有数据，该字段表示下一条记录的 ID。当该字段为空字符串，说明已无更多数据。
                     * @return ScrollToken 翻页标识，当请求未返回所有数据，该字段表示下一条记录的 ID。当该字段为空字符串，说明已无更多数据。
                     * 
                     */
                    std::string GetScrollToken() const;

                    /**
                     * 判断参数 ScrollToken 是否已赋值
                     * @return ScrollToken 是否已赋值
                     * 
                     */
                    bool ScrollTokenHasBeenSet() const;

                    /**
                     * 获取符合过滤条件的记录总数。
                     * @return TotalCount 符合过滤条件的记录总数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 任务概要列表。
                     */
                    std::vector<TaskSimpleInfo> m_taskSet;
                    bool m_taskSetHasBeenSet;

                    /**
                     * 翻页标识，当请求未返回所有数据，该字段表示下一条记录的 ID。当该字段为空字符串，说明已无更多数据。
                     */
                    std::string m_scrollToken;
                    bool m_scrollTokenHasBeenSet;

                    /**
                     * 符合过滤条件的记录总数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBETASKSRESPONSE_H_
