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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYBYPRODUCTRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYBYPRODUCTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BusinessSummaryTotal.h>
#include <tencentcloud/billing/v20180709/model/BusinessSummaryOverviewItem.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBillSummaryByProduct返回参数结构体
                */
                class DescribeBillSummaryByProductResponse : public AbstractModel
                {
                public:
                    DescribeBillSummaryByProductResponse();
                    ~DescribeBillSummaryByProductResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据是否准备好，0准备中，1已就绪。（Ready=0，为当前UIN首次进行初始化出账，预计需要5~10分钟出账，请于10分钟后重试即可）
                     * @return Ready 数据是否准备好，0准备中，1已就绪。（Ready=0，为当前UIN首次进行初始化出账，预计需要5~10分钟出账，请于10分钟后重试即可）
                     * 
                     */
                    uint64_t GetReady() const;

                    /**
                     * 判断参数 Ready 是否已赋值
                     * @return Ready 是否已赋值
                     * 
                     */
                    bool ReadyHasBeenSet() const;

                    /**
                     * 获取总花费详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SummaryTotal 总花费详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BusinessSummaryTotal GetSummaryTotal() const;

                    /**
                     * 判断参数 SummaryTotal 是否已赋值
                     * @return SummaryTotal 是否已赋值
                     * 
                     */
                    bool SummaryTotalHasBeenSet() const;

                    /**
                     * 获取各产品花费分布
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SummaryOverview 各产品花费分布
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BusinessSummaryOverviewItem> GetSummaryOverview() const;

                    /**
                     * 判断参数 SummaryOverview 是否已赋值
                     * @return SummaryOverview 是否已赋值
                     * 
                     */
                    bool SummaryOverviewHasBeenSet() const;

                private:

                    /**
                     * 数据是否准备好，0准备中，1已就绪。（Ready=0，为当前UIN首次进行初始化出账，预计需要5~10分钟出账，请于10分钟后重试即可）
                     */
                    uint64_t m_ready;
                    bool m_readyHasBeenSet;

                    /**
                     * 总花费详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BusinessSummaryTotal m_summaryTotal;
                    bool m_summaryTotalHasBeenSet;

                    /**
                     * 各产品花费分布
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BusinessSummaryOverviewItem> m_summaryOverview;
                    bool m_summaryOverviewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYBYPRODUCTRESPONSE_H_
