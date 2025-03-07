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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONSUMMARYBYBUSINESSRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONSUMMARYBYBUSINESSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/AllocationOverviewTotal.h>
#include <tencentcloud/billing/v20180709/model/AllocationSummaryByBusiness.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeAllocationSummaryByBusiness返回参数结构体
                */
                class DescribeAllocationSummaryByBusinessResponse : public AbstractModel
                {
                public:
                    DescribeAllocationSummaryByBusinessResponse();
                    ~DescribeAllocationSummaryByBusinessResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总条数
                     * @return RecordNum 总条数
                     * 
                     */
                    uint64_t GetRecordNum() const;

                    /**
                     * 判断参数 RecordNum 是否已赋值
                     * @return RecordNum 是否已赋值
                     * 
                     */
                    bool RecordNumHasBeenSet() const;

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

                    /**
                     * 获取分账账单按产品汇总明细
                     * @return Detail 分账账单按产品汇总明细
                     * 
                     */
                    std::vector<AllocationSummaryByBusiness> GetDetail() const;

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                private:

                    /**
                     * 总条数
                     */
                    uint64_t m_recordNum;
                    bool m_recordNumHasBeenSet;

                    /**
                     * 分账账单概览金额汇总

                     */
                    AllocationOverviewTotal m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 分账账单按产品汇总明细
                     */
                    std::vector<AllocationSummaryByBusiness> m_detail;
                    bool m_detailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONSUMMARYBYBUSINESSRESPONSE_H_
