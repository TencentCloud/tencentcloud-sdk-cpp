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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONFINANCIALBYMONTHREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONFINANCIALBYMONTHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * DescribeOrganizationFinancialByMonth请求参数结构体
                */
                class DescribeOrganizationFinancialByMonthRequest : public AbstractModel
                {
                public:
                    DescribeOrganizationFinancialByMonthRequest();
                    ~DescribeOrganizationFinancialByMonthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询月数。取值范围：1~6，默认值：6
                     * @return Limit 查询月数。取值范围：1~6，默认值：6
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询月数。取值范围：1~6，默认值：6
                     * @param _limit 查询月数。取值范围：1~6，默认值：6
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取查询结束月份。格式：yyyy-mm，例如：2021-01
                     * @return EndMonth 查询结束月份。格式：yyyy-mm，例如：2021-01
                     * 
                     */
                    std::string GetEndMonth() const;

                    /**
                     * 设置查询结束月份。格式：yyyy-mm，例如：2021-01
                     * @param _endMonth 查询结束月份。格式：yyyy-mm，例如：2021-01
                     * 
                     */
                    void SetEndMonth(const std::string& _endMonth);

                    /**
                     * 判断参数 EndMonth 是否已赋值
                     * @return EndMonth 是否已赋值
                     * 
                     */
                    bool EndMonthHasBeenSet() const;

                    /**
                     * 获取查询成员列表。 最大100个
                     * @return MemberUins 查询成员列表。 最大100个
                     * 
                     */
                    std::vector<int64_t> GetMemberUins() const;

                    /**
                     * 设置查询成员列表。 最大100个
                     * @param _memberUins 查询成员列表。 最大100个
                     * 
                     */
                    void SetMemberUins(const std::vector<int64_t>& _memberUins);

                    /**
                     * 判断参数 MemberUins 是否已赋值
                     * @return MemberUins 是否已赋值
                     * 
                     */
                    bool MemberUinsHasBeenSet() const;

                    /**
                     * 获取查询产品列表。 最大100个
                     * @return ProductCodes 查询产品列表。 最大100个
                     * 
                     */
                    std::vector<std::string> GetProductCodes() const;

                    /**
                     * 设置查询产品列表。 最大100个
                     * @param _productCodes 查询产品列表。 最大100个
                     * 
                     */
                    void SetProductCodes(const std::vector<std::string>& _productCodes);

                    /**
                     * 判断参数 ProductCodes 是否已赋值
                     * @return ProductCodes 是否已赋值
                     * 
                     */
                    bool ProductCodesHasBeenSet() const;

                private:

                    /**
                     * 查询月数。取值范围：1~6，默认值：6
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询结束月份。格式：yyyy-mm，例如：2021-01
                     */
                    std::string m_endMonth;
                    bool m_endMonthHasBeenSet;

                    /**
                     * 查询成员列表。 最大100个
                     */
                    std::vector<int64_t> m_memberUins;
                    bool m_memberUinsHasBeenSet;

                    /**
                     * 查询产品列表。 最大100个
                     */
                    std::vector<std::string> m_productCodes;
                    bool m_productCodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONFINANCIALBYMONTHREQUEST_H_
