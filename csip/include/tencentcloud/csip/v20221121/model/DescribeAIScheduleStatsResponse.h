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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAISCHEDULESTATSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAISCHEDULESTATSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAIScheduleStats返回参数结构体
                */
                class DescribeAIScheduleStatsResponse : public AbstractModel
                {
                public:
                    DescribeAIScheduleStatsResponse();
                    ~DescribeAIScheduleStatsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>定时任务总数。</p>
                     * @return ScheduleCount <p>定时任务总数。</p>
                     * 
                     */
                    int64_t GetScheduleCount() const;

                    /**
                     * 判断参数 ScheduleCount 是否已赋值
                     * @return ScheduleCount 是否已赋值
                     * 
                     */
                    bool ScheduleCountHasBeenSet() const;

                    /**
                     * 获取<p>当前运行中的任务数量。</p>
                     * @return RunningTaskCount <p>当前运行中的任务数量。</p>
                     * 
                     */
                    int64_t GetRunningTaskCount() const;

                    /**
                     * 判断参数 RunningTaskCount 是否已赋值
                     * @return RunningTaskCount 是否已赋值
                     * 
                     */
                    bool RunningTaskCountHasBeenSet() const;

                private:

                    /**
                     * <p>定时任务总数。</p>
                     */
                    int64_t m_scheduleCount;
                    bool m_scheduleCountHasBeenSet;

                    /**
                     * <p>当前运行中的任务数量。</p>
                     */
                    int64_t m_runningTaskCount;
                    bool m_runningTaskCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAISCHEDULESTATSRESPONSE_H_
