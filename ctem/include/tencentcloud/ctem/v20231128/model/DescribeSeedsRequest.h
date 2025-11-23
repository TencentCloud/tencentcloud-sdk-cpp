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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DESCRIBESEEDSREQUEST_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DESCRIBESEEDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctem/v20231128/model/Filter.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * DescribeSeeds请求参数结构体
                */
                class DescribeSeedsRequest : public AbstractModel
                {
                public:
                    DescribeSeedsRequest();
                    ~DescribeSeedsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业ID
                     * @return CustomerId 企业ID
                     * 
                     */
                    int64_t GetCustomerId() const;

                    /**
                     * 设置企业ID
                     * @param _customerId 企业ID
                     * 
                     */
                    void SetCustomerId(const int64_t& _customerId);

                    /**
                     * 判断参数 CustomerId 是否已赋值
                     * @return CustomerId 是否已赋值
                     * 
                     */
                    bool CustomerIdHasBeenSet() const;

                    /**
                     * 获取创建时间-开始
                     * @return CreateAtStart 创建时间-开始
                     * 
                     */
                    std::string GetCreateAtStart() const;

                    /**
                     * 设置创建时间-开始
                     * @param _createAtStart 创建时间-开始
                     * 
                     */
                    void SetCreateAtStart(const std::string& _createAtStart);

                    /**
                     * 判断参数 CreateAtStart 是否已赋值
                     * @return CreateAtStart 是否已赋值
                     * 
                     */
                    bool CreateAtStartHasBeenSet() const;

                    /**
                     * 获取创建时间-结束
                     * @return CreateAtEnd 创建时间-结束
                     * 
                     */
                    std::string GetCreateAtEnd() const;

                    /**
                     * 设置创建时间-结束
                     * @param _createAtEnd 创建时间-结束
                     * 
                     */
                    void SetCreateAtEnd(const std::string& _createAtEnd);

                    /**
                     * 判断参数 CreateAtEnd 是否已赋值
                     * @return CreateAtEnd 是否已赋值
                     * 
                     */
                    bool CreateAtEndHasBeenSet() const;

                    /**
                     * 获取分页偏移
                     * @return Offset 分页偏移
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移
                     * @param _offset 分页偏移
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
                     * 获取分页大小
                     * @return Limit 分页大小
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页大小
                     * @param _limit 分页大小
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
                     * 获取查询数组
                     * @return Filters 查询数组
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置查询数组
                     * @param _filters 查询数组
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
                     * 企业ID
                     */
                    int64_t m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * 创建时间-开始
                     */
                    std::string m_createAtStart;
                    bool m_createAtStartHasBeenSet;

                    /**
                     * 创建时间-结束
                     */
                    std::string m_createAtEnd;
                    bool m_createAtEndHasBeenSet;

                    /**
                     * 分页偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页大小
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询数组
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DESCRIBESEEDSREQUEST_H_
