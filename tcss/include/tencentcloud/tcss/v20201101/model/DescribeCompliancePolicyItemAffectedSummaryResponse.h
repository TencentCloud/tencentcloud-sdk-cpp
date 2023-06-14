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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEPOLICYITEMAFFECTEDSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEPOLICYITEMAFFECTEDSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/CompliancePolicyItemSummary.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeCompliancePolicyItemAffectedSummary返回参数结构体
                */
                class DescribeCompliancePolicyItemAffectedSummaryResponse : public AbstractModel
                {
                public:
                    DescribeCompliancePolicyItemAffectedSummaryResponse();
                    ~DescribeCompliancePolicyItemAffectedSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回各检测项影响的资产的汇总信息。
                     * @return PolicyItemSummary 返回各检测项影响的资产的汇总信息。
                     * 
                     */
                    CompliancePolicyItemSummary GetPolicyItemSummary() const;

                    /**
                     * 判断参数 PolicyItemSummary 是否已赋值
                     * @return PolicyItemSummary 是否已赋值
                     * 
                     */
                    bool PolicyItemSummaryHasBeenSet() const;

                private:

                    /**
                     * 返回各检测项影响的资产的汇总信息。
                     */
                    CompliancePolicyItemSummary m_policyItemSummary;
                    bool m_policyItemSummaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEPOLICYITEMAFFECTEDSUMMARYRESPONSE_H_
