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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBillSummary请求参数结构体
                */
                class DescribeBillSummaryRequest : public AbstractModel
                {
                public:
                    DescribeBillSummaryRequest();
                    ~DescribeBillSummaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取账单月份，格式为2023-04
                     * @return Month 账单月份，格式为2023-04
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置账单月份，格式为2023-04
                     * @param _month 账单月份，格式为2023-04
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
                     * 获取账单维度类型，枚举值如下：business、project、region、payMode、tag
                     * @return GroupType 账单维度类型，枚举值如下：business、project、region、payMode、tag
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置账单维度类型，枚举值如下：business、project、region、payMode、tag
                     * @param _groupType 账单维度类型，枚举值如下：business、project、region、payMode、tag
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取标签键，GroupType=tag获取标签维度账单时传
                     * @return TagKey 标签键，GroupType=tag获取标签维度账单时传
                     * 
                     */
                    std::vector<std::string> GetTagKey() const;

                    /**
                     * 设置标签键，GroupType=tag获取标签维度账单时传
                     * @param _tagKey 标签键，GroupType=tag获取标签维度账单时传
                     * 
                     */
                    void SetTagKey(const std::vector<std::string>& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                private:

                    /**
                     * 账单月份，格式为2023-04
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * 账单维度类型，枚举值如下：business、project、region、payMode、tag
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * 标签键，GroupType=tag获取标签维度账单时传
                     */
                    std::vector<std::string> m_tagKey;
                    bool m_tagKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYREQUEST_H_
