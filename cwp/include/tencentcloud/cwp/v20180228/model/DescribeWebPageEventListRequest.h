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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWEBPAGEEVENTLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWEBPAGEEVENTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetFilters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeWebPageEventList请求参数结构体
                */
                class DescribeWebPageEventListRequest : public AbstractModel
                {
                public:
                    DescribeWebPageEventListRequest();
                    ~DescribeWebPageEventListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件
<li>IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>EventType - String - 是否必填：否 - 事件类型</li>
<li>EventStatus - String - 是否必填：否 - 事件状态</li>
                     * @return Filters 过滤条件
<li>IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>EventType - String - 是否必填：否 - 事件类型</li>
<li>EventStatus - String - 是否必填：否 - 事件状态</li>
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置过滤条件
<li>IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>EventType - String - 是否必填：否 - 事件类型</li>
<li>EventStatus - String - 是否必填：否 - 事件状态</li>
                     * @param _filters 过滤条件
<li>IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>EventType - String - 是否必填：否 - 事件类型</li>
<li>EventStatus - String - 是否必填：否 - 事件状态</li>
                     * 
                     */
                    void SetFilters(const std::vector<AssetFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
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
                     * 获取返回数量，默认为10，最大值为100。
                     * @return Limit 返回数量，默认为10，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为10，最大值为100。
                     * @param _limit 返回数量，默认为10，最大值为100。
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
                     * 获取排序方式：CreateTime 或 RestoreTime，默认为CreateTime
                     * @return By 排序方式：CreateTime 或 RestoreTime，默认为CreateTime
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序方式：CreateTime 或 RestoreTime，默认为CreateTime
                     * @param _by 排序方式：CreateTime 或 RestoreTime，默认为CreateTime
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
                     * 获取排序方式，0降序，1升序，默认为0
                     * @return Order 排序方式，0降序，1升序，默认为0
                     * 
                     */
                    uint64_t GetOrder() const;

                    /**
                     * 设置排序方式，0降序，1升序，默认为0
                     * @param _order 排序方式，0降序，1升序，默认为0
                     * 
                     */
                    void SetOrder(const uint64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 过滤条件
<li>IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>EventType - String - 是否必填：否 - 事件类型</li>
<li>EventStatus - String - 是否必填：否 - 事件状态</li>
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为10，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序方式：CreateTime 或 RestoreTime，默认为CreateTime
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 排序方式，0降序，1升序，默认为0
                     */
                    uint64_t m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWEBPAGEEVENTLISTREQUEST_H_
