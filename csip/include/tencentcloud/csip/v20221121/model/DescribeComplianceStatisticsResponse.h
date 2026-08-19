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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOMPLIANCESTATISTICSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOMPLIANCESTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ComplianceStandardRuleCount.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeComplianceStatistics返回参数结构体
                */
                class DescribeComplianceStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeComplianceStatisticsResponse();
                    ~DescribeComplianceStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>检查项数量</p>
                     * @return TotalCount <p>检查项数量</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>合规标准和检查项分布</p>
                     * @return Standards <p>合规标准和检查项分布</p>
                     * 
                     */
                    std::vector<ComplianceStandardRuleCount> GetStandards() const;

                    /**
                     * 判断参数 Standards 是否已赋值
                     * @return Standards 是否已赋值
                     * 
                     */
                    bool StandardsHasBeenSet() const;

                private:

                    /**
                     * <p>检查项数量</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>合规标准和检查项分布</p>
                     */
                    std::vector<ComplianceStandardRuleCount> m_standards;
                    bool m_standardsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOMPLIANCESTATISTICSRESPONSE_H_
