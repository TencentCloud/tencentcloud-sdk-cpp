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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEBILLUSAGERESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEBILLUSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/OrgBillSummary.h>
#include <tencentcloud/ess/v20201111/model/SubOrgBillSummary.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeBillUsage返回参数结构体
                */
                class DescribeBillUsageResponse : public AbstractModel
                {
                public:
                    DescribeBillUsageResponse();
                    ~DescribeBillUsageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取企业套餐余额及使用情况
                     * @return Summary 企业套餐余额及使用情况
                     * 
                     */
                    std::vector<OrgBillSummary> GetSummary() const;

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取集团子企业套餐使用情况
                     * @return SubOrgSummary 集团子企业套餐使用情况
                     * 
                     */
                    std::vector<SubOrgBillSummary> GetSubOrgSummary() const;

                    /**
                     * 判断参数 SubOrgSummary 是否已赋值
                     * @return SubOrgSummary 是否已赋值
                     * 
                     */
                    bool SubOrgSummaryHasBeenSet() const;

                private:

                    /**
                     * 企业套餐余额及使用情况
                     */
                    std::vector<OrgBillSummary> m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * 集团子企业套餐使用情况
                     */
                    std::vector<SubOrgBillSummary> m_subOrgSummary;
                    bool m_subOrgSummaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEBILLUSAGERESPONSE_H_
