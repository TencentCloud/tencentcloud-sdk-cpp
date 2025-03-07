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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONMONTHOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONMONTHOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/AllocationOverviewNode.h>
#include <tencentcloud/billing/v20180709/model/AllocationOverviewTotal.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeAllocationMonthOverview返回参数结构体
                */
                class DescribeAllocationMonthOverviewResponse : public AbstractModel
                {
                public:
                    DescribeAllocationMonthOverviewResponse();
                    ~DescribeAllocationMonthOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分账账单月概览详情
                     * @return Detail 分账账单月概览详情
                     * 
                     */
                    std::vector<AllocationOverviewNode> GetDetail() const;

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取分账账单概览金额汇总
                     * @return Total 分账账单概览金额汇总
                     * 
                     */
                    AllocationOverviewTotal GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 分账账单月概览详情
                     */
                    std::vector<AllocationOverviewNode> m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 分账账单概览金额汇总
                     */
                    AllocationOverviewTotal m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONMONTHOVERVIEWRESPONSE_H_
