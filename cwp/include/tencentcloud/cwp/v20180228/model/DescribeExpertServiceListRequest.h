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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEXPERTSERVICELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEXPERTSERVICELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeExpertServiceList请求参数结构体
                */
                class DescribeExpertServiceListRequest : public AbstractModel
                {
                public:
                    DescribeExpertServiceListRequest();
                    ~DescribeExpertServiceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件。
<li>Keyword- String - 是否必填：否 - 关键词过滤，</li>
<li>Uuids - String - 是否必填：否 - 主机id过滤</li>
                     * @return Filters 过滤条件。
<li>Keyword- String - 是否必填：否 - 关键词过滤，</li>
<li>Uuids - String - 是否必填：否 - 主机id过滤</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>Keyword- String - 是否必填：否 - 关键词过滤，</li>
<li>Uuids - String - 是否必填：否 - 主机id过滤</li>
                     * @param _filters 过滤条件。
<li>Keyword- String - 是否必填：否 - 关键词过滤，</li>
<li>Uuids - String - 是否必填：否 - 主机id过滤</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取需要返回的数量，最大值为100
                     * @return Limit 需要返回的数量，最大值为100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置需要返回的数量，最大值为100
                     * @param _limit 需要返回的数量，最大值为100
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
                     * 获取排序步长
                     * @return Offset 排序步长
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置排序步长
                     * @param _offset 排序步长
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
                     * 获取排序方法
                     * @return Order 排序方法
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方法
                     * @param _order 排序方法
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
                     * 获取排序字段 StartTime，EndTime
                     * @return By 排序字段 StartTime，EndTime
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段 StartTime，EndTime
                     * @param _by 排序字段 StartTime，EndTime
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
                     * 过滤条件。
<li>Keyword- String - 是否必填：否 - 关键词过滤，</li>
<li>Uuids - String - 是否必填：否 - 主机id过滤</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 需要返回的数量，最大值为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序步长
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序方法
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段 StartTime，EndTime
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEXPERTSERVICELISTREQUEST_H_
