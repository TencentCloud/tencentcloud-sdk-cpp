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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONRULESUMMARYREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONRULESUMMARYREQUEST_H_

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
                * DescribeAllocationRuleSummary请求参数结构体
                */
                class DescribeAllocationRuleSummaryRequest : public AbstractModel
                {
                public:
                    DescribeAllocationRuleSummaryRequest();
                    ~DescribeAllocationRuleSummaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取每次获取数据量，最大值1000
                     * @return Limit 每次获取数据量，最大值1000
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每次获取数据量，最大值1000
                     * @param _limit 每次获取数据量，最大值1000
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
                     * 获取分页偏移量
                     * @return Offset 分页偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量
                     * @param _offset 分页偏移量
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
                     * 获取月份，不传默认当前月
                     * @return Month 月份，不传默认当前月
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置月份，不传默认当前月
                     * @param _month 月份，不传默认当前月
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
                     * 获取公摊策略类型，用于筛选。
枚举值如下： 
1 - 自定义分摊占比 
2 - 等比分摊 
3 - 按占比分摊
                     * @return Type 公摊策略类型，用于筛选。
枚举值如下： 
1 - 自定义分摊占比 
2 - 等比分摊 
3 - 按占比分摊
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置公摊策略类型，用于筛选。
枚举值如下： 
1 - 自定义分摊占比 
2 - 等比分摊 
3 - 按占比分摊
                     * @param _type 公摊策略类型，用于筛选。
枚举值如下： 
1 - 自定义分摊占比 
2 - 等比分摊 
3 - 按占比分摊
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取公摊规则名称或分账单元名称，用于模糊筛选。
                     * @return Name 公摊规则名称或分账单元名称，用于模糊筛选。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置公摊规则名称或分账单元名称，用于模糊筛选。
                     * @param _name 公摊规则名称或分账单元名称，用于模糊筛选。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 每次获取数据量，最大值1000
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 月份，不传默认当前月
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * 公摊策略类型，用于筛选。
枚举值如下： 
1 - 自定义分摊占比 
2 - 等比分摊 
3 - 按占比分摊
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 公摊规则名称或分账单元名称，用于模糊筛选。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONRULESUMMARYREQUEST_H_
