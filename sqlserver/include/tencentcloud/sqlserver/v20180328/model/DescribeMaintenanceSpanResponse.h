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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEMAINTENANCESPANRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEMAINTENANCESPANRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeMaintenanceSpan返回参数结构体
                */
                class DescribeMaintenanceSpanResponse : public AbstractModel
                {
                public:
                    DescribeMaintenanceSpanResponse();
                    ~DescribeMaintenanceSpanResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取以周为单位，表示周几允许维护，例如：[1,2,3,4,5,6,7]表示周一到周日均为可维护日。
                     * @return Weekly 以周为单位，表示周几允许维护，例如：[1,2,3,4,5,6,7]表示周一到周日均为可维护日。
                     * 
                     */
                    std::vector<int64_t> GetWeekly() const;

                    /**
                     * 判断参数 Weekly 是否已赋值
                     * @return Weekly 是否已赋值
                     * 
                     */
                    bool WeeklyHasBeenSet() const;

                    /**
                     * 获取每天可维护的开始时间，例如：10:24标识可维护时间窗10点24分开始。
                     * @return StartTime 每天可维护的开始时间，例如：10:24标识可维护时间窗10点24分开始。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取每天可维护的持续时间，单位是h，例如：1 表示从可维护的开始时间起持续1小时。
                     * @return Span 每天可维护的持续时间，单位是h，例如：1 表示从可维护的开始时间起持续1小时。
                     * 
                     */
                    uint64_t GetSpan() const;

                    /**
                     * 判断参数 Span 是否已赋值
                     * @return Span 是否已赋值
                     * 
                     */
                    bool SpanHasBeenSet() const;

                private:

                    /**
                     * 以周为单位，表示周几允许维护，例如：[1,2,3,4,5,6,7]表示周一到周日均为可维护日。
                     */
                    std::vector<int64_t> m_weekly;
                    bool m_weeklyHasBeenSet;

                    /**
                     * 每天可维护的开始时间，例如：10:24标识可维护时间窗10点24分开始。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 每天可维护的持续时间，单位是h，例如：1 表示从可维护的开始时间起持续1小时。
                     */
                    uint64_t m_span;
                    bool m_spanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEMAINTENANCESPANRESPONSE_H_
