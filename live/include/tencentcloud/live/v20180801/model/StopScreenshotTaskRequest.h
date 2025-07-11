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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_STOPSCREENSHOTTASKREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_STOPSCREENSHOTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * StopScreenshotTask请求参数结构体
                */
                class StopScreenshotTaskRequest : public AbstractModel
                {
                public:
                    StopScreenshotTaskRequest();
                    ~StopScreenshotTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取截图任务ID。
                     * @return TaskId 截图任务ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置截图任务ID。
                     * @param _taskId 截图任务ID。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 截图任务ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_STOPSCREENSHOTTASKREQUEST_H_
