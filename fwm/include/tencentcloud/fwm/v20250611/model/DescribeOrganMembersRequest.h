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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBEORGANMEMBERSREQUEST_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBEORGANMEMBERSREQUEST_H_

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
                * DescribeOrganMembers请求参数结构体
                */
                class DescribeOrganMembersRequest : public AbstractModel
                {
                public:
                    DescribeOrganMembersRequest();
                    ~DescribeOrganMembersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>搜索过滤条件列表，支持按成员 ID、账号名称、身份、纳管状态等字段筛选</p>
                     * @return Filters <p>搜索过滤条件列表，支持按成员 ID、账号名称、身份、纳管状态等字段筛选</p>
                     * 
                     */
                    std::vector<CommonFilter> GetFilters() const;

                    /**
                     * 设置<p>搜索过滤条件列表，支持按成员 ID、账号名称、身份、纳管状态等字段筛选</p>
                     * @param _filters <p>搜索过滤条件列表，支持按成员 ID、账号名称、身份、纳管状态等字段筛选</p>
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
                     * 获取<p>分页大小，默认 20</p>
                     * @return Limit <p>分页大小，默认 20</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页大小，默认 20</p>
                     * @param _limit <p>分页大小，默认 20</p>
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
                     * 获取<p>分页偏移量，默认 0</p>
                     * @return Offset <p>分页偏移量，默认 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，默认 0</p>
                     * @param _offset <p>分页偏移量，默认 0</p>
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
                     * 获取<p>排序字段，如 MemberCreateTime</p>
                     * @return By <p>排序字段，如 MemberCreateTime</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>排序字段，如 MemberCreateTime</p>
                     * @param _by <p>排序字段，如 MemberCreateTime</p>
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
                     * 获取<p>排序方式：asc 升序，desc 降序</p>
                     * @return Order <p>排序方式：asc 升序，desc 降序</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序方式：asc 升序，desc 降序</p>
                     * @param _order <p>排序方式：asc 升序，desc 降序</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * <p>搜索过滤条件列表，支持按成员 ID、账号名称、身份、纳管状态等字段筛选</p>
                     */
                    std::vector<CommonFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>分页大小，默认 20</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移量，默认 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>排序字段，如 MemberCreateTime</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * <p>排序方式：asc 升序，desc 降序</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBEORGANMEMBERSREQUEST_H_
