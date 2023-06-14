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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESCREENSHOTTASKRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESCREENSHOTTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/ScreenshotTask.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeScreenshotTask返回参数结构体
                */
                class DescribeScreenshotTaskResponse : public AbstractModel
                {
                public:
                    DescribeScreenshotTaskResponse();
                    ~DescribeScreenshotTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取翻页标识，当请求未返回所有数据，该字段表示下一条记录的 Token。当该字段为空，说明已无更多数据。
                     * @return ScrollToken 翻页标识，当请求未返回所有数据，该字段表示下一条记录的 Token。当该字段为空，说明已无更多数据。
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
                     * 获取截图任务列表。当该字段为空，说明已返回所有数据。
                     * @return TaskList 截图任务列表。当该字段为空，说明已返回所有数据。
                     * 
                     */
                    std::vector<ScreenshotTask> GetTaskList() const;

                    /**
                     * 判断参数 TaskList 是否已赋值
                     * @return TaskList 是否已赋值
                     * 
                     */
                    bool TaskListHasBeenSet() const;

                private:

                    /**
                     * 翻页标识，当请求未返回所有数据，该字段表示下一条记录的 Token。当该字段为空，说明已无更多数据。
                     */
                    std::string m_scrollToken;
                    bool m_scrollTokenHasBeenSet;

                    /**
                     * 截图任务列表。当该字段为空，说明已返回所有数据。
                     */
                    std::vector<ScreenshotTask> m_taskList;
                    bool m_taskListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESCREENSHOTTASKRESPONSE_H_
