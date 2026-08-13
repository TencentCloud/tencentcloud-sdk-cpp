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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRALERTSUMMARYRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRALERTSUMMARYRESPONSE_H_

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
                * DescribeEdrAlertSummary返回参数结构体
                */
                class DescribeEdrAlertSummaryResponse : public AbstractModel
                {
                public:
                    DescribeEdrAlertSummaryResponse();
                    ~DescribeEdrAlertSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>严重+高危待处理数（Level IN CRITICAL,HIGH，DB 内部值 1,5）</p>
                     * @return CriticalPendingCount <p>严重+高危待处理数（Level IN CRITICAL,HIGH，DB 内部值 1,5）</p>
                     * 
                     */
                    int64_t GetCriticalPendingCount() const;

                    /**
                     * 判断参数 CriticalPendingCount 是否已赋值
                     * @return CriticalPendingCount 是否已赋值
                     * 
                     */
                    bool CriticalPendingCountHasBeenSet() const;

                    /**
                     * 获取<p>全部待处理数</p>
                     * @return TotalPendingCount <p>全部待处理数</p>
                     * 
                     */
                    int64_t GetTotalPendingCount() const;

                    /**
                     * 判断参数 TotalPendingCount 是否已赋值
                     * @return TotalPendingCount 是否已赋值
                     * 
                     */
                    bool TotalPendingCountHasBeenSet() const;

                private:

                    /**
                     * <p>严重+高危待处理数（Level IN CRITICAL,HIGH，DB 内部值 1,5）</p>
                     */
                    int64_t m_criticalPendingCount;
                    bool m_criticalPendingCountHasBeenSet;

                    /**
                     * <p>全部待处理数</p>
                     */
                    int64_t m_totalPendingCount;
                    bool m_totalPendingCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRALERTSUMMARYRESPONSE_H_
