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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBEACCOUNTGROUPSREQUEST_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBEACCOUNTGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fwm/v20250611/model/CommonFilter.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * DescribeAccountGroups请求参数结构体
                */
                class DescribeAccountGroupsRequest : public AbstractModel
                {
                public:
                    DescribeAccountGroupsRequest();
                    ~DescribeAccountGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关键词搜索（可选）
                     * @return Filters 关键词搜索（可选）
                     * 
                     */
                    std::vector<CommonFilter> GetFilters() const;

                    /**
                     * 设置关键词搜索（可选）
                     * @param _filters 关键词搜索（可选）
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
                     * 获取分页大小，默认20
                     * @return Limit 分页大小，默认20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页大小，默认20
                     * @param _limit 分页大小，默认20
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
                     * 获取分页偏移，默认0
                     * @return Offset 分页偏移，默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移，默认0
                     * @param _offset 分页偏移，默认0
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
                     * 获取顺序
                     * @return Order 顺序
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置顺序
                     * @param _order 顺序
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
                     * 获取排序字段
                     * @return By 排序字段
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段
                     * @param _by 排序字段
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
                     * 关键词搜索（可选）
                     */
                    std::vector<CommonFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 分页大小，默认20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移，默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 顺序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBEACCOUNTGROUPSREQUEST_H_
