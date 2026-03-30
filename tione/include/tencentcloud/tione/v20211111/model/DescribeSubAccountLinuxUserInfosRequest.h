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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBESUBACCOUNTLINUXUSERINFOSREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBESUBACCOUNTLINUXUSERINFOSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/Filter.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeSubAccountLinuxUserInfos请求参数结构体
                */
                class DescribeSubAccountLinuxUserInfosRequest : public AbstractModel
                {
                public:
                    DescribeSubAccountLinuxUserInfosRequest();
                    ~DescribeSubAccountLinuxUserInfosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页偏移量（0 表示全量）
                     * @return Offset 分页偏移量（0 表示全量）
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量（0 表示全量）
                     * @param _offset 分页偏移量（0 表示全量）
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
                     * 获取每页数量（0 表示全量）
                     * @return Limit 每页数量（0 表示全量）
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页数量（0 表示全量）
                     * @param _limit 每页数量（0 表示全量）
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
                     * 获取过滤条件
                     * @return Filters 过滤条件
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件
                     * @param _filters 过滤条件
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 分页偏移量（0 表示全量）
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页数量（0 表示全量）
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBESUBACCOUNTLINUXUSERINFOSREQUEST_H_
