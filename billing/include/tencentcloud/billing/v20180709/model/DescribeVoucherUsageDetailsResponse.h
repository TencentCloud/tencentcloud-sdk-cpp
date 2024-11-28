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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERUSAGEDETAILSRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERUSAGEDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/UsageRecords.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeVoucherUsageDetails返回参数结构体
                */
                class DescribeVoucherUsageDetailsResponse : public AbstractModel
                {
                public:
                    DescribeVoucherUsageDetailsResponse();
                    ~DescribeVoucherUsageDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取券总数
                     * @return TotalCount 券总数
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
                     * 获取总已用金额（微分）
                     * @return TotalUsedAmount 总已用金额（微分）
                     * 
                     */
                    int64_t GetTotalUsedAmount() const;

                    /**
                     * 判断参数 TotalUsedAmount 是否已赋值
                     * @return TotalUsedAmount 是否已赋值
                     * 
                     */
                    bool TotalUsedAmountHasBeenSet() const;

                    /**
                     * 获取代金券使用记录细节
                     * @return UsageRecords 代金券使用记录细节
                     * 
                     */
                    std::vector<UsageRecords> GetUsageRecords() const;

                    /**
                     * 判断参数 UsageRecords 是否已赋值
                     * @return UsageRecords 是否已赋值
                     * 
                     */
                    bool UsageRecordsHasBeenSet() const;

                private:

                    /**
                     * 券总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 总已用金额（微分）
                     */
                    int64_t m_totalUsedAmount;
                    bool m_totalUsedAmountHasBeenSet;

                    /**
                     * 代金券使用记录细节
                     */
                    std::vector<UsageRecords> m_usageRecords;
                    bool m_usageRecordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERUSAGEDETAILSRESPONSE_H_
