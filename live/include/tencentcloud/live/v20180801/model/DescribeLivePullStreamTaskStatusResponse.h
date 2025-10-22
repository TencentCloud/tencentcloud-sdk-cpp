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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPULLSTREAMTASKSTATUSRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPULLSTREAMTASKSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/TaskStatusInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLivePullStreamTaskStatus返回参数结构体
                */
                class DescribeLivePullStreamTaskStatusResponse : public AbstractModel
                {
                public:
                    DescribeLivePullStreamTaskStatusResponse();
                    ~DescribeLivePullStreamTaskStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务状态信息。
                     * @return TaskStatusInfo 任务状态信息。
                     * 
                     */
                    TaskStatusInfo GetTaskStatusInfo() const;

                    /**
                     * 判断参数 TaskStatusInfo 是否已赋值
                     * @return TaskStatusInfo 是否已赋值
                     * 
                     */
                    bool TaskStatusInfoHasBeenSet() const;

                private:

                    /**
                     * 任务状态信息。
                     */
                    TaskStatusInfo m_taskStatusInfo;
                    bool m_taskStatusInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPULLSTREAMTASKSTATUSRESPONSE_H_
