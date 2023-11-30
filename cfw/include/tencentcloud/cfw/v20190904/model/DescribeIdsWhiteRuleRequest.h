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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEIDSWHITERULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEIDSWHITERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CommonFilter.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeIdsWhiteRule请求参数结构体
                */
                class DescribeIdsWhiteRuleRequest : public AbstractModel
                {
                public:
                    DescribeIdsWhiteRuleRequest();
                    ~DescribeIdsWhiteRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取每页条数
                     * @return Limit 每页条数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页条数
                     * @param _limit 每页条数
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
                     * 获取偏移值
                     * @return Offset 偏移值
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移值
                     * @param _offset 偏移值
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
                     * 获取过滤条件组合
                     * @return Filters 过滤条件组合
                     * 
                     */
                    std::vector<CommonFilter> GetFilters() const;

                    /**
                     * 设置过滤条件组合
                     * @param _filters 过滤条件组合
                     * 
                     */
                    void SetFilters(const std::vector<CommonFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取desc：降序；asc：升序。根据By字段的值进行排序，这里传参的话则By也必须有值
                     * @return Order desc：降序；asc：升序。根据By字段的值进行排序，这里传参的话则By也必须有值
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置desc：降序；asc：升序。根据By字段的值进行排序，这里传参的话则By也必须有值
                     * @param _order desc：降序；asc：升序。根据By字段的值进行排序，这里传参的话则By也必须有值
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
                     * 获取排序所用到的字段
                     * @return By 排序所用到的字段
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序所用到的字段
                     * @param _by 排序所用到的字段
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * 每页条数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移值
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤条件组合
                     */
                    std::vector<CommonFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * desc：降序；asc：升序。根据By字段的值进行排序，这里传参的话则By也必须有值
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序所用到的字段
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEIDSWHITERULEREQUEST_H_
