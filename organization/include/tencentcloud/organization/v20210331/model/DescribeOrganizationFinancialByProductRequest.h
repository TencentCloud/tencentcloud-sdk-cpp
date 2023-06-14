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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONFINANCIALBYPRODUCTREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONFINANCIALBYPRODUCTREQUEST_H_

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
                * DescribeOrganizationFinancialByProduct请求参数结构体
                */
                class DescribeOrganizationFinancialByProductRequest : public AbstractModel
                {
                public:
                    DescribeOrganizationFinancialByProductRequest();
                    ~DescribeOrganizationFinancialByProductRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询开始月份。格式：yyyy-mm，例如：2021-01
                     * @return Month 查询开始月份。格式：yyyy-mm，例如：2021-01
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置查询开始月份。格式：yyyy-mm，例如：2021-01
                     * @param _month 查询开始月份。格式：yyyy-mm，例如：2021-01
                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                    /**
                     * 获取限制数目。取值范围：1~50，默认值：10	
                     * @return Limit 限制数目。取值范围：1~50，默认值：10	
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置限制数目。取值范围：1~50，默认值：10	
                     * @param _limit 限制数目。取值范围：1~50，默认值：10	
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
                     * 获取偏移量。取值是limit的整数倍，默认值 : 0
                     * @return Offset 偏移量。取值是limit的整数倍，默认值 : 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量。取值是limit的整数倍，默认值 : 0
                     * @param _offset 偏移量。取值是limit的整数倍，默认值 : 0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询结束月份。格式：yyyy-mm，例如：2021-01,默认值为查询开始月份
                     * @return EndMonth 查询结束月份。格式：yyyy-mm，例如：2021-01,默认值为查询开始月份
                     * 
                     */
                    std::string GetEndMonth() const;

                    /**
                     * 设置查询结束月份。格式：yyyy-mm，例如：2021-01,默认值为查询开始月份
                     * @param _endMonth 查询结束月份。格式：yyyy-mm，例如：2021-01,默认值为查询开始月份
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
                     * 查询开始月份。格式：yyyy-mm，例如：2021-01
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * 限制数目。取值范围：1~50，默认值：10	
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量。取值是limit的整数倍，默认值 : 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询结束月份。格式：yyyy-mm，例如：2021-01,默认值为查询开始月份
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

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONFINANCIALBYPRODUCTREQUEST_H_
