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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESCHEDULEDTASKLOGLISTRESPONSE_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESCHEDULEDTASKLOGLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/ScheduledTaskLogSummary.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/ScheduledTaskLogStats.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * DescribeScheduledTaskLogList返回参数结构体
                */
                class DescribeScheduledTaskLogListResponse : public AbstractModel
                {
                public:
                    DescribeScheduledTaskLogListResponse();
                    ~DescribeScheduledTaskLogListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>总数</p>
                     * @return TotalCount <p>总数</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>执行日志列表（分页后）</p>
                     * @return ScheduledTaskLogSet <p>执行日志列表（分页后）</p>
                     * 
                     */
                    std::vector<ScheduledTaskLogSummary> GetScheduledTaskLogSet() const;

                    /**
                     * 判断参数 ScheduledTaskLogSet 是否已赋值
                     * @return ScheduledTaskLogSet 是否已赋值
                     * 
                     */
                    bool ScheduledTaskLogSetHasBeenSet() const;

                    /**
                     * 获取<p>聚合统计（WithStats=true 时返回）</p>
                     * @return Stats <p>聚合统计（WithStats=true 时返回）</p>
                     * 
                     */
                    ScheduledTaskLogStats GetStats() const;

                    /**
                     * 判断参数 Stats 是否已赋值
                     * @return Stats 是否已赋值
                     * 
                     */
                    bool StatsHasBeenSet() const;

                private:

                    /**
                     * <p>总数</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>执行日志列表（分页后）</p>
                     */
                    std::vector<ScheduledTaskLogSummary> m_scheduledTaskLogSet;
                    bool m_scheduledTaskLogSetHasBeenSet;

                    /**
                     * <p>聚合统计（WithStats=true 时返回）</p>
                     */
                    ScheduledTaskLogStats m_stats;
                    bool m_statsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESCHEDULEDTASKLOGLISTRESPONSE_H_
