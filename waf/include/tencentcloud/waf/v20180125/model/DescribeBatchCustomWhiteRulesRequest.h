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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBATCHCUSTOMWHITERULESREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBATCHCUSTOMWHITERULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/FiltersItemNew.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeBatchCustomWhiteRules请求参数结构体
                */
                class DescribeBatchCustomWhiteRulesRequest : public AbstractModel
                {
                public:
                    DescribeBatchCustomWhiteRulesRequest();
                    ~DescribeBatchCustomWhiteRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
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
                     * 获取页尺寸，默认为10
                     * @return Limit 页尺寸，默认为10
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置页尺寸，默认为10
                     * @param _limit 页尺寸，默认为10
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
                     * 获取排序字段"modify_time"-更新时间、"sort_id"-优先级、"id"-规则Id、"create_time"-创建时间，默认为update_time
                     * @return By 排序字段"modify_time"-更新时间、"sort_id"-优先级、"id"-规则Id、"create_time"-创建时间，默认为update_time
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段"modify_time"-更新时间、"sort_id"-优先级、"id"-规则Id、"create_time"-创建时间，默认为update_time
                     * @param _by 排序字段"modify_time"-更新时间、"sort_id"-优先级、"id"-规则Id、"create_time"-创建时间，默认为update_time
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取排序类型desc-降序、asc-升序，默认为desc
                     * @return Order 排序类型desc-降序、asc-升序，默认为desc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序类型desc-降序、asc-升序，默认为desc
                     * @param _order 排序类型desc-降序、asc-升序，默认为desc
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取筛选列表，支持按照 ID：规则RuleId、Domain：生效的域名、Name：规则名称来筛选、ValidStatus：生效状态、Status：开关状态、TimerType：生效方式
                     * @return Filters 筛选列表，支持按照 ID：规则RuleId、Domain：生效的域名、Name：规则名称来筛选、ValidStatus：生效状态、Status：开关状态、TimerType：生效方式
                     * 
                     */
                    std::vector<FiltersItemNew> GetFilters() const;

                    /**
                     * 设置筛选列表，支持按照 ID：规则RuleId、Domain：生效的域名、Name：规则名称来筛选、ValidStatus：生效状态、Status：开关状态、TimerType：生效方式
                     * @param _filters 筛选列表，支持按照 ID：规则RuleId、Domain：生效的域名、Name：规则名称来筛选、ValidStatus：生效状态、Status：开关状态、TimerType：生效方式
                     * 
                     */
                    void SetFilters(const std::vector<FiltersItemNew>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 偏移量，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 页尺寸，默认为10
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段"modify_time"-更新时间、"sort_id"-优先级、"id"-规则Id、"create_time"-创建时间，默认为update_time
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 排序类型desc-降序、asc-升序，默认为desc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 筛选列表，支持按照 ID：规则RuleId、Domain：生效的域名、Name：规则名称来筛选、ValidStatus：生效状态、Status：开关状态、TimerType：生效方式
                     */
                    std::vector<FiltersItemNew> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBATCHCUSTOMWHITERULESREQUEST_H_
