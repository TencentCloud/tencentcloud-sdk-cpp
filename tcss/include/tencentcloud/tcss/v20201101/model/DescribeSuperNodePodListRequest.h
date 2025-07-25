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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESUPERNODEPODLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESUPERNODEPODLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RunTimeFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeSuperNodePodList请求参数结构体
                */
                class DescribeSuperNodePodListRequest : public AbstractModel
                {
                public:
                    DescribeSuperNodePodListRequest();
                    ~DescribeSuperNodePodListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件。
<li>NodeUniqueID- String - 是否必填：否 - 节点唯一id </li>
<li>PodName- String - 是否必填：否 - Pod示例名称 </li>
<li>PodIP- String - 是否必填：否 - POD IP </li>
<li>Namespace- String - 是否必填：否 - 命名空间 </li>
<li>Deployment- String - 是否必填：否 - 所属工作负载 </li>
<li>Status- String - 是否必填：否 - 状态 </li>

                     * @return Filters 过滤条件。
<li>NodeUniqueID- String - 是否必填：否 - 节点唯一id </li>
<li>PodName- String - 是否必填：否 - Pod示例名称 </li>
<li>PodIP- String - 是否必填：否 - POD IP </li>
<li>Namespace- String - 是否必填：否 - 命名空间 </li>
<li>Deployment- String - 是否必填：否 - 所属工作负载 </li>
<li>Status- String - 是否必填：否 - 状态 </li>

                     * 
                     */
                    std::vector<RunTimeFilters> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>NodeUniqueID- String - 是否必填：否 - 节点唯一id </li>
<li>PodName- String - 是否必填：否 - Pod示例名称 </li>
<li>PodIP- String - 是否必填：否 - POD IP </li>
<li>Namespace- String - 是否必填：否 - 命名空间 </li>
<li>Deployment- String - 是否必填：否 - 所属工作负载 </li>
<li>Status- String - 是否必填：否 - 状态 </li>

                     * @param _filters 过滤条件。
<li>NodeUniqueID- String - 是否必填：否 - 节点唯一id </li>
<li>PodName- String - 是否必填：否 - Pod示例名称 </li>
<li>PodIP- String - 是否必填：否 - POD IP </li>
<li>Namespace- String - 是否必填：否 - 命名空间 </li>
<li>Deployment- String - 是否必填：否 - 所属工作负载 </li>
<li>Status- String - 是否必填：否 - 状态 </li>

                     * 
                     */
                    void SetFilters(const std::vector<RunTimeFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取需要返回的数量，默认为10，最大值为100
                     * @return Limit 需要返回的数量，默认为10，最大值为100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置需要返回的数量，默认为10，最大值为100
                     * @param _limit 需要返回的数量，默认为10，最大值为100
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
                     * 获取排序字段 StartTime
                     * @return By 排序字段 StartTime
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段 StartTime
                     * @param _by 排序字段 StartTime
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
                     * 获取排序方式 asc,desc
                     * @return Order 排序方式 asc,desc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式 asc,desc
                     * @param _order 排序方式 asc,desc
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
                     * 过滤条件。
<li>NodeUniqueID- String - 是否必填：否 - 节点唯一id </li>
<li>PodName- String - 是否必填：否 - Pod示例名称 </li>
<li>PodIP- String - 是否必填：否 - POD IP </li>
<li>Namespace- String - 是否必填：否 - 命名空间 </li>
<li>Deployment- String - 是否必填：否 - 所属工作负载 </li>
<li>Status- String - 是否必填：否 - 状态 </li>

                     */
                    std::vector<RunTimeFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 需要返回的数量，默认为10，最大值为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序字段 StartTime
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 排序方式 asc,desc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESUPERNODEPODLISTREQUEST_H_
