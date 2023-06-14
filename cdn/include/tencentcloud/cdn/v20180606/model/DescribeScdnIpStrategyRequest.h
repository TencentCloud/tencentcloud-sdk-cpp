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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBESCDNIPSTRATEGYREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBESCDNIPSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ScdnIpStrategyFilter.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeScdnIpStrategy请求参数结构体
                */
                class DescribeScdnIpStrategyRequest : public AbstractModel
                {
                public:
                    DescribeScdnIpStrategyRequest();
                    ~DescribeScdnIpStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页起始地址
                     * @return Offset 分页起始地址
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页起始地址
                     * @param _offset 分页起始地址
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
                     * 获取列表分页记录条数，最大1000
                     * @return Limit 列表分页记录条数，最大1000
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置列表分页记录条数，最大1000
                     * @param _limit 列表分页记录条数，最大1000
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
                     * 获取查询条件过滤器
                     * @return Filters 查询条件过滤器
                     * 
                     */
                    std::vector<ScdnIpStrategyFilter> GetFilters() const;

                    /**
                     * 设置查询条件过滤器
                     * @param _filters 查询条件过滤器
                     * 
                     */
                    void SetFilters(const std::vector<ScdnIpStrategyFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取指定查询返回结果的排序字段，支持domain，update_time
                     * @return Order 指定查询返回结果的排序字段，支持domain，update_time
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置指定查询返回结果的排序字段，支持domain，update_time
                     * @param _order 指定查询返回结果的排序字段，支持domain，update_time
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
                     * 获取排序方式，支持asc，desc
                     * @return Sequence 排序方式，支持asc，desc
                     * 
                     */
                    std::string GetSequence() const;

                    /**
                     * 设置排序方式，支持asc，desc
                     * @param _sequence 排序方式，支持asc，desc
                     * 
                     */
                    void SetSequence(const std::string& _sequence);

                    /**
                     * 判断参数 Sequence 是否已赋值
                     * @return Sequence 是否已赋值
                     * 
                     */
                    bool SequenceHasBeenSet() const;

                private:

                    /**
                     * 分页起始地址
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 列表分页记录条数，最大1000
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询条件过滤器
                     */
                    std::vector<ScdnIpStrategyFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 指定查询返回结果的排序字段，支持domain，update_time
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序方式，支持asc，desc
                     */
                    std::string m_sequence;
                    bool m_sequenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBESCDNIPSTRATEGYREQUEST_H_
