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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONTRENDBYMONTHRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONTRENDBYMONTHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/AllocationBillTrendDetail.h>
#include <tencentcloud/billing/v20180709/model/AllocationStat.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeAllocationTrendByMonth返回参数结构体
                */
                class DescribeAllocationTrendByMonthResponse : public AbstractModel
                {
                public:
                    DescribeAllocationTrendByMonthResponse();
                    ~DescribeAllocationTrendByMonthResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当月费用信息
                     * @return Current 当月费用信息
                     * 
                     */
                    AllocationBillTrendDetail GetCurrent() const;

                    /**
                     * 判断参数 Current 是否已赋值
                     * @return Current 是否已赋值
                     * 
                     */
                    bool CurrentHasBeenSet() const;

                    /**
                     * 获取之前月份费用信息
                     * @return Previous 之前月份费用信息
                     * 
                     */
                    std::vector<AllocationBillTrendDetail> GetPrevious() const;

                    /**
                     * 判断参数 Previous 是否已赋值
                     * @return Previous 是否已赋值
                     * 
                     */
                    bool PreviousHasBeenSet() const;

                    /**
                     * 获取费用统计信息
                     * @return Stat 费用统计信息
                     * 
                     */
                    AllocationStat GetStat() const;

                    /**
                     * 判断参数 Stat 是否已赋值
                     * @return Stat 是否已赋值
                     * 
                     */
                    bool StatHasBeenSet() const;

                private:

                    /**
                     * 当月费用信息
                     */
                    AllocationBillTrendDetail m_current;
                    bool m_currentHasBeenSet;

                    /**
                     * 之前月份费用信息
                     */
                    std::vector<AllocationBillTrendDetail> m_previous;
                    bool m_previousHasBeenSet;

                    /**
                     * 费用统计信息
                     */
                    AllocationStat m_stat;
                    bool m_statHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONTRENDBYMONTHRESPONSE_H_
