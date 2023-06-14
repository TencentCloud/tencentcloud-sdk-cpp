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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEPOLICYITEMAFFECTEDASSETLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEPOLICYITEMAFFECTEDASSETLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeCompliancePolicyItemAffectedAssetList请求参数结构体
                */
                class DescribeCompliancePolicyItemAffectedAssetListRequest : public AbstractModel
                {
                public:
                    DescribeCompliancePolicyItemAffectedAssetListRequest();
                    ~DescribeCompliancePolicyItemAffectedAssetListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DescribeComplianceTaskPolicyItemSummaryList返回的CustomerPolicyItemId，表示检测项的ID。
                     * @return CustomerPolicyItemId DescribeComplianceTaskPolicyItemSummaryList返回的CustomerPolicyItemId，表示检测项的ID。
                     * 
                     */
                    uint64_t GetCustomerPolicyItemId() const;

                    /**
                     * 设置DescribeComplianceTaskPolicyItemSummaryList返回的CustomerPolicyItemId，表示检测项的ID。
                     * @param _customerPolicyItemId DescribeComplianceTaskPolicyItemSummaryList返回的CustomerPolicyItemId，表示检测项的ID。
                     * 
                     */
                    void SetCustomerPolicyItemId(const uint64_t& _customerPolicyItemId);

                    /**
                     * 判断参数 CustomerPolicyItemId 是否已赋值
                     * @return CustomerPolicyItemId 是否已赋值
                     * 
                     */
                    bool CustomerPolicyItemIdHasBeenSet() const;

                    /**
                     * 获取起始偏移量，默认为0。
                     * @return Offset 起始偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置起始偏移量，默认为0。
                     * @param _offset 起始偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取需要返回的数量，默认为10，最大值为100。
                     * @return Limit 需要返回的数量，默认为10，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置需要返回的数量，默认为10，最大值为100。
                     * @param _limit 需要返回的数量，默认为10，最大值为100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取过滤条件。
Name - String
Name 可取值：NodeName, CheckResult
                     * @return Filters 过滤条件。
Name - String
Name 可取值：NodeName, CheckResult
                     * 
                     */
                    std::vector<ComplianceFilters> GetFilters() const;

                    /**
                     * 设置过滤条件。
Name - String
Name 可取值：NodeName, CheckResult
                     * @param _filters 过滤条件。
Name - String
Name 可取值：NodeName, CheckResult
                     * 
                     */
                    void SetFilters(const std::vector<ComplianceFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * DescribeComplianceTaskPolicyItemSummaryList返回的CustomerPolicyItemId，表示检测项的ID。
                     */
                    uint64_t m_customerPolicyItemId;
                    bool m_customerPolicyItemIdHasBeenSet;

                    /**
                     * 起始偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 需要返回的数量，默认为10，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件。
Name - String
Name 可取值：NodeName, CheckResult
                     */
                    std::vector<ComplianceFilters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEPOLICYITEMAFFECTEDASSETLISTREQUEST_H_
