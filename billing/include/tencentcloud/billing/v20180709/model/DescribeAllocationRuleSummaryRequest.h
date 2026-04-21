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
                     * 获取<p>每次获取数据量，最大值1000</p>
                     * @return Limit <p>每次获取数据量，最大值1000</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>每次获取数据量，最大值1000</p>
                     * @param _limit <p>每次获取数据量，最大值1000</p>
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
                     * 获取<p>分页偏移量</p>
                     * @return Offset <p>分页偏移量</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量</p>
                     * @param _offset <p>分页偏移量</p>
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
                     * 获取<p>月份，不传默认当前月</p>
                     * @return Month <p>月份，不传默认当前月</p>
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置<p>月份，不传默认当前月</p>
                     * @param _month <p>月份，不传默认当前月</p>
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
                     * 获取<p>公摊策略类型，用于筛选。<br>枚举值如下：<br>1 - 自定义分摊占比<br>2 - 等比分摊<br>3 - 按占比分摊</p>
                     * @return Type <p>公摊策略类型，用于筛选。<br>枚举值如下：<br>1 - 自定义分摊占比<br>2 - 等比分摊<br>3 - 按占比分摊</p>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>公摊策略类型，用于筛选。<br>枚举值如下：<br>1 - 自定义分摊占比<br>2 - 等比分摊<br>3 - 按占比分摊</p>
                     * @param _type <p>公摊策略类型，用于筛选。<br>枚举值如下：<br>1 - 自定义分摊占比<br>2 - 等比分摊<br>3 - 按占比分摊</p>
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
                     * 获取<p>公摊规则名称或分账单元名称，用于模糊筛选。</p>
                     * @return Name <p>公摊规则名称或分账单元名称，用于模糊筛选。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>公摊规则名称或分账单元名称，用于模糊筛选。</p>
                     * @param _name <p>公摊规则名称或分账单元名称，用于模糊筛选。</p>
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
                     * <p>每次获取数据量，最大值1000</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移量</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>月份，不传默认当前月</p>
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * <p>公摊策略类型，用于筛选。<br>枚举值如下：<br>1 - 自定义分摊占比<br>2 - 等比分摊<br>3 - 按占比分摊</p>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>公摊规则名称或分账单元名称，用于模糊筛选。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONRULESUMMARYREQUEST_H_
