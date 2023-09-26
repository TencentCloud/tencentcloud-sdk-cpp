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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLRESOURCESUMMARYFORORGANIZATIONRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLRESOURCESUMMARYFORORGANIZATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BillDistributionResourceSummary.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBillResourceSummaryForOrganization返回参数结构体
                */
                class DescribeBillResourceSummaryForOrganizationResponse : public AbstractModel
                {
                public:
                    DescribeBillResourceSummaryForOrganizationResponse();
                    ~DescribeBillResourceSummaryForOrganizationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资源汇总列表
                     * @return ResourceSummarySet 资源汇总列表
                     * 
                     */
                    std::vector<BillDistributionResourceSummary> GetResourceSummarySet() const;

                    /**
                     * 判断参数 ResourceSummarySet 是否已赋值
                     * @return ResourceSummarySet 是否已赋值
                     * 
                     */
                    bool ResourceSummarySetHasBeenSet() const;

                    /**
                     * 获取资源汇总列表总数，入参NeedRecordNum为0时不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 资源汇总列表总数，入参NeedRecordNum为0时不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 资源汇总列表
                     */
                    std::vector<BillDistributionResourceSummary> m_resourceSummarySet;
                    bool m_resourceSummarySetHasBeenSet;

                    /**
                     * 资源汇总列表总数，入参NeedRecordNum为0时不返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLRESOURCESUMMARYFORORGANIZATIONRESPONSE_H_
